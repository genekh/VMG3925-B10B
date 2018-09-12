/*
 * Copyright (C) 2006 Mindspeed Technologies, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef __M8325XG_H
#define __M8325XG_H

/*
 * High Level Configuration Options
 */
#define CONFIG_M8325XG       1

#define CFG_CLK	CFG_CLK_534_178_330

#define ADJ2_MIN_VAL    105
#define ADJ2_MAX_VAL    165

#define ADJ2_MIN_ACCEPTED_RANGE     20    /* adj2_val1: error */
#define ADJ2_ACCEPTED_RANGE         25    /* adj2_val2: warning */

#define ADJ1_MIN_VAL     1
#define ADJ1_MAX_VAL    80

#define ADJ1_MIN_ACCEPTED_WINDOW    20     /* adj1_val1: ignore */
#define ADJ1_ACCEPTED_WINDOW        25     /* adj1_val2: warning */

// DDR Configs

//DENALI CONFIGRATION FOR BOARD CONFIG #1
#define DENALI_CTL_00_VAL_CFG1   0x0100000101010101LL
#define DENALI_CTL_01_VAL_CFG1   0x0100010001000000LL
#define DENALI_CTL_02_VAL_CFG1   0x0200000000010100LL
#define DENALI_CTL_03_VAL_CFG1   0x0202020202020202LL
#define DENALI_CTL_05_VAL_CFG1   0x0003010500020001LL
#define DENALI_CTL_06_VAL_CFG1   0x0A0A040300030400LL
#define DENALI_CTL_07_VAL_CFG1   0x000000050000020ALL
#define DENALI_CTL_08_VAL_CFG1   0x6400003F3F130210LL
#define DENALI_CTL_09_VAL_CFG1   0x0000640064006400LL
#define DENALI_CTL_11_VAL_CFG1   0x0000002B00000000LL
#define DENALI_CTL_12_VAL_CFG1   0x0000000000001000LL
#define DENALI_CTL_13_VAL_CFG1   0x0010001000100010LL
#define DENALI_CTL_14_VAL_CFG1   0x0010001000100010LL
#define DENALI_CTL_15_VAL_CFG1   0x09FA000000000000LL
#define DENALI_CTL_16_VAL_CFG1   0x0000000059C60000LL
#define DENALI_CTL_17_VAL_CFG1   0x0000010000000000LL
#define DENALI_CTL_18_VAL_CFG1   0x0600010000000000LL
#define DENALI_CTL_19_VAL_CFG1   0x00002E00C8050A00LL
#define DENALI_CTL_20_VAL_CFG1   0x0000010101D700C8LL
#define DENALI_CTL_21_VAL_CFG1   0x0000000100000101LL
#define DENALI_CTL_22_VAL_CFG1   0x0000020007000000LL
#define DENALI_CTL_24_VAL_CFG1   0x0000000200850000LL
#define DENALI_CTL_25_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_26_VAL_CFG1   0x9400593794005937LL
#define DENALI_CTL_27_VAL_CFG1   DENALI_CTL_26_VAL_CFG1
#define DENALI_CTL_28_VAL_CFG1   0x07C0040107C00401LL
#define DENALI_CTL_29_VAL_CFG1   DENALI_CTL_28_VAL_CFG1
#define DENALI_CTL_30_VAL_CFG1   0x0000000000000005LL
#define DENALI_CTL_31_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_32_VAL_CFG1   0x0c02000000000000LL
#define DENALI_CTL_33_VAL_CFG1   0x0000000000000004LL
#define DENALI_CTL_34_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_35_VAL_CFG1   0x0087878787050000LL
#define DENALI_CTL_36_VAL_CFG1   0x0000000000000004LL
#define DENALI_CTL_37_VAL_CFG1   0x0A52000000040200LL
#define DENALI_CTL_38_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_39_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_40_VAL_CFG1   0x00000000000000c8LL
#define DENALI_CTL_41_VAL_CFG1   0x0024199300241993LL
#define DENALI_CTL_42_VAL_CFG1   DENALI_CTL_41_VAL_CFG1
#define DENALI_CTL_43_VAL_CFG1   0x0000190000001900LL
#define DENALI_CTL_44_VAL_CFG1   DENALI_CTL_43_VAL_CFG1
#define DENALI_CTL_45_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_46_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_47_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_48_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_49_VAL_CFG1   0x0000000000000050LL
#define DENALI_CTL_50_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_51_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_52_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_53_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_54_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_55_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_56_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_57_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_58_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_59_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_60_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_61_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_62_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_66_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_67_VAL_CFG1   0x0000000000000000LL
#define DENALI_CTL_68_VAL_CFG1   0x0000000002000000LL
#define DENALI_CTL_69_VAL_CFG1   0x00000003e8050000LL


