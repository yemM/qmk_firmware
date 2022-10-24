/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
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

#pragma once

#ifdef OLED_DRIVER_ENABLE
    #define OLED_DISPLAY_128X64
    #define OLED_TIMEOUT 120000
    #define OLED_FADE_OUT
    #define OLED_FADE_OUT_INTERVAL 15

    // #define OLED_FONT_HEIGHT 10
#endif

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_SPLIT
    #define RGBLIGHT_HUE_STEP  8
    #define RGBLIGHT_SAT_STEP  8
    #define RGBLIGHT_VAL_STEP  8
    #define RGBLIGHT_LIMIT_VAL 255
//    #undef RGBLED_NUM
//    #define RGBLIGHT_ANIMATIONS

//    #define RGBLIGHT_EFFECT_ALTERNATING
//    #define RGBLIGHT_EFFECT_BREATHING
//    #define RGBLIGHT_EFFECT_CHRISTMAS
//    #define RGBLIGHT_EFFECT_KNIGHT
//    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//    #define RGBLIGHT_EFFECT_RGB_TEST
//    #define RGBLIGHT_EFFECT_SNAKE
//    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//    #define RGBLIGHT_EFFECT_TWINKLE

    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_BREATHING
    #undef RGBLIGHT_EFFECT_CHRISTMAS
    #undef RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #undef RGBLIGHT_EFFECT_RGB_TEST
    #undef RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #undef RGBLIGHT_EFFECT_TWINKLE

//    #define RGBLIGHT_MODE_STATIC_LIGHT
//    #define RGBLIGHT_MODE_BREATHING {0,1,2,3}
//    #define RGBLIGHT_MODE_RAINBOW_MOOD {0,1,2}
//    #define RGBLIGHT_MODE_RAINBOW_SWIRL {0,1,2,3,4,5}
//    #define RGBLIGHT_MODE_SNAKE {0,1,2,3,4,5}
//    #define RGBLIGHT_MODE_KNIGHT {0,1,2}
//    #define RGBLIGHT_MODE_CHRISTMAS
//    #define RGBLIGHT_MODE_STATIC_GRADIENT {0,1,2,3,4,5,6,7,8,9}
//    #define RGBLIGHT_MODE_RGB_TEST
//    #define RGBLIGHT_MODE_ALTERNATING
//    #define RGBLIGHT_MODE_TWINKLE {0,1,2,3,4,5}

//    #define RGBLIGHT_MODE_STATIC_LIGHT
//    #define RGBLIGHT_MODE_BREATHING {0,1,2,3}
//    #define RGBLIGHT_MODE_RAINBOW_MOOD {0,1,2}
//    #define RGBLIGHT_MODE_RAINBOW_SWIRL {0,1,2,3,4,5}
//    #define RGBLIGHT_MODE_SNAKE {0,1,2,3,4,5}
//    #define RGBLIGHT_MODE_KNIGHT {0,1,2}
//    #define RGBLIGHT_MODE_CHRISTMAS
//    #define RGBLIGHT_MODE_STATIC_GRADIENT {0,1,2,3,4,5,6,7,8,9}
//    #define RGBLIGHT_MODE_RGB_TEST
//    #define RGBLIGHT_MODE_ALTERNATING
//    #define RGBLIGHT_MODE_TWINKLE {0,1,2,3,4,5}

//    #define RGBLIGHT_LED_MAP {0,1,2,9,8,7,4,3,5,6,19,18,17,10,11,12,15,16,14,13} // Orients Kyria LEDs to a circle around both halves.
//    #define RBGLIGHT_LED_MAP {9,8,6,7,5,3,2,4,1,0,10,12,13,11,14,16,17,15,18,19} // Orients Kyria LEDs for a left half-right half columnar progression.

//    #define RGBLED_NUM 12

#endif

#ifdef WPM_ENABLE
    #define SPLIT_WPM_ENABLE
#endif

#define SPLIT_LAYER_STATE_ENABLE
// Lets you roll mod-tap keys
#define IGNORE_MOD_TAP_INTERRUPT
