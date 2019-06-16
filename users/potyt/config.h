#pragma once

#undef  NO_DEBUG
#define NO_DEBUG
#undef  NO_PRINT
#define NO_PRINT
#undef  NO_ACTION_MACRO
#define NO_ACTION_MACRO
#undef  NO_ACTION_FUNCTION
#define NO_ACTION_FUNCTION

/* Leader key */
#ifdef RGBLIGHT_ENABLE
    #undef  LEADER_TIMEOUT
    #define LEADER_TIMEOUT 200
    #undef  LEADER_PER_KEY_TIMING
    #define LEADER_PER_KEY_TIMING
#endif

/* RGB customisation */
#ifdef RGBLIGHT_ENABLE
    #undef  RGBLIGHT_HUE_STEP
    #define RGBLIGHT_HUE_STEP 5

    #undef  RGBLIGHT_SAT_STEP
    #define RGBLIGHT_SAT_STEP 5

    #undef  RGBLIGHT_VAL_STEP
    #define RGBLIGHT_VAL_STEP 5

    #undef  RGBLIGHT_LIMIT_VAL
    #define RGBLIGHT_LIMIT_VAL 255

    #undef  RGBLIGHT_SLEEP
    #define RGBLIGHT_SLEEP

    #undef  RGBLIGHT_ANIMATIONS

    #undef  RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_BREATHE_CENTER 1.0
    #define RGBLIGHT_EFFECT_BREATHE_MAX 180

    #undef  RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_KNIGHT_LED_NUM RGBLED_NUM
    #define RGBLIGHT_EFFECT_KNIGHT_LENGTH 3
    #define RGBLIGHT_EFFECT_KNIGHT_OFFSET 0
#endif // RGBLIGHT_ENABLE

/* Auto Shift */
#ifdef AUTO_SHIFT_ENABLE
    #define AUTO_SHIFT_TIMEOUT 150
#endif // AUTO_SHIFT_ENABLE

/* Tap Dance */
#ifdef TAPPING_ENABLE
    #define TAPPING_TERM 200
#endif // TAPPING_ENABLE

/* Disable unused and unneeded features to reduce on firmware size */

#ifdef UNICODE_ENABLE
#   undef UNICODE_ENABLE
#endif
