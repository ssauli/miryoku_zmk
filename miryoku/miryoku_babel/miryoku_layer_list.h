// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-

#pragma once

#if !defined (MIRYOKU_LAYER_LIST)

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base",  sensor-bindings=<&inc_dec_kp PG_UP PG_DN>;) \
MIRYOKU_X(EXTRA,  "Extra" ) \
MIRYOKU_X(TAP,    "Tap"	  ) \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav",   sensor-bindings=<&inc_dec_kp UP DOWN>;) \
MIRYOKU_X(MOUSE,  "Mouse" ) \
MIRYOKU_X(MEDIA,  "Media", sensor-bindings=<&inc_dec_kp C_VOL_DN C_VOL_UP>;) \
MIRYOKU_X(NUM,    "Num",   sensor-bindings=<&inc_dec_kp C_BRIGHTNESS_INC C_BRIGHTNESS_DEC>;) \
MIRYOKU_X(SYM,    "Sym",   sensor-bindings=<&inc_dec_kp LEFT RIGHT>;) \
MIRYOKU_X(FUN,    "Fun"	  )

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9

#endif
