#pragma once
#define MATRIX_ROWS 12
#define MATRIX_COLS 16
#define VENDOR_ID       0xA1A1
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    wafer
#define PRODUCT         SM - 00
#define DESCRIPTION     82-key split keyboard

#define SPLIT_HAND_PIN F0
#define SOFT_SERIAL_PIN D0
#define SELECT_SOFT_SERIAL_SPEED 1

#define MATRIX_COL_PINS { D5, F1, F4, F5, F6, F7, B0,B1 }
#define MATRIX_ROW_PINS { D7, B4, B5, B6, C6, C7  }

#define MATRIX_COL_PINS_RIGHT { D7, B5, B6, B7, E6, B1, C7, F1 }
#define MATRIX_ROW_PINS_RIGHT { D3, D4, D5, F5, F1, D5 }

#define BACKLIGHT_LEVELS 3
#define BACKLIGHT_PIN F7
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 5

#define DEBOUNCE 5
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
