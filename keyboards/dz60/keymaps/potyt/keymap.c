#include QMK_KEYBOARD_H

/* LAYOUT_60_ansi_split_bs_rshift
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
 * │00 │01 │02 │03 │04 │05 │06 │07 │08 │09 │0a │0b │0c │0d │0e │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
 * │10   │12 │13 │14 │15 │16 │17 │18 │19 │1a │1b │1c │1d │1e   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │20    │22 │23 │24 │25 │26 │27 │28 │29 │2a │2b │2c │2d      │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┤
 * │30      │32 │33 │34 │35 │36 │37 │38 │39 │3a │3b │3d    │3e │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬┴───┤
 * │40  │41  │43  │46                      │4a  │4b  │4d  │4e  │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
*/


#define GRAVE_MODS (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

/* default layers */
#define _QWTY_L 0
#define _DVRK_L 1
#define _CLMK_L 2

/* additional layers */
#define _FUNC_L 10
#define _NAVI_L 11
#define _LAYR_L 12
#define _LGHT_L 13
#define _CONF_L 14

/* control layer */
#define _CTRL_L 31

/*
enum my_layers {
    _QWTY_L,
    _DVRK_L,
    _CLMK_L,
    _FUNC_L,
    _NAVI_L,
    _LAYR_L,
    _LGHT_L,
    _CONF_L,
    _CTRL_L
};

enum my_keycodes {
};
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* default layers */
    
    /* Keymap _QWTY_L: Base Qwerty layer */
    [_QWTY_L] = LAYOUT_60_ansi_split_bs_rshift(
            KC_ESC,      KC_1,        KC_2,        KC_3,        KC_4,        KC_5,        KC_6,        KC_7,        KC_8,        KC_9,        KC_0,        KC_MINS,     KC_EQL,      KC_BSLS,     KC_GRV,
            KC_TAB,      KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,        KC_Y,        KC_U,        KC_I,        KC_O,        KC_P,        KC_LBRC,     KC_RBRC,                  KC_BSPC,
            KC_LCTL,     KC_A,        KC_S,        KC_D,        KC_F,        KC_G,        KC_H,        KC_J,        KC_K,        KC_L,        KC_SCLN,     KC_QUOT,                               KC_ENT,
            KC_LSPO,                  KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,        KC_N,        KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,                  KC_RSPC,     MO(_FUNC_L),
            KC_NO,                    KC_LALT,     MO(_NAVI_L),                           KC_SPC,                                             MO(_NAVI_L), KC_RALT,     MO(_CTRL_L),              KC_NO
    ),

    /* additional layers */

    /* Keymap _FUNC_L: Standard function layer */
    [_FUNC_L] = LAYOUT_60_ansi_split_bs_rshift(
	    KC_PWR,      KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_F6,       KC_F7,       KC_F8,       KC_F9,       KC_F10,      KC_F11,      KC_F12,      KC_INS,      KC_DEL,
	    KC_CAPS,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     KC_PSCR,     KC_SLCK,     KC_PAUS,     KC_UP,       _______,                  _______,
	    _______,     KC_VOLD,     KC_VOLU,     KC_MUTE,     KC_EJCT,     _______,     KC_PAST,     KC_PSLS,     KC_HOME,     KC_PGUP,     KC_LEFT,     KC_RGHT,                               _______,
	    _______,                  _______,     _______,     _______,     _______,     _______,     KC_PPLS,     KC_PMNS,     KC_END,      KC_PGDN,     KC_DOWN,                  _______,     _______,
            _______,                  _______,     _______,                               _______,                                            _______,     _______,     _______,                  _______
    ),

    /* Keymap _NAVI_L: Vim-style navigation layer */
    [_NAVI_L] = LAYOUT_60_ansi_split_bs_rshift(
            _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,
            _______,     _______,     KC_UP,       _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,                  _______,
	    _______,     KC_LEFT,     KC_DOWN,     KC_RIGHT,    _______,     _______,     KC_LEFT,     KC_DOWN,     KC_UP,       KC_RGHT,     _______,     _______,                               _______,
            _______,                  _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,                  _______,     _______,
            _______,                  _______,     _______,                               _______,                                            _______,     _______,     _______,                  _______
    ),

    /* last layer */

    /* Keymap _CTRL_L: Control layer */
    [_CTRL_L] = LAYOUT_60_ansi_split_bs_rshift(
            RESET,       _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     DEBUG,
            _______,     DF(_QWTY_L), _______,     _______,     _______,     _______,     _______,     KC_ASON,     KC_ASOFF,    KC_ASTG,     KC_ASUP,     KC_ASDN,     KC_ASRP,                  _______,
	    _______,     _______,     _______,     DF(_DVRK_L), _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,                               _______,
            _______,                  _______,     _______,     DF(_CLMK_L), _______,     _______,     _______,     _______,     _______,     _______,     _______,                  _______,     _______,
            _______,                  _______,     _______,                               _______,                                            _______,     _______,     _______,                  _______
    )
};

/*

// Tap Dance

enum
{
    CT_CLN = 0,
};

void dance_cln_finished (qk_tap_dance_state_t *state, void *user_data)
{
    if (state->count == 1)
    {
        register_code (KC_RSFT);
        register_code (KC_SCLN);
    }
    else
    {
        register_code (KC_SCLN);
    }
}

void dance_cln_reset (qk_tap_dance_state_t *state, void *user_data)
{
    if (state->count == 1)
    {
        unregister_code (KC_RSFT);
        unregister_code (KC_SCLN);
    }
    else
    {
        unregister_code (KC_SCLN);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [CT_CLN] = ACTION_TAP_DANCE_FN_ADVANCED (NULL, dance_cln_finished, dance_cln_reset)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// BL_TOGG Turn the backlight on or off
// BL_STEP Cycle through backlight levels
// BL_ON Set the backlight to max brightness
// BL_OFF Turn the backlight off
// BL_INC Increase the backlight level
// BL_DEC Decrease the backlight level
// BL_BRTG Toggle backlight breathing

// Keymap _CONF_L: Configuration Layer
[_CONF_L] = LAYOUT_60_hhkb(
	_______, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  _______, _______, _______, _______, BR_DEC,  BR_INC,  _______, _______,
	_______, _______, _______, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  _______, _______, _______, _______, ES_DEC,  ES_INC,  _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
	_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
			 _______, _______,                            _______,                            _______, _______),
*/
