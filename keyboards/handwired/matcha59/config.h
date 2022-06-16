#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6711
#define PRODUCT_ID      0x6712
#define DEVICE_VER      0x0001
#define MANUFACTURER    qmkbuilder
#define PRODUCT         matcha59
#define DESCRIPTION     olkb

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/* Encoder */
#define ENCODERS_PAD_A { F6 }
#define ENCODERS_PAD_B { F7 }

/* key matrix pins */
#define MATRIX_ROW_PINS { F0, B6, B2, B3, B1 }
#define MATRIX_COL_PINS { F1, C7, D5, B7, B5, B4, E6, D7, C6, D4, D0, D1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#endif
