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

#include "potyt.h"

/* Initialization */

__attribute__((weak))
void keyboard_post_init_keymap(void){ }

void keyboard_post_init_user(void) {
    /* disable auto shift by default */
    autoshift_disable();
}

/* Leader */

bool leader_suceeded;

void leader_start(void) {
    leader_suceeded = false;
}

void leader_end(void) {
    if (leader_suceeded) {
    } else {
    }
}

/* Tap Dance */

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_PWR] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_PWR)
};

/* Matrix Scan User */

LEADER_EXTERNS();

void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
        leading = false;

        SEQ_ONE_KEY(KC_M) {
            SEND_STRING("Moon is the best!");
            leader_suceeded = true;
        }

        leader_end();
    }
}
