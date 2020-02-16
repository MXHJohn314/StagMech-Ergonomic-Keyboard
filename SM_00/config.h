

#pragma once

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0005
#define MANUFACTURER    Omkbd
#define PRODUCT         runner3680
#define DESCRIPTION     A split keyboard

#define MATRIX_ROWS 12
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS { D1, D4, C6, D7, E6, B4}
// #define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6, F5, F4 }

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE

#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN D3
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 64
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT { 32, 32 }
#define RGBLIGHT_LIMIT_VAL 100

#define SOFT_SERIAL_PIN D0
#define SPLIT_USB_DETECT
#define SELECT_SOFT_SERIAL_SPEED 1

#define BACKLIGHT_PIN B7