//DENALI CONFIGRATION FOR BOARD CONFIG #2
#define DENALI_CTL_00_VAL_CFG2	0x0100000101010101LL
#define DENALI_CTL_01_VAL_CFG2	0x0100010001000000LL
#define DENALI_CTL_02_VAL_CFG2	0x0200000000010100LL
#define DENALI_CTL_03_VAL_CFG2	0x0202020202020202LL
// #define DENALI_CTL_04_VAL_CFG2	0x0000010100000001LL
// original settings
// #define DENALI_CTL_05_VAL_CFG2	0x0003010500010001LL
// Dror's settings rtt_0=1
#define DENALI_CTL_05_VAL_CFG2	0x0003010400020001LL
// original settings
// #define DENALI_CTL_06_VAL_CFG2	0x0a0a040300030300LL
// Dror's settings
#define DENALI_CTL_06_VAL_CFG2	0x080a030200020200LL
// original settings
// #define DENALI_CTL_07_VAL_CFG2	0x000000050000020aLL
// Dror's settings
#define DENALI_CTL_07_VAL_CFG2	0x0000000300000207LL
// original settings
// #define DENALI_CTL_08_VAL_CFG2	0x6400003f3f16020eLL
// Dror's settings
#define DENALI_CTL_08_VAL_CFG2	0x6400003f3f0b0209LL
#define DENALI_CTL_09_VAL_CFG2	0x0000640064006400LL
// #define DENALI_CTL_10_VAL_CFG2	0x0120202020191a18LL
// original settings
// #define DENALI_CTL_11_VAL_CFG2	0x0000003300000000LL
// Dror's settings
#define DENALI_CTL_11_VAL_CFG2	0x0000001a00000000LL
// original settings
// #define DENALI_CTL_12_VAL_CFG2	0x0000000000001000LL
// Dror's settings
#define DENALI_CTL_12_VAL_CFG2	0x0000000000000900LL
#define DENALI_CTL_13_VAL_CFG2	0x0010001000100010LL	
#define DENALI_CTL_14_VAL_CFG2	0x0010001000100010LL
// original settings
// #define DENALI_CTL_15_VAL_CFG2	0x0c2d000000000000LL
// Dror's settings
#define DENALI_CTL_15_VAL_CFG2	0x0612000000000000LL
// original settings
// #define DENALI_CTL_16_VAL_CFG2	0x000000006d560000LL
// Dror's settings
#define DENALI_CTL_16_VAL_CFG2	0x0000000036a60000LL
#define DENALI_CTL_17_VAL_CFG2	0x0000010000000000LL
// original settings
// #define DENALI_CTL_18_VAL_CFG2	0x0600010000000000LL
// Dror's settings
#define DENALI_CTL_18_VAL_CFG2	0x0300010000000000LL
// original settings
// #define DENALI_CTL_19_VAL_CFG2	0x00003700c8050b00LL
// Dror's settings
#define DENALI_CTL_19_VAL_CFG2	0x00001c00c8030600LL
// original settings
// #define DENALI_CTL_20_VAL_CFG2	0x00000101388000c8LL
// Dror's settings
#define DENALI_CTL_20_VAL_CFG2	0x000001009c4000c8LL
/* Original settings, AHB/DDR synchronous */
#define DENALI_CTL_21_VAL_CFG2	0x0303030100000101LL
#define DENALI_CTL_22_VAL_CFG2	0x0000020006000003LL
/* AHB/DDR asynchronous */
//#define DENALI_CTL_21_VAL_CFG2	0x0000000100000101LL
//#define DENALI_CTL_22_VAL_CFG2	0x0000020006000000LL
// #define DENALI_CTL_23_VAL_CFG2
// original settings
// #define DENALI_CTL_24_VAL_CFG2	0x0000000200a00000LL
// Dror's settings
#define DENALI_CTL_24_VAL_CFG2	0x0000000200500000LL
#define DENALI_CTL_25_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_26_VAL_CFG2	0x9340492793404927LL
#define DENALI_CTL_27_VAL_CFG2	0x9340492793404927LL
#define DENALI_CTL_28_VAL_CFG2	0x07c0040107c00401LL
#define DENALI_CTL_29_VAL_CFG2	0x07c0040107c00401LL
#define DENALI_CTL_30_VAL_CFG2	0x0000000000000004LL
#define DENALI_CTL_31_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_32_VAL_CFG2	0x0c02000000000000LL
#define DENALI_CTL_33_VAL_CFG2	0x0000000000000004LL
#define DENALI_CTL_34_VAL_CFG2	0x0000000000000000LL
// original settings
// #define DENALI_CTL_35_VAL_CFG2	0x0034343434050000LL
// Dror's settings
#define DENALI_CTL_35_VAL_CFG2	0x0074747474030000LL
#define DENALI_CTL_36_VAL_CFG2	0x0000000000000004LL
// original settings
// #define DENALI_CTL_37_VAL_CFG2	0x0a52000000040000LL
// Dror's settings rtt=11 bit[1]=1
#define DENALI_CTL_37_VAL_CFG2	0x0442000000040200LL
#define DENALI_CTL_38_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_39_VAL_CFG2	0x0000000000000000LL
// original settings
// #define DENALI_CTL_40_VAL_CFG2	0x00000000000000c8LL
// Dror's settings
#define DENALI_CTL_40_VAL_CFG2	0x0000000000000064LL
// #define DENALI_CTL_41_VAL_CFG2	0x00cc005000cc0050LL
// original settings
// #define DENALI_CTL_41_VAL_CFG2	0x0017005000170050LL
// Dror's settings adj1 = 0x28 
#define DENALI_CTL_41_VAL_CFG2	0x0028009000280090LL
#define DENALI_CTL_42_VAL_CFG2	DENALI_CTL_41_VAL_CFG2
#define DENALI_CTL_43_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_44_VAL_CFG2	DENALI_CTL_43_VAL_CFG2
#define DENALI_CTL_45_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_46_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_47_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_48_VAL_CFG2	0x0000000000000000LL
// original settings
// #define DENALI_CTL_49_VAL_CFG2	0x0000000000000050LL
// Dror's settings
#define DENALI_CTL_49_VAL_CFG2	0x0000000000000028LL
#define DENALI_CTL_50_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_51_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_52_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_53_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_54_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_55_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_56_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_57_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_58_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_59_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_60_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_61_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_62_VAL_CFG2	0x0000000000000000LL
// #define DENALI_CTL_63_VAL_CFG2	0x0000000000000000LL
// #define DENALI_CTL_64_VAL_CFG2	0x0000000000000000LL
// #define DENALI_CTL_65_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_66_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_67_VAL_CFG2	0x0000000000000000LL
#define DENALI_CTL_68_VAL_CFG2	0x0000000002000000LL
#define DENALI_CTL_69_VAL_CFG2	0x00000003e8050000LL

#endif /* __M8325XG_H */