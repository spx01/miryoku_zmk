// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

#define MIRYOKU_POSITIONAL_MODS
#define MIRYOKU_POSITIONS_LEFT_KYRIA 0 1 2 3 4 5 12 13 14 15 16 17 24 25 26 27 28 29 30 31 40 41 42 43 44 45 46 47 48 49
#define MIRYOKU_POSITIONS_RIGHT_KYRIA 6 7 8 9 10 11 18 19 20 21 22 23 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(SYM2,   "Sym2") \
MIRYOKU_X(LHALF,  "LHalf") \
MIRYOKU_X(RHALF,  "RHalf")

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
#define U_SYM2   10
#define U_LHALF  11
#define U_RHALF  12

#define MIRYOKU_LAYERMAPPING_SYM2 MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_LHALF MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_RHALF MIRYOKU_MAPPING

#define MIRYOKU_LAYER_SYM2 \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NA,              U_NA,              &kp EQUAL,         &kp MINUS,         U_NA,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NA,              &kp LBKT,          &kp LPAR,          &kp RPAR,          &kp RBKT,       \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_SYM2,      U_NA,              &kp INS,           &kp TILDE,         &kp GRAVE,         &kp HASH,          &kp SLASH,      \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,              &kp P,             &kp B,              &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,              \
U_MTL(LGUI, A),    U_MTL(LALT, R),    U_MTL(LCTRL, S),    U_MTL(LSHFT, T),   &kp G,              &kp M,             U_MTR(LSHFT, N),   U_MTR(LCTRL, E),   U_MTR(LALT, I),    U_MTR(LGUI, O),       \
U_LT(U_BUTTON, Z), U_MTL(RALT, X),    &kp C,              &kp D,             &kp V,              &kp K,             &kp H,             &kp COMMA,         U_MTR(RALT, DOT),  U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPC),  U_LT(U_SYM2, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp MINUS,         &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp EQL,           U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp UNDER,         &kp DLLR,          &kp PRCT,          &kp CRRT,          &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp TILDE,         &kp EXCL,          &kp AT,            &kp HASH,          &kp PIPE,          U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_LHALF \
&trans, &trans, &trans, &trans, &trans,     U_NA, &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&trans, &trans, &trans, &trans, &trans,     U_NA, &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&trans, &trans, &trans, &trans, &trans,     U_NA,  U_NA,             U_NA,              &kp RALT,          U_NA,              \
&trans, &trans, &trans, &trans, &trans,     U_NA, U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_LAYER_RHALF \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,      &trans, &trans, &trans, &trans, &trans, \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,      &trans, &trans, &trans, &trans, &trans, \
U_NA,              &kp RALT,          U_NA,              U_NA,              U_NA,      &trans, &trans, &trans, &trans, &trans, \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,      &trans, &trans, &trans, &trans, &trans

#if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_LAYOUTMAPPING_KYRIA(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
&kp SEMI  K10  K11  K12  K13  K14                 K15  K16  K17  K18  K19  &kp BSLH  \
XXX  K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  XXX  \
               XXX  XXX  K32  K33  K34       K35  K36  K37  XXX  XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 43 44
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 45 46
#else
#define MIRYOKU_LAYOUTMAPPING_KYRIA(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00  K01  K02  K03  K04                                          K05  K06  K07  K08  K09  XXX  \
&kp SEMI  K10  K11  K12  K13  K14                                     K15  K16  K17  K18  K19  &kp BSLH  \
XXX  K20  K21  K22  K23  K24  XXX  XXX                           XXX  XXX  K25  K26  K27  K28  K29  XXX  \
               XXX  K32  K33  K34  &mo U_RHALF      &mo U_LHALF  K35  K36  K37  XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 42 43
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 46 47
#endif

#define MIRYOKU_CLIPBOARD_WIN
