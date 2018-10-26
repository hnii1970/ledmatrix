// Created from bdf2c Version 3, (c) 2009, 2010 by Lutz Sammer
//	License AGPLv3: GNU Affero General Public License version 3

#include "font.h"

	/// character bitmap for each encoding
static const unsigned char  PROGMEM __font_bitmap__[] = {
//  32 $20 '20'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
//  33 $21 '21'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	_X______,
	_X______,
	_X______,
	________,
	_X______,
	________,
	________,
//  34 $22 '22'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	X_X_____,
	________,
	________,
	________,
	________,
	________,
	________,
//  35 $23 '23'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	XXX_____,
	X_X_____,
	X_X_____,
	XXX_____,
	X_X_____,
	________,
	________,
//  36 $24 '24'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	XXX_____,
	XX______,
	_XX_____,
	XXX_____,
	_X______,
	________,
	________,
//  37 $25 '25'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	X_______,
	__X_____,
	_X______,
	X_______,
	__X_____,
	________,
	________,
//  38 $26 '26'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	X_X_____,
	_X______,
	_XX_____,
	XX______,
	XXX_____,
	________,
	________,
//  39 $27 '27'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	X_______,
	________,
	________,
	________,
	________,
	________,
	________,
//  40 $28 '28'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	__X_____,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	__X_____,
	________,
//  41 $29 '29'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_______,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	X_______,
	________,
//  42 $2a '2a'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	XXX_____,
	_X______,
	X_X_____,
	________,
	________,
	________,
	________,
//  43 $2b '2b'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	_X______,
	_X______,
	XXX_____,
	_X______,
	_X______,
	________,
	________,
//  44 $2c '2c'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	________,
	________,
	________,
	_X______,
	X_______,
	________,
//  45 $2d '2d'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	________,
	XXX_____,
	________,
	________,
	________,
	________,
//  46 $2e '2e'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	________,
	________,
	________,
	_X______,
	________,
	________,
//  47 $2f '2f'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	__X_____,
	_X______,
	X_______,
	________,
	________,
	________,
//  48 $30 '30'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	_X______,
	X_X_____,
	XXX_____,
	X_X_____,
	_X______,
	________,
	________,
//  49 $31 '31'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	_X______,
	XX______,
	_X______,
	_X______,
	XXX_____,
	________,
	________,
//  50 $32 '32'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	XX______,
	__X_____,
	_X______,
	X_______,
	XXX_____,
	________,
	________,
//  51 $33 '33'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	XX______,
	__X_____,
	_X______,
	__X_____,
	XX______,
	________,
	________,
//  52 $34 '34'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	__X_____,
	_XX_____,
	X_X_____,
	XXX_____,
	__X_____,
	________,
	________,
//  53 $35 '35'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	XXX_____,
	X_______,
	XX______,
	__X_____,
	XX______,
	________,
	________,
//  54 $36 '36'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	_XX_____,
	X_______,
	XX______,
	X_X_____,
	_X______,
	________,
	________,
//  55 $37 '37'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	XXX_____,
	__X_____,
	_X______,
	_X______,
	_X______,
	________,
	________,
//  56 $38 '38'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	_X______,
	X_X_____,
	_X______,
	X_X_____,
	_X______,
	________,
	________,
//  57 $39 '39'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	_X______,
	X_X_____,
	_XX_____,
	__X_____,
	XX______,
	________,
	________,
//  58 $3a '3a'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	_X______,
	________,
	________,
	_X______,
	________,
	________,
//  59 $3b '3b'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	_X______,
	________,
	________,
	_X______,
	X_______,
	________,
//  60 $3c '3c'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	__X_____,
	_X______,
	X_______,
	_X______,
	__X_____,
	________,
	________,
//  61 $3d '3d'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	XXX_____,
	________,
	XXX_____,
	________,
	________,
	________,
//  62 $3e '3e'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	X_______,
	_X______,
	__X_____,
	_X______,
	X_______,
	________,
	________,
//  63 $3f '3f'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	X_X_____,
	__X_____,
	_X______,
	________,
	_X______,
	________,
	________,
//  64 $40 '40'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	X_X_____,
	__X_____,
	_XX_____,
	X_X_____,
	_X______,
	________,
	________,
//  65 $41 '41'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	X_X_____,
	X_X_____,
	XXX_____,
	X_X_____,
	X_X_____,
	________,
	________,
//  66 $42 '42'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XX______,
	X_X_____,
	XX______,
	X_X_____,
	X_X_____,
	XX______,
	________,
	________,
//  67 $43 '43'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_XX_____,
	X_______,
	X_______,
	X_______,
	X_______,
	_XX_____,
	________,
	________,
//  68 $44 '44'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XX______,
	X_X_____,
	X_X_____,
	X_X_____,
	X_X_____,
	XX______,
	________,
	________,
//  69 $45 '45'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	X_______,
	XX______,
	X_______,
	X_______,
	XXX_____,
	________,
	________,
//  70 $46 '46'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	X_______,
	XX______,
	X_______,
	X_______,
	X_______,
	________,
	________,
//  71 $47 '47'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_XX_____,
	X_______,
	X_______,
	X_X_____,
	X_X_____,
	_XX_____,
	________,
	________,
//  72 $48 '48'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	X_X_____,
	X_X_____,
	XXX_____,
	X_X_____,
	X_X_____,
	________,
	________,
//  73 $49 '49'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	_X______,
	_X______,
	_X______,
	_X______,
	XXX_____,
	________,
	________,
//  74 $4a '4a'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	X_X_____,
	_X______,
	________,
	________,
//  75 $4b '4b'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	X_X_____,
	XX______,
	X_X_____,
	X_X_____,
	X_X_____,
	________,
	________,
//  76 $4c '4c'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_______,
	X_______,
	X_______,
	X_______,
	X_______,
	XXX_____,
	________,
	________,
//  77 $4d '4d'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	XXX_____,
	XXX_____,
	X_X_____,
	X_X_____,
	X_X_____,
	________,
	________,
//  78 $4e '4e'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XX______,
	X_X_____,
	X_X_____,
	X_X_____,
	X_X_____,
	X_X_____,
	________,
	________,
//  79 $4f '4f'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	X_X_____,
	X_X_____,
	X_X_____,
	X_X_____,
	_X______,
	________,
	________,
//  80 $50 '50'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XX______,
	X_X_____,
	X_X_____,
	XX______,
	X_______,
	X_______,
	________,
	________,
//  81 $51 '51'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	X_X_____,
	X_X_____,
	X_X_____,
	X_X_____,
	_X______,
	__X_____,
	________,
//  82 $52 '52'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XX______,
	X_X_____,
	X_X_____,
	XX______,
	X_X_____,
	X_X_____,
	________,
	________,
//  83 $53 '53'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_XX_____,
	X_______,
	_X______,
	__X_____,
	__X_____,
	XX______,
	________,
	________,
//  84 $54 '54'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	________,
	________,
//  85 $55 '55'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	X_X_____,
	X_X_____,
	X_X_____,
	X_X_____,
	XXX_____,
	________,
	________,
//  86 $56 '56'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	X_X_____,
	X_X_____,
	X_X_____,
	XX______,
	X_______,
	________,
	________,
//  87 $57 '57'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	X_X_____,
	X_X_____,
	XXX_____,
	XXX_____,
	X_X_____,
	________,
	________,
//  88 $58 '58'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	X_X_____,
	_X______,
	_X______,
	X_X_____,
	X_X_____,
	________,
	________,
//  89 $59 '59'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	X_X_____,
	_X______,
	_X______,
	_X______,
	_X______,
	________,
	________,
//  90 $5a '5a'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	__X_____,
	_X______,
	_X______,
	X_______,
	XXX_____,
	________,
	________,
//  91 $5b '5b'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_XX_____,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	_XX_____,
	________,
//  92 $5c '5c'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	_X______,
	XXX_____,
	_X______,
	XXX_____,
	_X______,
	________,
	________,
//  93 $5d '5d'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XX______,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	XX______,
	________,
//  94 $5e '5e'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	X_X_____,
	________,
	________,
	________,
	________,
	________,
	________,
//  95 $5f '5f'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	________,
	________,
	________,
	________,
	XXX_____,
	________,
//  96 $60 '60'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	__X_____,
	________,
	________,
	________,
	________,
	________,
	________,
//  97 $61 '61'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	_XX_____,
	X_X_____,
	X_X_____,
	_XX_____,
	________,
	________,
//  98 $62 '62'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_______,
	X_______,
	XX______,
	X_X_____,
	X_X_____,
	XX______,
	________,
	________,
//  99 $63 '63'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	_XX_____,
	X_______,
	X_______,
	_XX_____,
	________,
	________,
// 100 $64 '64'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	__X_____,
	__X_____,
	_XX_____,
	X_X_____,
	X_X_____,
	_XX_____,
	________,
	________,
// 101 $65 '65'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	_XX_____,
	XXX_____,
	X_______,
	_XX_____,
	________,
	________,
// 102 $66 '66'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_XX_____,
	_X______,
	XXX_____,
	_X______,
	_X______,
	_X______,
	________,
	________,
// 103 $67 '67'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	_XX_____,
	X_X_____,
	_XX_____,
	__X_____,
	XX______,
	________,
// 104 $68 '68'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_______,
	X_______,
	XX______,
	X_X_____,
	X_X_____,
	X_X_____,
	________,
	________,
// 105 $69 '69'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	________,
	_X______,
	_X______,
	_X______,
	_X______,
	________,
	________,
// 106 $6a '6a'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	________,
	_X______,
	_X______,
	_X______,
	_X______,
	X_______,
	________,
// 107 $6b '6b'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_______,
	X_______,
	X_X_____,
	XX______,
	X_X_____,
	X_X_____,
	________,
	________,
// 108 $6c '6c'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XX______,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	________,
	________,
// 109 $6d '6d'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	XX______,
	XXX_____,
	XXX_____,
	X_X_____,
	________,
	________,
// 110 $6e '6e'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	XX______,
	X_X_____,
	X_X_____,
	X_X_____,
	________,
	________,
// 111 $6f '6f'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	_X______,
	X_X_____,
	X_X_____,
	_X______,
	________,
	________,
// 112 $70 '70'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	XX______,
	X_X_____,
	X_X_____,
	XX______,
	X_______,
	________,
// 113 $71 '71'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	_XX_____,
	X_X_____,
	X_X_____,
	_XX_____,
	__X_____,
	________,
// 114 $72 '72'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	X_X_____,
	XX______,
	X_______,
	X_______,
	________,
	________,
// 115 $73 '73'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	_XX_____,
	XX______,
	_XX_____,
	XX______,
	________,
	________,
// 116 $74 '74'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	_X______,
	XXX_____,
	_X______,
	_X______,
	_XX_____,
	________,
	________,
// 117 $75 '75'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	X_X_____,
	X_X_____,
	X_X_____,
	XXX_____,
	________,
	________,
// 118 $76 '76'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	X_X_____,
	X_X_____,
	XX______,
	X_______,
	________,
	________,
// 119 $77 '77'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	X_X_____,
	X_X_____,
	XXX_____,
	XXX_____,
	________,
	________,
// 120 $78 '78'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	X_X_____,
	_X______,
	_X______,
	X_X_____,
	________,
	________,
// 121 $79 '79'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	X_X_____,
	X_X_____,
	_XX_____,
	__X_____,
	XX______,
	________,
// 122 $7a '7a'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	XXX_____,
	__X_____,
	_X______,
	XXX_____,
	________,
	________,
// 123 $7b '7b'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	__X_____,
	_X______,
	_X______,
	X_______,
	_X______,
	_X______,
	__X_____,
	________,
// 124 $7c '7c'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	_X______,
	________,
// 125 $7d '7d'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_______,
	_X______,
	_X______,
	__X_____,
	_X______,
	_X______,
	X_______,
	________,
// 126 $7e '7e'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 161 $a1 'a1'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	________,
	_X______,
	X_X_____,
	_X______,
	________,
	________,
// 162 $a2 'a2'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	X_______,
	X_______,
	X_______,
	X_______,
	________,
	________,
	________,
// 163 $a3 'a3'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	XXX_____,
	________,
	________,
// 164 $a4 'a4'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	________,
	________,
	X_______,
	_X______,
	________,
	________,
// 165 $a5 'a5'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	________,
	_X______,
	________,
	________,
	________,
	________,
// 166 $a6 'a6'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	__X_____,
	XXX_____,
	__X_____,
	_X______,
	X_______,
	________,
	________,
// 167 $a7 'a7'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	XXX_____,
	_XX_____,
	_X______,
	X_______,
	________,
	________,
// 168 $a8 'a8'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	__X_____,
	_X______,
	XX______,
	_X______,
	________,
	________,
// 169 $a9 'a9'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	_X______,
	XXX_____,
	X_X_____,
	__X_____,
	________,
	________,
// 170 $aa 'aa'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	________,
	XXX_____,
	_X______,
	XXX_____,
	________,
	________,
// 171 $ab 'ab'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	__X_____,
	XXX_____,
	_XX_____,
	X_X_____,
	________,
	________,
// 172 $ac 'ac'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	_X______,
	XXX_____,
	_XX_____,
	_X______,
	________,
	________,
// 173 $ad 'ad'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	________,
	XX______,
	_X______,
	XXX_____,
	________,
	________,
// 174 $ae 'ae'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	XXX_____,
	_XX_____,
	__X_____,
	XXX_____,
	________,
	________,
// 175 $af 'af'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	XXX_____,
	XXX_____,
	__X_____,
	XX______,
	________,
	________,
// 176 $b0 'b0'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	________,
	X_______,
	_XX_____,
	________,
	________,
	________,
	________,
// 177 $b1 'b1'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	__X_____,
	_XX_____,
	_X______,
	_X______,
	X_______,
	________,
	________,
// 178 $b2 'b2'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	__X_____,
	__X_____,
	_X______,
	XX______,
	_X______,
	_X______,
	________,
	________,
// 179 $b3 'b3'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	XXX_____,
	X_X_____,
	__X_____,
	__X_____,
	_X______,
	________,
	________,
// 180 $b4 'b4'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	XXX_____,
	_X______,
	_X______,
	_X______,
	XXX_____,
	________,
	________,
// 181 $b5 'b5'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	__X_____,
	XXX_____,
	__X_____,
	_XX_____,
	X_X_____,
	__X_____,
	________,
	________,
// 182 $b6 'b6'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	XXX_____,
	_XX_____,
	_XX_____,
	X_X_____,
	X_X_____,
	________,
	________,
// 183 $b7 'b7'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	XXX_____,
	_X______,
	XXX_____,
	_X______,
	_X______,
	________,
	________,
// 184 $b8 'b8'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	_XX_____,
	X_X_____,
	__X_____,
	_X______,
	X_______,
	________,
	________,
// 185 $b9 'b9'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_______,
	XXX_____,
	XX______,
	_X______,
	_X______,
	X_______,
	________,
	________,
// 186 $ba 'ba'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	XXX_____,
	__X_____,
	__X_____,
	__X_____,
	XXX_____,
	________,
	________,
// 187 $bb 'bb'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	XXX_____,
	X_X_____,
	__X_____,
	_X______,
	X_______,
	________,
	________,
// 188 $bc 'bc'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XX______,
	________,
	XX______,
	________,
	__X_____,
	XX______,
	________,
	________,
// 189 $bd 'bd'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	__X_____,
	__X_____,
	_X______,
	_X______,
	X_X_____,
	________,
	________,
// 190 $be 'be'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_______,
	XXX_____,
	X_X_____,
	X_X_____,
	X_______,
	XXX_____,
	________,
	________,
// 191 $bf 'bf'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	_XX_____,
	_XX_____,
	__X_____,
	_X______,
	X_______,
	________,
	________,
// 192 $c0 'c0'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	_XX_____,
	X_X_____,
	_XX_____,
	_X______,
	X_______,
	________,
	________,
// 193 $c1 'c1'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	_X______,
	XXX_____,
	_X______,
	_X______,
	X_______,
	________,
	________,
// 194 $c2 'c2'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	XXX_____,
	XXX_____,
	__X_____,
	__X_____,
	XX______,
	________,
	________,
// 195 $c3 'c3'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	________,
	XXX_____,
	_X______,
	_X______,
	X_______,
	________,
	________,
// 196 $c4 'c4'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_______,
	X_______,
	XX______,
	X_X_____,
	X_______,
	X_______,
	________,
	________,
// 197 $c5 'c5'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	_X______,
	XXX_____,
	_X______,
	_X______,
	X_______,
	________,
	________,
// 198 $c6 'c6'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	_XX_____,
	________,
	________,
	________,
	XXX_____,
	________,
	________,
// 199 $c7 'c7'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	__X_____,
	X_X_____,
	_X______,
	_X______,
	X_X_____,
	________,
	________,
// 200 $c8 'c8'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	XXX_____,
	__X_____,
	_X______,
	XXX_____,
	_X______,
	________,
	________,
// 201 $c9 'c9'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	__X_____,
	__X_____,
	__X_____,
	__X_____,
	_X______,
	X_______,
	________,
	________,
// 202 $ca 'ca'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	__X_____,
	X_X_____,
	X_X_____,
	X_X_____,
	X_X_____,
	________,
	________,
// 203 $cb 'cb'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_______,
	X_______,
	XXX_____,
	X_______,
	X_______,
	_XX_____,
	________,
	________,
// 204 $cc 'cc'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	__X_____,
	__X_____,
	__X_____,
	_X______,
	X_______,
	________,
	________,
// 205 $cd 'cd'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	_X______,
	X_X_____,
	X_X_____,
	__X_____,
	________,
	________,
	________,
// 206 $ce 'ce'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	XXX_____,
	_X______,
	XXX_____,
	XXX_____,
	_X______,
	________,
	________,
// 207 $cf 'cf'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	__X_____,
	__X_____,
	XX______,
	_X______,
	__X_____,
	________,
	________,
// 208 $d0 'd0'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	XXX_____,
	________,
	_XX_____,
	________,
	XXX_____,
	________,
	________,
// 209 $d1 'd1'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	_X______,
	_X______,
	X_______,
	X_X_____,
	XXX_____,
	________,
	________,
// 210 $d2 'd2'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	__X_____,
	X_X_____,
	_X______,
	_X______,
	X_X_____,
	X_______,
	________,
	________,
// 211 $d3 'd3'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	_X______,
	XXX_____,
	_X______,
	_X______,
	_XX_____,
	________,
	________,
// 212 $d4 'd4'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	XXX_____,
	_XX_____,
	_XX_____,
	_X______,
	_X______,
	________,
	________,
// 213 $d5 'd5'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XX______,
	_X______,
	_X______,
	_X______,
	_X______,
	XXX_____,
	________,
	________,
// 214 $d6 'd6'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	__X_____,
	XXX_____,
	__X_____,
	__X_____,
	XXX_____,
	________,
	________,
// 215 $d7 'd7'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	________,
	XXX_____,
	__X_____,
	__X_____,
	XX______,
	________,
	________,
// 216 $d8 'd8'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	X_X_____,
	X_X_____,
	__X_____,
	__X_____,
	_X______,
	________,
	________,
// 217 $d9 'd9'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	_X______,
	XX______,
	XX______,
	XX______,
	XXX_____,
	________,
	________,
// 218 $da 'da'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_______,
	X_______,
	X_______,
	X_______,
	X_X_____,
	XX______,
	________,
	________,
// 219 $db 'db'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	________,
	XXX_____,
	X_X_____,
	X_X_____,
	X_X_____,
	XXX_____,
	________,
	________,
// 220 $dc 'dc'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XXX_____,
	X_X_____,
	__X_____,
	__X_____,
	_X______,
	X_______,
	________,
	________,
// 221 $dd 'dd'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	XX______,
	________,
	________,
	__X_____,
	__X_____,
	XX______,
	________,
	________,
// 222 $de 'de'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	X_X_____,
	________,
	________,
	________,
	________,
	________,
	________,
	________,
// 223 $df 'df'
//	width 4, bbx 0, bby -2, bbw 4, bbh 8
	_X______,
	X_X_____,
	_X______,
	________,
	________,
	________,
	________,
	________,
};

	/// character width for each encoding
