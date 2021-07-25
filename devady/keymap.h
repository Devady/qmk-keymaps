#pragma once

#include "quantum.h"
#include "version.h"

enum planck_layers {
  QWERTY_LAYER,
  SYM_LAYER,
  NAV_LAYER,
  NUM_LAYER,
  ADJUST_LAYER
};

enum planck_keycodes {
  QWERTY = SAFE_RANGE,
  SEND_VERSION,
};

#define NAV_EQL LT(NAV_LAYER, KC_EQL)
#define SYM_MIN LT(SYM_LAYER, KC_MINS)
#define NUM_F LT(NUM_LAYER, KC_F)
#define NUM_J LT(NUM_LAYER, KC_J)

#define LAYOUT_planck_mit_wrapper(...) LAYOUT_planck_mit(__VA_ARGS__)

#define _________________QWERTY_L1_________________ KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________ KC_A,    KC_S,    KC_D,    NUM_F,   KC_G
#define _________________QWERTY_L3_________________ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define _________________QWERTY_R2_________________ KC_H,    NUM_J,   KC_K,    KC_L,    KC_SCLN
#define _________________QWERTY_R3_________________ KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH

#define __________________NAV_L1___________________ XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
#define __________________NAV_L2___________________ KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,     XXXXXXX
#define __________________NAV_L3___________________ XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX

#define __________________NAV_R1___________________ XXXXXXX,        XXXXXXX,    XXXXXXX,    XXXXXXX,        XXXXXXX
#define __________________NAV_R2___________________ KC_LEFT,        KC_DOWN,    KC_UP,      KC_RGHT,        XXXXXXX
#define __________________NAV_R3___________________ LCTL(KC_LEFT),  XXXXXXX,    XXXXXXX,    LCTL(KC_RGHT),  XXXXXXX

#define __________________SYM_L1___________________ KC_EXLM,      KC_AT,      KC_HASH,    KC_DLR,     XXXXXXX
#define __________________SYM_L2___________________ XXXXXXX,      KC_LCBR,    KC_LBRC,    KC_LPRN,    XXXXXXX
#define __________________SYM_L3___________________ XXXXXXX,      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX

#define __________________SYM_R1___________________ XXXXXXX,      KC_PERC,    KC_CIRC,    KC_AMPR,    KC_ASTR
#define __________________SYM_R2___________________ XXXXXXX,      KC_RPRN,    KC_RBRC,    KC_RCBR,    XXXXXXX
#define __________________SYM_R3___________________ XXXXXXX,      XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX

#define __________________NUM_L1___________________ KC_F12,   KC_F11,     KC_F10,     KC_F9,      XXXXXXX
#define __________________NUM_L2___________________ KC_F8,    KC_F7,      KC_F6,      KC_F5,      XXXXXXX
#define __________________NUM_L3___________________ KC_F4,    KC_F3,      KC_F2,      KC_F1,      XXXXXXX

#define __________________NUM_R1__________________________ XXXXXXX,    KC_7,       KC_8,       KC_9,       KC_SLSH,    KC_ASTR
#define __________________NUM_R2__________________________ XXXXXXX,    KC_4,       KC_5,       KC_6,       KC_MINS,    S(KC_EQL)
#define __________________NUM_R3__________________________ XXXXXXX,    KC_1,       KC_2,       KC_3,       KC_DOT,     KC_EQL
#define __________________NUM_R4___________________        KC_0,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX
