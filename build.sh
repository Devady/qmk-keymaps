#!/usr/bin/env bash
KEYBOARD=planck
KEYMAP=devady
QMK_DIR=qmk_firmware

set -e

# Clean
rm -rf .build

# Copy my files into their appropriate locations inside QMK
mkdir -p $QMK_DIR/keyboards/$KEYBOARD/keymaps/$KEYMAP
cp -r $KEYMAP/ $QMK_DIR/keyboards/$KEYBOARD/keymaps/

# Clean QMK
cd $QMK_DIR
qmk clean --all

# Compile
qmk compile -kb planck/rev6 -km $KEYMAP

# Clean up
cp -r .build ../.build
git clean -f -d
git checkout -- .