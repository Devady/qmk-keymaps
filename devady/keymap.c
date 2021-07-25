/* Copyright 2021 Adrian Villacorta
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  | Shift|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | XXXX | Ctrl | Alt  | GUI  | LSYM |    Space    | LNAV |   '  |   `  |   \  | XXXX |
 *                                -                    =    
 * `-----------------------------------------------------------------------------------'
 */
[QWERTY_LAYER] = LAYOUT_planck_mit_wrapper(
    KC_TAB,  _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KC_BSPC,
    KC_ESC,  _________________QWERTY_L2_________________, _________________QWERTY_R2_________________, KC_ENT,
    KC_LSFT, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________, KC_RSFT,
    XXXXXXX, KC_LCTL,  KC_LALT,  KC_LGUI,  SYM_MIN,   KC_SPC,  NAV_EQL,  KC_QUOT,  KC_GRV,  KC_BSLS,  XXXXXXX
),

/* Symbol
 * ,-----------------------------------------------------------------------------------.
 * |      |   !  |   @  |   #  |   $  |      |      |   %  |   ^  |   &  |   *  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |   {  |   [  |   (  |      |      |   )  |   ]  |   }  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[SYM_LAYER] = LAYOUT_planck_mit_wrapper(
    _______, __________________SYM_L1___________________, __________________SYM_R1___________________, _______,
    _______, __________________SYM_L2___________________, __________________SYM_R2___________________, _______,
    _______, __________________SYM_L3___________________, __________________SYM_R3___________________, _______,
    _______, _______,  _______,  _______,  _______,      _______,     _______,  _______, _______, _______, _______
),

/* Nav
 *        v------------PAGE----------v       v------------ARROW----------v
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Home | PgDn | PgUp | End  |      |   L  |   D  |   U  |   R  |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |  ⌃L  |      |      |  ⌃R |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[NAV_LAYER] = LAYOUT_planck_mit_wrapper(
    _______, __________________NAV_L1___________________, __________________NAV_R1___________________, _______,
    _______, __________________NAV_L2___________________, __________________NAV_R2___________________, _______,
    _______, __________________NAV_L3___________________, __________________NAV_R3___________________, _______,
    _______, _______, _______, _______, _______,      _______,     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
),

/* Number
 * ,-----------------------------------------------------------------------------------.
 * |      |  F12 |  F11 |  F10 |  F9  |      |      |   7  |   8  |   9  |   /  |   *  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F8  |  F7  |  F6  |  F5  |      |      |   4  |   5  |   6  |   -  |   +  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F4  |  F3  |  F2  |  F1  |      |      |   1  |   2  |   3  |   .  |   =  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |   0  |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[NUM_LAYER] = LAYOUT_planck_mit_wrapper(
    _______, __________________NUM_L1___________________, __________________NUM_R1__________________________,
    _______, __________________NUM_L2___________________, __________________NUM_R2__________________________,
    _______, __________________NUM_L3___________________, __________________NUM_R3__________________________,
    _______, _______, _______, _______, _______,     _______,    __________________NUM_R4___________________
),

/* Adjust
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|Debug | RGB  |RGBMOD| HUE+ | HUE- | SAT+ | SAT- |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |MUSmod|Aud on|Audoff|AGnorm|AGswap|Qwerty|      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|Musoff|MIDIon|MIDIof|TermOn|TermOf|      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[ADJUST_LAYER] = LAYOUT_planck_mit_wrapper(
    _______, RESET,   DEBUG,   RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,  RGB_VAI, RGB_VAD, KC_DEL ,
    _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  _______,  UC(0x40B), UC(0x20AC), _______,
    _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  TERM_ON, TERM_OFF, UC(0x00D1), UC(0x00F1), _______,
    _______, _______, _______, _______, _______,      _______,     _______, _______,  _______, _______, _______
)

};

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, SYM_LAYER, NAV_LAYER, ADJUST_LAYER);
}

void rgb_matrix_indicators_user(void) {
    switch (get_highest_layer(layer_state)) {
        case QWERTY_LAYER:
            break;
        case SYM_LAYER:
            rgb_matrix_set_color_all(RGB_SPRINGGREEN);
            break;
        case NAV_LAYER:
            rgb_matrix_set_color_all(RGB_ORANGE);
            break;
        case NUM_LAYER:
            rgb_matrix_set_color(0, RGB_WHITE);
            rgb_matrix_set_color(6, RGB_ORANGE);
            rgb_matrix_set_color(7, RGB_ORANGE);
            rgb_matrix_set_color(5, RGB_YELLOW);
            rgb_matrix_set_color(8, RGB_YELLOW);
            rgb_matrix_set_color(4, RGB_PURPLE);
            rgb_matrix_set_color(1, RGB_PURPLE);
            rgb_matrix_set_color(3, RGB_MAGENTA);
            rgb_matrix_set_color(2, RGB_MAGENTA);
            break;
        case ADJUST_LAYER:
            rgb_matrix_set_color_all(RGB_RED);
            break;
        default:
            break;
    }
}