// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#if !defined (MIRYOKU_LAYOUTMAPPING_KYRIA)

#define XXX &none

#if defined MIRYOKU_MAPPING_EXTENDED_THUMBS
#define MIRYOKU_LAYOUTMAPPING_KYRIA(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
XXX  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX  \
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
XXX  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX  \
XXX  K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  XXX  \
               XXX  K32  K33  K34  XXX       XXX  K35  K36  K37  XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 42 43
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 46 47
#endif

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_KYRIA

#if !defined (MIRYOKU_POSITIONS_LEFT_KYRIA)
#define MIRYOKU_POSITIONS_LEFT_KYRIA 6 7 8 9 10 11 18 19 20 21 22 23 32 33 34 35 36 37 38 39 45 46 47 48 49
#endif

#if !defined (MIRYOKU_POSITIONS_RIGHT_KYRIA)
#define MIRYOKU_POSITIONS_RIGHT_KYRIA 0 1 2 3 4 5 12 13 14 15 16 17 24 25 26 27 28 29 30 31 40 41 42 43 44
#endif

#define MIRYOKU_POSITIONS_LEFT MIRYOKU_POSITIONS_LEFT_KYRIA
#define MIRYOKU_POSITIONS_RIGHT MIRYOKU_POSITIONS_RIGHT_KYRIA
