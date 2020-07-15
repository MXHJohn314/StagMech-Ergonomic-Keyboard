#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*     Layer 0: Default Layer    
* ,---------------------------.                  ,----------------------------------.
* |Esc| F1| F2| F3| F4| F5|MOD|                 | F6| F7| F8| F9|F10| - | = |  Del  |
* |---------------------------.                 `-----------------------------------|
* | ` | 1 | 2 | 3 | 4 | 5 | 6 |                   | 7 | 8 | 9 | 0 | - | = |  BSp    |
* |-------------------------.                     ----------------------------------|
* | Tab | Q | W | E | R | T |                    | Y | U | I | O | P | [ | ] |    \ |
* |--------------------------.                   `----------------------------------|
* | Caps | A | S | D | F | G |                     | H | J | K | L | ; | ' | Enter  |
* |----------------------------.              ,-------------------------------------|
* |  Shift |  Z|  X|  C|  V| ↑ |             | B | N | M | , | . | / |   Shift      |
* |--------------------------------.         `--------------------------------------|
* |Ctrl |Gui| Alt |PRNT| ← | ↓ | → |          |    Space    |Alt  | Gui| Fn  | Ctrl |
* `--------------------------------           `-------------------------------------'
*/
   [0] = LAYOUT(
      BL_DEC,  BL_INC, BL_TOGG,  KC_F3,   KC_F4,   KC_F5,   KC_INS,	               KC_F6, KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, 
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                          KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,  
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                            KC_Y,  KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
      KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                   KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, 
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_UP,                                  KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_LSFT,
      KC_LCTL, KC_LGUI, KC_LALT, KC_PSCR, KC_LEFT, KC_DOWN, KC_RIGHT,                      KC_SPC,          MO(1),   KC_NLCK, KC_RALT, KC_APP,  KC_RCTL
      ),
/*   
   [1] = LAYOUT(                                                                                          
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,	               KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, 
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,	                       KC_NO,  KC_NO,   KC_PSLS, KC_PAST, KC_PMNS, KC_NO,   KC_NO, 
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       	               KC_NO,  KC_P7,  KC_P8,   KC_P9,   KC_NO,   KC_PPLS, KC_NO,   KC_NO, 
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       	                       KC_NO,  KC_P4,   KC_P5,   KC_P6,   KC_P0,   KC_NO,   KC_NO, 
      KC_LSFT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,       	                       KC_NO,  KC_NO,   KC_P1,   KC_P2,   KC_P3,   KC_PENT,KC_LSFT,
      KC_TRNS, KC_TRNS, KC_TRNS, RESET,   KC_HOME, KC_PGDN, KC_END,	                       KC_TRNS,         KC_TRNS, KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS
      ),
*/
};
