/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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
#include <stdio.h>

uint16_t wpm_graph_timer = 0;


enum layers {
    _COLEMAK_DH = 0,
    _MACOS,
    _QWERTY,
    _SYM,
    _NUM,
    _MEDIA,
    _FUNCTION,
};


// Aliases for readability
#define QWERTY   DF(_QWERTY)
#define COLEMAK  DF(_COLEMAK_DH)
#define MACOS   DF(_MACOS)

#define SYM      MO(_SYM)
#define NUM      MO(_NUM)
#define FKEYS    MO(_FUNCTION)
#define MEDIA   MO(_MEDIA)

#define CTL_ESC  MT(MOD_LCTL, KC_ESC)
#define CTL_QUOT MT(MOD_RCTL, KC_QUOTE)
#define CTL_MINS MT(MOD_RCTL, KC_MINUS)
#define ALT_ENT  MT(MOD_LALT, KC_ENT)

#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to  * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [_COLEMAK_DH] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_BSPC, KC_ESC, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_ENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_DEL, KC_DEL, KC_LBRC, KC_RBRC, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_LCTL, KC_LALT, LCTL_T(KC_LGUI), LT(3,KC_SPC), LT(4,KC_SPC), LT(4,KC_SPC), LT(3,KC_SPC), KC_RSFT, MO(5), MO(6)),
        [_MACOS] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [_QWERTY] = LAYOUT(KC_TRNS, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TRNS, KC_TRNS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_TRNS, KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_TRNS, KC_TRNS, KC_TRNS, KC_SPC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [_SYM] = LAYOUT(KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSLS, KC_TRNS, KC_EQL, KC_MINS, KC_PLUS, MC_0, MC_1, KC_PGUP, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_PIPE, KC_UNDS, KC_TILD, KC_QUOT, KC_GRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_END, KC_NO),
        [_NUM] = LAYOUT(KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
        [_MEDIA] = LAYOUT(KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_MUTE, KC_VOLU, KC_WH_D, KC_BTN1, KC_MS_U, KC_BTN2, KC_BTN5, KC_ACL2, RGB_SPI, RGB_SAI, RGB_HUI, RGB_VAI, RGB_MOD, RGB_TOG, KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN4, KC_ACL1, RGB_SPD, RGB_SAD, RGB_HUD, RGB_VAD, RGB_RMOD, RGB_M_P, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DF(0), DF(1), DF(2), KC_BTN3, KC_ACL0, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [_FUNCTION] = LAYOUT(KC_F11, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F12, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case MC_0:
                SEND_STRING(SS_TAP(X_QUOT) SS_TAP(X_SPC));
                return false;
            case MC_1:
                SEND_STRING(SS_TAP(X_GRV) SS_TAP(X_SPC));
                return false;
        }
    }

    return true;
};

/* The default OLED and rotary encoder code can be found at the bottom of qmk_firmware/keyboards/splitkb/kyria/rev1/rev1.c
 * These default settings can be overriden by your own settings in your keymap.c
 * For your convenience, here's a copy of those settings so that you can uncomment them if you wish to apply your own modifications.
 * DO NOT edit the rev1.c file; instead override the weakly defined default functions by your own.
 */

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

//static void render_qmk_logo(void) {
//  static const char PROGMEM qmk_logo[] = {
//    0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
//    0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
//    0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};
//  oled_write_P(qmk_logo, false);
//}

static void render_kyria_logo(void) {
    static const char PROGMEM kyria_logo[] = {
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,128,128,192,224,240,112,120, 56, 60, 28, 30, 14, 14, 14,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7,  7, 14, 14, 14, 30, 28, 60, 56,120,112,240,224,192,128,128,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,192,224,240,124, 62, 31, 15,  7,  3,  1,128,192,224,240,120, 56, 60, 28, 30, 14, 14,  7,  7,135,231,127, 31,255,255, 31,127,231,135,  7,  7, 14, 14, 30, 28, 60, 56,120,240,224,192,128,  1,  3,  7, 15, 31, 62,124,240,224,192,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,240,252,255, 31,  7,  1,  0,  0,192,240,252,254,255,247,243,177,176, 48, 48, 48, 48, 48, 48, 48,120,254,135,  1,  0,  0,255,255,  0,  0,  1,135,254,120, 48, 48, 48, 48, 48, 48, 48,176,177,243,247,255,254,252,240,192,  0,  0,  1,  7, 31,255,252,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,254,255,255,  1,  1,  7, 30,120,225,129,131,131,134,134,140,140,152,152,177,183,254,248,224,255,255,224,248,254,183,177,152,152,140,140,134,134,131,131,129,225,120, 30,  7,  1,  1,255,255,254,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0,255,255,  0,  0,192,192, 48, 48,  0,  0,240,240,  0,  0,  0,  0,  0,  0,240,240,  0,  0,240,240,192,192, 48, 48, 48, 48,192,192,  0,  0, 48, 48,243,243,  0,  0,  0,  0,  0,  0, 48, 48, 48, 48, 48, 48,192,192,  0,  0,  0,  0,  0,
        0,  0,  0,255,255,255,  0,  0,  0,  0,  0,127,255,255,128,128,224,120, 30,135,129,193,193, 97, 97, 49, 49, 25, 25,141,237,127, 31,  7,255,255,  7, 31,127,237,141, 25, 25, 49, 49, 97, 97,193,193,129,135, 30,120,224,128,128,255,255,127,  0,  0,  0,  0,  0,255,255,255,  0,  0,  0,  0, 63, 63,  3,  3, 12, 12, 48, 48,  0,  0,  0,  0, 51, 51, 51, 51, 51, 51, 15, 15,  0,  0, 63, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 48, 48, 63, 63, 48, 48,  0,  0, 12, 12, 51, 51, 51, 51, 51, 51, 63, 63,  0,  0,  0,  0,  0,
        0,  0,  0,  0, 15, 63,255,248,224,128,  0,  0,  3, 15, 63,127,255,239,207,141, 13, 12, 12, 12, 12, 12, 12, 12, 30,127,225,128,  0,  0,255,255,  0,  0,128,225,127, 30, 12, 12, 12, 12, 12, 12, 12, 13,141,207,239,255,127, 63, 15,  3,  0,  0,128,224,248,255, 63, 15,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  3,  7, 15, 62,124,248,240,224,192,128,  1,  3,  7, 15, 30, 28, 60, 56,120,112,112,224,224,225,231,254,248,255,255,248,254,231,225,224,224,112,112,120, 56, 60, 28, 30, 15,  7,  3,  1,128,192,224,240,248,124, 62, 15,  7,  3,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  3,  7, 15, 14, 30, 28, 60, 56,120,112,112,112,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,224,112,112,112,120, 56, 60, 28, 30, 14, 15,  7,  3,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    };
    oled_write_raw_P(kyria_logo, sizeof(kyria_logo));
}

static void render_status(void) {
    // QMK Logo and version information
    // render_qmk_logo();
    oled_write_P(PSTR("Kyria rev2.1 [v5]\n"), false);
    oled_write_P(PSTR("---------------------\n"), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state|default_layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Gaming\n"), false);
            break;
        case _MACOS:
            oled_write_P(PSTR("Mac OS\n"), false);
            break;
        case _COLEMAK_DH:
            oled_write_P(PSTR("Colemak\n"), false);
            break;
        case _NUM:
            oled_write_P(PSTR("Numbers\n"), false);
            break;
        case _SYM:
            oled_write_P(PSTR("Symbols\n"), false);
            break;
        case _FUNCTION:
            oled_write_P(PSTR("Function\n"), false);
            break;
        case _MEDIA:
            oled_write_P(PSTR("Media\n"), false);
            break;
        default:
            oled_write_P(PSTR("¯\\_(ツ)_/¯\n"), false);
    }
    oled_write_P(PSTR("\n"), false);

    // Display color mode
    // RGB Modes
    // 1 = Static
    // 2-5 = Breathing
    // 6-8 = Rainbow
    // 9-14 = Swirl
    // 15-20 = Snake
    // 21-24 = Nightrider
    // 25 = Christmas
    // 26-30 = Static Gradient
    oled_write_P(PSTR("Mode:"), false);
//    switch (rgblight_get_mode()) {
//        case 1:
//            oled_write_P(PSTR("Static"), false);
//            break;
//        case 2:
//            oled_write_P(PSTR("Breathing 1/4"), false);
//            break;
//        case 3:
//            oled_write_P(PSTR("Breathing 2/4"), false);
//            break;
//        case 4:
//            oled_write_P(PSTR("Breathing 3/4"), false);
//            break;
//        case 5:
//            oled_write_P(PSTR("Breathing 4/4"), false);
//            break;
//        case 6:
//            oled_write_P(PSTR("Rainbow 1/3"), false);
//            break;
//        case 7:
//            oled_write_P(PSTR("Rainbow 2/3"), false);
//            break;
//        case 8:
//            oled_write_P(PSTR("Rainbow 3/3"), false);
//            break;
//        case 9:
//            oled_write_P(PSTR("Swirl 1/6"), false);
//            break;
//        case 10:
//            oled_write_P(PSTR("Swirl 2/6"), false);
//            break;
//        case 11:
//            oled_write_P(PSTR("Swirl 3/6"), false);
//            break;
//        case 12:
//            oled_write_P(PSTR("Swirl 4/6"), false);
//            break;
//        case 13:
//            oled_write_P(PSTR("Swirl 5/6"), false);
//            break;
//        case 14:
//            oled_write_P(PSTR("Swirl 6/6"), false);
//            break;
//        case 15:
//            oled_write_P(PSTR("Snake 1/6"), false);
//            break;
//        case 16:
//            oled_write_P(PSTR("Snake 2/6"), false);
//            break;
//        case 17:
//            oled_write_P(PSTR("Snake 3/6"), false);
//            break;
//        case 18:
//            oled_write_P(PSTR("Snake 4/6"), false);
//            break;
//        case 19:
//            oled_write_P(PSTR("Snake 5/6"), false);
//            break;
//        case 20:
//            oled_write_P(PSTR("Snake 6/6"), false);
//            break;
//        case 21:
//            oled_write_P(PSTR("Knightrider 1/3"), false);
//            break;
//        case 22:
//            oled_write_P(PSTR("Knightrider 2/3"), false);
//            break;
//        case 23:
//            oled_write_P(PSTR("Knightrider 3/3"), false);
//            break;
//        case 24:
//            oled_write_P(PSTR("Christmas"), false);
//            break;
//        case 25:
//            oled_write_P(PSTR("Static gradient 1/10"), false);
//            break;
//        case 26:
//            oled_write_P(PSTR("Static gradient 2/10"), false);
//            break;
//        case 27:
//            oled_write_P(PSTR("Static gradient 3/10"), false);
//            break;
//        case 28:
//            oled_write_P(PSTR("Static gradient 4/10"), false);
//            break;
//        case 29:
//            oled_write_P(PSTR("Static gradient 5/10"), false);
//            break;
//        case 30:
//            oled_write_P(PSTR("Static gradient 6/10"), false);
//            break;
//        case 31:
//            oled_write_P(PSTR("Static gradient 7/10"), false);
//            break;
//        case 32:
//            oled_write_P(PSTR("Static gradient 8/10"), false);
//            break;
//        case 33:
//            oled_write_P(PSTR("Static gradient 9/10"), false);
//            break;
//        case 34:
//            oled_write_P(PSTR("Static gradient 10/10"), false);
//            break;
//        default:
//            oled_write_P(PSTR("¯\\_(ツ)_/¯\n"), false);
//    }

    oled_write(get_u8_str(rgblight_get_mode(), ' '), false);
    oled_write_P(PSTR("\n"), false);

    #ifdef WPM_ENABLE
        // Write WPM
        oled_write_P(PSTR("\nWPM: "), false);
        oled_write(get_u8_str(get_current_wpm(), '0'), false);
        oled_write_P(PSTR(" "), false);
    #endif
}

static uint8_t zero_bar_count = 0;
static uint8_t bar_count = 0;

static void render_wpm_graph(void) {
    uint8_t bar_height = 0;
    uint8_t bar_segment = 0;

    if (wpm_graph_timer == 0) {
        render_kyria_logo();
        wpm_graph_timer = timer_read();
        return;
    }
    if(timer_elapsed(wpm_graph_timer) > 500) {
        wpm_graph_timer = timer_read();

        if(OLED_DISPLAY_HEIGHT == 64)
            bar_height = get_current_wpm();
        if(OLED_DISPLAY_HEIGHT == 32)
            bar_height = get_current_wpm() / 2;
        if(bar_height > OLED_DISPLAY_HEIGHT)
            bar_height = OLED_DISPLAY_HEIGHT;

        if(bar_height == 0) {
            // keep track of how many zero bars we have drawn.  If
            // there is a whole screen worth, turn the display off and
            // wait until there is something to do
            if (zero_bar_count > OLED_DISPLAY_WIDTH) {
                //oled_off();
                render_kyria_logo();
                return;
            }
            zero_bar_count++;
        } else
            zero_bar_count=0;

        oled_pan(false);
        bar_count++;
        for (uint8_t i = (OLED_DISPLAY_HEIGHT / 8); i > 0; i--) {
            if (bar_height > 7) {
                if (i % 2 == 1 && bar_count % 3 == 0)
                    bar_segment = 254;
                else
                    bar_segment = 255;
                bar_height -= 8;
            } else {
                switch (bar_height) {
                    case 0:
                    bar_segment = 0;
                    break;

                    case 1:
                    bar_segment = 128;
                    break;

                    case 2:
                    bar_segment = 192;
                    break;

                    case 3:
                    bar_segment = 224;
                    break;

                    case 4:
                    bar_segment = 240;
                    break;

                    case 5:
                    bar_segment = 248;
                    break;

                    case 6:
                    bar_segment = 252;
                    break;

                    case 7:
                    bar_segment = 254;
                    break;
                }
                bar_height = 0;

                if (i % 2 == 1 && bar_count % 3 == 0)
                    bar_segment++;
            }
            oled_write_raw_byte(bar_segment, (i-1) * OLED_DISPLAY_WIDTH);
        }
    }
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status();
    } else {
        //render_kyria_logo();
        render_wpm_graph();
    }
    return false;
}
#endif

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {

    if (index == 0) {
        // Volume control
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        // Page up/Page down
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return false;
}
#endif
