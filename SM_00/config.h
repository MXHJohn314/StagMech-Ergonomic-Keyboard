#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xA1A1
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    wafer
#define PRODUCT         SM-00
#define DESCRIPTION     85% split keyboard

/* Select hand configuration */
#define SPLIT_USB_DETECT
#define MASTER_LEFT
#define SOFT_SERIAL_PIN D0
#define SELECT_SOFT_SERIAL_SPEED 1

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 8

/* pro_micro pin-out */
#define MATRIX_ROW_PINS { D1, D4, C6, D7, E6, B4}
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5, F4 }

/* leds */
#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_PIN B7
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 5

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
