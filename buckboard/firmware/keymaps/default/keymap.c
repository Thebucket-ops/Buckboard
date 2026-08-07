// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_italian.h"
enum layer_names {
    _BASE, 
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_AUDIO_MUTE, KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        IT_BSLS, IT_1, IT_2, IT_3, IT_4, IT_5, IT_6, IT_7, IT_8, IT_9, IT_0, KC_QUOT, IT_IGRV, KC_BACKSPACE,
        KC_TAB, IT_Q, IT_W, IT_E, IT_R, IT_T, IT_Y, IT_U, IT_I, IT_O, IT_P, IT_EGRV, IT_PLUS, KC_DELETE,
        KC_CAPS_LOCK, IT_A, IT_S, IT_D, IT_F, IT_G, IT_H, IT_H, IT_K, IT_L, IT_OGRV, IT_AGRV, IT_UGRV, KC_ENTER,
        KC_LEFT_SHIFT, IT_LABK, IT_Z, IT_X, IT_C, IT_V, IT_B, IT_N, IT_M, IT_COMM, IT_DOT, IT_MINS, KC_RIGHT_SHIFT,
        KC_LEFT_CTRL, KC_LEFT_GUI, KC_LEFT_ALT, KC_SPACE, KC_SPACE, KC_RIGHT_ALT, KC_RIGHT_GUI, KC_MPLY, KC_RIGHT_CTRL
    )
};
const uint16_t PROGMEM encoder_map[][1][2] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
};

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Default\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }
    return false;
}
#endif

// int16_t joystick_read_axis(uint8_t GP27)
// int16_t joystick_read_axis(uint8_t GP28)