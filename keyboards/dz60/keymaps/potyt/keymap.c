#include QMK_KEYBOARD_H
#include "potyt.h"

#define GRAVE_MODS (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Default Layer */
    /* LY_QWTY: Qwerty layer: http://www.keyboard-layout-editor.com/#/gists/aaf1882c1c882ba604d04ea2429841f6 */
    [LY_QWTY] = LAYOUT_60_ansi_split_bs_rshift(
            KC_ESC,      KC_1,        KC_2,        KC_3,        KC_4,        KC_5,        KC_6,        KC_7,        KC_8,        KC_9,        KC_0,        KC_MINS,     KC_EQL,      KC_BSLS,     KC_GRV,
            KC_TAB,      KC_Q,        KC_W,        KC_E,        KC_R,        KC_T,        KC_Y,        KC_U,        KC_I,        KC_O,        KC_P,        KC_LBRC,     KC_RBRC,                  KC_BSPC,
            KC_LCTL,     KC_A,        KC_S,        KC_D,        KC_F,        KC_G,        KC_H,        KC_J,        KC_K,        KC_L,        KC_SCLN,     KC_QUOT,                               KC_ENT,
            KC_LSFT,     KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,        KC_N,        KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,                  KC_RSFT,                  MO(LY_FUNC),
            KC_LOCK,     KC_LALT,     MO(LY_NAVI),                           KC_SPC,                                             MO(LY_LAYR), KC_RALT,                  MO(LY_CTRL),              KC_LEAD
    ),

    /* Default Layer */
    /* LY_DVRK: Dvorak layer: */
    [LY_DVRK] = LAYOUT_60_ansi_split_bs_rshift(
            KC_ESC,      KC_1,        KC_2,        KC_3,        KC_4,        KC_5,        KC_6,        KC_7,        KC_8,        KC_9,        KC_0,        KC_LBRC,     KC_RBRC,     KC_BSLS,     KC_GRV,
            KC_TAB,      KC_QUOT,     KC_COMM,     KC_DOT,      KC_P,        KC_Y,        KC_F,        KC_G,        KC_C,        KC_R,        KC_L,        KC_SLSH,     KC_EQL,                   KC_BSPC,
            KC_LCTL,     KC_A,        KC_O,        KC_E,        KC_U,        KC_I,        KC_D,        KC_H,        KC_T,        KC_N,        KC_S,        KC_MINS,                               KC_ENT,
            KC_LSFT,     KC_SCLN,     KC_Q,        KC_J,        KC_K,        KC_X,        KC_B,        KC_M,        KC_W,        KC_V,        KC_Z,                     KC_RSFT,                  MO(LY_FUNC),
            KC_LOCK,     KC_LALT,     MO(LY_NAVI),                           KC_SPC,                                             MO(LY_LAYR), KC_RALT,                  MO(LY_CTRL),              KC_LEAD
    ),

    /* Default Layer */
    /* LY_CLMK: Colemak layer: */
    [LY_CLMK] = LAYOUT_60_ansi_split_bs_rshift(
            KC_ESC,      KC_1,        KC_2,        KC_3,        KC_4,        KC_5,        KC_6,        KC_7,        KC_8,        KC_9,        KC_0,        KC_MINS,     KC_EQL,      KC_BSLS,     KC_GRV,
            KC_TAB,      KC_Q,        KC_W,        KC_F,        KC_P,        KC_G,        KC_J,        KC_L,        KC_U,        KC_Y,        KC_SCLN,     KC_LBRC,     KC_RBRC,                  KC_BSPC,
            KC_LCTL,     KC_A,        KC_R,        KC_S,        KC_T,        KC_D,        KC_H,        KC_N,        KC_E,        KC_I,        KC_O,        KC_QUOT,                               KC_ENT,
            KC_LSFT,     KC_Z,        KC_X,        KC_C,        KC_V,        KC_B,        KC_K,        KC_M,        KC_COMM,     KC_DOT,      KC_SLSH,                  KC_RSFT,                  MO(LY_FUNC),
            KC_LOCK,     KC_LALT,     MO(LY_NAVI),                           KC_SPC,                                             MO(LY_LAYR), KC_RALT,                  MO(LY_CTRL),              KC_LEAD
    ),

    /* LY_FUNC: Standard function layer */
    [LY_FUNC] = LAYOUT_60_ansi_split_bs_rshift(
	    TD(TD_PWR),  KC_F1,       KC_F2,       KC_F3,       KC_F4,       KC_F5,       KC_F6,       KC_F7,       KC_F8,       KC_F9,       KC_F10,      KC_F11,      KC_F12,      KC_INS,      KC_DEL,
	    KC_CAPS,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     KC_PSCR,     KC_SLCK,     KC_PAUS,     KC_UP,       _______,                  _______,
	    _______,     KC_VOLD,     KC_VOLU,     KC_MUTE,     KC_EJCT,     _______,     KC_PAST,     KC_PSLS,     KC_HOME,     KC_PGUP,     KC_LEFT,     KC_RGHT,                               _______,
	    _______,     _______,     _______,     _______,     _______,     _______,     KC_PPLS,     KC_PMNS,     KC_END,      KC_PGDN,     KC_DOWN,                  _______,                  _______,
            _______,     _______,     _______,                               _______,                                            _______,     _______,                  _______,                  _______
    ),

    /* LY_NAVI: Vim-style navigation layer */
    [LY_NAVI] = LAYOUT_60_ansi_split_bs_rshift(
            _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,
            _______,     _______,     KC_UP,       _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,                  _______,
	    _______,     KC_LEFT,     KC_DOWN,     KC_RIGHT,    _______,     _______,     KC_LEFT,     KC_DOWN,     KC_UP,       KC_RGHT,     _______,     _______,                               _______,
            _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,                  _______,                  _______,
            _______,     _______,     _______,                               _______,                                            _______,     _______,                  _______,                  _______
    ),

    /* LY_LAYR: Layer selection layer */
    [LY_LAYR] = LAYOUT_60_ansi_split_bs_rshift(
            _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,
            _______,     DF(LY_QWTY), _______,     _______,     TG(LY_LRGB), _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,                  _______,
	    _______,     _______,     _______,     DF(LY_DVRK), _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,                               _______,
            _______,     _______,     _______,     DF(LY_CLMK), _______,     TG(LY_LBCK), _______,     _______,     _______,     _______,     _______,                  _______,                  _______,
            _______,     _______,     _______,                               _______,                                            _______,     _______,                  _______,                  _______
    ),

    /* LY_LRGB: RGB lighting layer */
    [LY_LRGB] = LAYOUT_60_ansi_split_bs_rshift(
            _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,
            _______,     RGB_TOG,     RGB_MOD,     RGB_RMOD,    _______,     _______,     _______,     _______,     RGB_HUI,     RGB_HUD,     _______,     _______,     _______,                  _______,
	    _______,     RGB_M_P,     RGB_M_B,     RGB_M_R,     RGB_M_SW,    RGB_M_SN,    _______,     _______,     RGB_SAI,     RGB_SAD,     _______,     _______,                               _______,
            _______,     RGB_M_K,     RGB_M_X,     RGB_M_G,     RGB_M_T,     _______,     _______,     _______,     RGB_VAI,     RGB_VAD,     _______,                  _______,                  _______,
            _______,     _______,     _______,                               _______,                                            _______,     _______,                  _______,                  _______
    ),

    /* LY_LBCK: Backlight layer */
    [LY_LBCK] = LAYOUT_60_ansi_split_bs_rshift(
            _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,
            _______,     BL_TOGG,     BL_BRTG,     BL_STEP,     _______,     _______,     _______,     _______,     BL_INC,      BL_DEC,      _______,     _______,     _______,                  _______,
	    _______,     BL_ON,       BL_OFF,      _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,                               _______,
            _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,                  _______,                  _______,
            _______,     _______,     _______,                               _______,                                            _______,     _______,                  _______,                  _______
    ),

    /* LY_CTRL: Control layer */
    [LY_CTRL] = LAYOUT_60_ansi_split_bs_rshift(
            RESET,       _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     DEBUG,
            _______,     _______,     _______,     _______,     _______,     _______,     _______,     KC_ASON,     KC_ASOFF,    KC_ASTG,     KC_ASUP,     KC_ASDN,     KC_ASRP,                  _______,
	    _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,                               _______,
            _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,     _______,                  _______,                  _______,
            _______,     _______,     _______,                               _______,                                            _______,     _______,                  _______,                  _______
    )
};
