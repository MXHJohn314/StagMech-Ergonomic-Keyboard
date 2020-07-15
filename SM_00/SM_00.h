#pragma once

#include "quantum.h"

#define LAYOUT( \
   L00, L01, L02, L03, L04, L05, L06,              R00, R01, R02, R03, R04, R05, R06, R07, \
   L10, L11, L12, L13, L14, L15, L16,                   R11, R12, R13, R14, R15, R16, R17, \
   L20, L21, L22, L23, L24, L25,                   R20, R21, R22, R23, R24, R25, R26, R27, \
   L30, L31, L32, L33, L34, L35,                        R31, R32, R33, R34, R35, R36, R37, \
   L40, L41, L42, L43, L44, L45,                        R41, R42, R43, R44, R45, R46, R47, \
   L50, L51, L52, L53, L54, L55, L56,                        R52, R53, R54, R55, R56, R57  \
   ) \
   { \
     { L00,   L01,   L02, L03, L04, L05, L06,   KC_NO }, \
     { L10,   L11,   L12, L13, L14, L15, L16,   KC_NO }, \
     { L20,   L21,   L22, L23, L24, L25, KC_NO, KC_NO }, \
     { L30,   L31,   L32, L33, L34, L35, KC_NO, KC_NO }, \
     { L40,   L41,   L42, L43, L44, L45, KC_NO, KC_NO }, \
     { L50,   L51,   L52, L53, L54, L55, L56,   KC_NO }, \
     { R00,   R01,   R02, R03, R04, R05, R06,   R07   }, \
     { KC_NO, R11,   R12, R13, R14, R15, R16,   R17   }, \
     { R20,   R21,   R22, R23, R24, R25, R26,   R27   }, \
     { KC_NO, R31,   R32, R33, R34, R35, R36,   R37   }, \
     { KC_NO, R41,   R42, R43, R44, R45, R46,   R47   }, \
     { KC_NO, KC_NO, R52, R53, R54, R55, R56,   R57   }  \
   }
/*
   { \
     { L00, L01, L02, L03, L04, L05, L06,   KC_NO }, \
     { L10, L11, L12, L13, L14, L15, L16,   KC_NO }, \
     { L20, L21, L22, L23, L24, L25, KC_NO, KC_NO }, \
     { L30, L31, L32, L33, L34, L35, L36,   L37 }, \
     { L40, L41, L42, L43, L44, L45, KC_NO, KC_NO }, \
     { L50, L51, L52, L53, L54, L55, L56,   KC_NO }, \
     { R07, R06, R05, R04, R03, R02, R01,   R00 }, \
     { R17, R16, R15, R14, R13, R12, R11,   KC_NO }, \
     { R27, R26, R25, R24, R23, R22, R21,   R20 }, \
     { R37, R36, R35, R34, R33, R32, R31,   R30 }, \
     { R47, R46, R45, R44, R43, R42, R41,   KC_NO }, \
     { R57, R56, R55, R54, R53, R52, KC_NO, KC_NO }  \
   }
*/
