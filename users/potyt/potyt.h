/*
Copyright 2019 pot p@pot.yt @potyt

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include "quantum.h"
#include "version.h"

/* Keycodes */

#define ALT_1 LALT(KC_1)
#define ALT_2 LALT(KC_2)
#define ALT_3 LALT(KC_3)
#define ALT_4 LALT(KC_4)
#define ALT_5 LALT(KC_5)
#define ALT_6 LALT(KC_6)
#define ALT_7 LALT(KC_7)
#define ALT_8 LALT(KC_8)
#define ALT_9 LALT(KC_9)
#define ALT_0 LALT(KC_0)
#define ALT_N LALT(KC_N)
#define ALT_P LALT(KC_P)

/* Layers */

enum _layer {
    LY_QWTY,
    LY_DVRK,
    LY_CLMK,
    LY_FUNC,
    LY_NAVI,
    LY_LAYR,
    LY_LRGB,
    LY_LBCK,
    LY_CTRL,
};

/* Tap Dances */

enum _tapdance {
    TD_PWR = 0,
};
