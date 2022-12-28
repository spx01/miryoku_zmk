// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none

#if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_LAYOUTMAPPING_KYRIA(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
&kp SEMI  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  &kp BSLH  \
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
XXX  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
&kp SEMI  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  &kp BSLH  \
XXX  K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  XXX  \
               XXX  K32  K33  K34  XXX       XXX  K35  K36  K37  XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 42 43
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 46 47
#endif

#define MIRYOKU_POSITIONAL_MODS

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
MIRYOKU_X(SYM2,   "Sym2")

#define MIRYOKU_LAYERMAPPING_SYM2 MIRYOKU_MAPPING
#define U_SYM2 10

#define MIRYOKU_LAYER_SYM2 \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              U_NA,              &kp EQUAL,         &kp PLUS,          &kp MINUS,         U_NA,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              U_NA,              &kp LBKT,          &kp LPAR,          &kp RPAR,          &kp RBKT,         \
U_NA,              &kp RALT,          &u_to_U_SYM,       &u_to_U_SYM2,      U_NA,              &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,          \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,              &kp P,             &kp B,              &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,              \
U_MTL(LGUI, A),    U_MTL(LALT, R),    U_MTL(LCTRL, S),    U_MTL(LSHFT, T),   &kp G,              &kp M,             U_MTR(LSHFT, N),   U_MTR(LCTRL, E),   U_MTR(LALT, I),    U_MTR(LGUI, O),       \
U_LT(U_BUTTON, Z), U_MTL(RALT, X),    &kp C,              &kp D,             &kp V,              &kp K,             &kp H,             &kp COMMA,         U_MTR(RALT, DOT),  U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC), U_LT(U_NAV, SPC),  U_LT(U_SYM2, TAB),  U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
