// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    ┌──┐            ┌──┐
    │  │            │  │
    └──┘            └──┘
┌──┐┌──┐┌──┐    ┌──┐┌──┐┌──┐
│  ││  ││  │    │  ││  ││  │
└──┘└──┘└──┘    └──┘└──┘└──┘
    ┌──┐            ┌──┐
    │  │            │  │
    └──┘            └──┘
    ┌──┐            ┌──┐
    │  │            │  │
    └──┘            └──┘
┌──┐┌──┐┌──┐    ┌──┐┌──┐┌──┐
│  ││  ││  │    │  ││  ││  │
└──┘└──┘└──┘    └──┘└──┘└──┘
    ┌──┐            ┌──┐
    │  │            │  │
    └──┘            └──┘
    ┌──┐            ┌──┐
    │  │            │  │
    └──┘            └──┘
┌──┐┌──┐┌──┐    ┌──┐┌──┐┌──┐
│  ││  ││  │    │  ││  ││  │
└──┘└──┘└──┘    └──┘└──┘└──┘
    ┌──┐            ┌──┐
    │  │            │  │
    └──┘            └──┘
    ┌──┐            ┌──┐
    │  │            │  │
    └──┘            └──┘
┌──┐┌──┐┌──┐    ┌──┐┌──┐┌──┐
│  ││  ││  │    │  ││  ││  │
└──┘└──┘└──┘    └──┘└──┘└──┘
    ┌──┐            ┌──┐
    │  │            │  │
    └──┘            └──┘

     */
    [0] = LAYOUT(
        KC_G,   KC_R,    KC_B,   KC_V,   KC_F,
        KC_T,   KC_E,    KC_SPC, KC_C,   KC_D,
        KC_NO,  KC_W,    KC_NO,  KC_X,   KC_S,
        KC_RSFT,KC_Q,    KC_NO,  KC_Z,   KC_A,

        KC_H,   KC_M,    KC_N,   KC_U,   KC_J,
        KC_Y,   KC_COMM, KC_SPC, KC_I,   KC_K,
        KC_NO,  KC_DOT,  KC_NO,  KC_O,   KC_L,
        KC_RSFT,KC_SLSH, KC_NO,  KC_P,   KC_SCLN
    )
};