static const unsigned char PROGMEM  __font_widths__[] = {
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
	4,
};

	/// character encoding for each index entry
static const unsigned short  __font_index__[] = {
	32,
	33,
	34,
	35,
	36,
	37,
	38,
	39,
	40,
	41,
	42,
	43,
	44,
	45,
	46,
	47,
	48,
	49,
	50,
	51,
	52,
	53,
	54,
	55,
	56,
	57,
	58,
	59,
	60,
	61,
	62,
	63,
	64,
	65,
	66,
	67,
	68,
	69,
	70,
	71,
	72,
	73,
	74,
	75,
	76,
	77,
	78,
	79,
	80,
	81,
	82,
	83,
	84,
	85,
	86,
	87,
	88,
	89,
	90,
	91,
	92,
	93,
	94,
	95,
	96,
	97,
	98,
	99,
	100,
	101,
	102,
	103,
	104,
	105,
	106,
	107,
	108,
	109,
	110,
	111,
	112,
	113,
	114,
	115,
	116,
	117,
	118,
	119,
	120,
	121,
	122,
	123,
	124,
	125,
	126,
	161,
	162,
	163,
	164,
	165,
	166,
	167,
	168,
	169,
	170,
	171,
	172,
	173,
	174,
	175,
	176,
	177,
	178,
	179,
	180,
	181,
	182,
	183,
	184,
	185,
	186,
	187,
	188,
	189,
	190,
	191,
	192,
	193,
	194,
	195,
	196,
	197,
	198,
	199,
	200,
	201,
	202,
	203,
	204,
	205,
	206,
	207,
	208,
	209,
	210,
	211,
	212,
	213,
	214,
	215,
	216,
	217,
	218,
	219,
	220,
	221,
	222,
	223,
};

	/// bitmap font structure
const struct bitmap_font font = {
	.Width = 4, .Height = 8,
	.Chars = 158,
	.Widths = __font_widths__,
	.Index = __font_index__,
	.Bitmap = __font_bitmap__,
};