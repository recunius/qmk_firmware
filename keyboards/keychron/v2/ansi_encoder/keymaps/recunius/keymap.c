/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

// clang-format off

enum layers{
    BASE,
    _FN0,
    _FN1,
    _FN_GAME0,
    _FN_GAME1
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_ansi_67(
        QK_GESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_PGUP,
        KC_LCTL, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,           KC_PGDN,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT, KC_UP,
        MO(_FN0), KC_LWIN, KC_LALT,                             KC_SPC,                             KC_RALT,  MO(_FN1), MO(_FN0), KC_LEFT, KC_DOWN, KC_RGHT),

    [_FN0] = LAYOUT_ansi_67(
        KC_GRV,  KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,           KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_PGUP,  KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_HOME,
        KC_CAPS, KC_HOME,  KC_END,   KC_D,    KC_F,    KC_G,    KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_SCLN,  KC_QUOT,            KC_ENT,           KC_END,
        KC_LSFT,           KC_INS,   KC_DEL,  KC_C,    KC_V,    KC_B,    KC_PGDN, KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT, KC_UP,
        _______, KC_DEL,   KC_LALT,                             KC_SPC,                              KC_RALT,  TG(_FN_GAME0), _______,  KC_LEFT, KC_DOWN, KC_RGHT),

    [_FN1] = LAYOUT_ansi_67(
        KC_GRV,  KC_BRID,  KC_BRIU,  KC_NO,   KC_NO,   RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,          _______,
        RGB_TOG, RGB_MOD,  RGB_VAI,  RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, RGB_RMOD, RGB_VAD,  RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, _______, _______, _______,  _______,            _______,          _______,
        _______,           _______,  _______, _______, _______, _______, NK_TOGG, _______, _______, _______,  _______,            _______, _______,
        _______, _______,  _______,                             _______,                            _______,  _______,  _______,  _______, _______, _______),

    [_FN_GAME0] = LAYOUT_ansi_67(
        KC_GRV,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_PGUP,
        KC_LCTL, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT,            KC_ENT,           KC_ESC,
        KC_LSFT,           KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,            KC_RSFT, KC_UP,
        LT(_FN_GAME1, KC_SLSH), KC_BSLS,  KC_LALT,                             KC_SPC,                             KC_RALT,  _______,  _______, KC_LEFT, KC_DOWN, KC_RGHT),

    [_FN_GAME1] = LAYOUT_ansi_67(
        KC_GRV, KC_F1,    KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,   KC_F11,   KC_F12,    KC_DEL,          _______,
        _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,          _______,
        _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______,          _______,
        _______,           _______,  _______, _______, _______, _______, _______, _______, _______, _______,  _______,            _______, _______,
        _______, _______,  _______,                             _______,                            _______,  _______,  _______,  _______, _______, _______),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_FN0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_FN1]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [_FN_GAME0]   = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_FN_GAME1]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
};
#endif // ENCODER_MAP_ENABLE
void keyboard_post_init_user(void) {
    rgb_matrix_enable_noeeprom();
}

const uint8_t layer_leds[] = { 57, 58, 59, 60, 61, 62, 63 };
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for(int i=0; i < sizeof(layer_leds) / sizeof(uint8_t); i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case _FN0:
                rgb_matrix_set_color(layer_leds[i], RGB_GREEN);
                break;
            case _FN1:
                rgb_matrix_set_color(layer_leds[i], RGB_ORANGE);
                break;
            case _FN_GAME0:
                rgb_matrix_set_color(layer_leds[i], RGB_BLUE);
                break;
            case _FN_GAME1:
                rgb_matrix_set_color(layer_leds[i], RGB_MAGENTA);
                break;
            default:
                rgb_matrix_set_color(layer_leds[i], RGB_OFF);
                break;
        }
    }
    return false;
}

// layer_state_t layer_state_set_user(layer_state_t state) {
//     rgb_matrix_set_color_all(0, 0, 0);
//     switch (get_highest_layer(state)) {
//         case _FN0:
//             // rgb_matrix_disable_noeeprom();
//             // rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
//             rgb_matrix_set_color(CAPS_LOCK_LED_INDEX, RGB_GREEN);
//             break;
//         case _FN1:
//             // rgb_matrix_disable_noeeprom();
//             // rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
//             rgb_matrix_set_color(CAPS_LOCK_LED_INDEX, RGB_ORANGE);
//             break;
//         case _FN_GAME0:
//             // rgb_matrix_enable_noeeprom();
//             // rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
//             rgb_matrix_set_color(CAPS_LOCK_LED_INDEX, RGB_BLUE);
//             break;
//         case _FN_GAME1:
//             // rgb_matrix_enable_noeeprom();
//             // rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
//             rgb_matrix_set_color(CAPS_LOCK_LED_INDEX, RGB_MAGENTA);
//             break;
//         default: // for any other layers, or the default layer
//             // rgb_matrix_disable();
//             break;
//     }
//   return state;
// }
