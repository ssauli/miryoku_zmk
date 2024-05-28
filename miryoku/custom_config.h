// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_LAYERMAPPING \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYOUTMAPPING_CHOCTOPUS44( \
	K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
	K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
	K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
	N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
XXX 	K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  XXX \
XXX  	K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  XXX \
U_GAME  K20  K21  K22  K23  K24  XXX  K25  K26  K27  K28  K29  U_BASE \
     	     XXX  K32  K33  K34	      K35  K36  K37  XXX


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base",  sensor-bindings=<&inc_dec_kp PG_DN PG_UP>;) \
MIRYOKU_X(EXTRA,  "Extra", ) \
MIRYOKU_X(TAP,    "Tap",   ) \
MIRYOKU_X(BUTTON, "Button",) \
MIRYOKU_X(NAV,    "Nav",   sensor-bindings=<&inc_dec_kp DOWN UP>;) \
MIRYOKU_X(MOUSE,  "Mouse", sensor-bindings=<&inc_dec_kp LEFT RIGHT>;) \
MIRYOKU_X(MEDIA,  "Media", sensor-bindings=<&inc_dec_kp C_VOL_DN C_VOL_UP>;) \
MIRYOKU_X(NUM,    "Num",   sensor-bindings=<&inc_dec_kp C_BRIGHTNESS_DEC C_BRIGHTNESS_INC>;) \
MIRYOKU_X(SYM,    "Sym",   ) \
MIRYOKU_X(FUN,    "Fun",   ) \
MIRYOKU_X(GAME,   "Game",  )

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
#define U_GAME   10
