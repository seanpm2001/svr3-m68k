#ifdef CC_mcc
	extern struct cstthdr cs_tostd;

	asm ("	global	cs_tostd");
	asm ("cs_tostd:");
  /* 000 */	asm ("	long 0x00000352");
  /* 004 */	asm ("	long 0x63735f74");
  /* 008 */	asm ("	long 0x6f737464");
  /* 00c */	asm ("	long 0x00000000");
  /* 010 */	asm ("	long 0x00000000");
  /* 014 */	asm ("	long 0x00000028");
  /* 018 */	asm ("	long 0x00000028");
  /* 01c */	asm ("	long 0x000a031a");
  /* 020 */	asm ("	long 0x00000000");
  /* 024 */	asm ("	long 0x00020000");
  /* 028 */	asm ("	long 0x20000000");
  /* 02c */	asm ("	long 0x217e0078");
  /* 030 */	asm ("	long 0x20000000");
  /* 034 */	asm ("	long 0xa1d20134");
  /* 038 */	asm ("	long 0x20000000");
  /* 03c */	asm ("	long 0xdfe30198");
  /* 040 */	asm ("	long 0x20000000");
  /* 044 */	asm ("	long 0xe6fe01a2");
  /* 048 */	asm ("	long 0xf0000000");
  /* 04c */	asm ("	long 0x212601d4");
  /* 050 */	asm ("	long 0xf1000000");
  /* 054 */	asm ("	long 0x213701e0");
  /* 058 */	asm ("	long 0xf1000000");
  /* 05c */	asm ("	long 0x3970020e");
  /* 060 */	asm ("	long 0xf1000000");
  /* 064 */	asm ("	long 0xa1bb027e");
  /* 068 */	asm ("	long 0xf1000000");
  /* 06c */	asm ("	long 0xbdc202b4");
  /* 070 */	asm ("	long 0xf1000000");
  /* 074 */	asm ("	long 0xc4f002c0");
  /* 078 */	asm ("	long 0x80218022");
  /* 07c */	asm ("	long 0x802380a4");
  /* 080 */	asm ("	long 0x80258026");
  /* 084 */	asm ("	long 0x80278028");
  /* 088 */	asm ("	long 0x8029802a");
  /* 08c */	asm ("	long 0x802b802c");
  /* 090 */	asm ("	long 0x802d802e");
  /* 094 */	asm ("	long 0x802f8030");
  /* 098 */	asm ("	long 0x80318032");
  /* 09c */	asm ("	long 0x80338034");
  /* 0a0 */	asm ("	long 0x80358036");
  /* 0a4 */	asm ("	long 0x80378038");
  /* 0a8 */	asm ("	long 0x8039803a");
  /* 0ac */	asm ("	long 0x803b803c");
  /* 0b0 */	asm ("	long 0x803d803e");
  /* 0b4 */	asm ("	long 0x803f8040");
  /* 0b8 */	asm ("	long 0x80418042");
  /* 0bc */	asm ("	long 0x80438044");
  /* 0c0 */	asm ("	long 0x80458046");
  /* 0c4 */	asm ("	long 0x80478048");
  /* 0c8 */	asm ("	long 0x8049804a");
  /* 0cc */	asm ("	long 0x804b804c");
  /* 0d0 */	asm ("	long 0x804d804e");
  /* 0d4 */	asm ("	long 0x804f8050");
  /* 0d8 */	asm ("	long 0x80518052");
  /* 0dc */	asm ("	long 0x80538054");
  /* 0e0 */	asm ("	long 0x80558056");
  /* 0e4 */	asm ("	long 0x80578058");
  /* 0e8 */	asm ("	long 0x8059805a");
  /* 0ec */	asm ("	long 0x805b805c");
  /* 0f0 */	asm ("	long 0x805d805e");
  /* 0f4 */	asm ("	long 0x805f8060");
  /* 0f8 */	asm ("	long 0x80618062");
  /* 0fc */	asm ("	long 0x80638064");
  /* 100 */	asm ("	long 0x80658066");
  /* 104 */	asm ("	long 0x80678068");
  /* 108 */	asm ("	long 0x8069806a");
  /* 10c */	asm ("	long 0x806b806c");
  /* 110 */	asm ("	long 0x806d806e");
  /* 114 */	asm ("	long 0x806f8070");
  /* 118 */	asm ("	long 0x80718072");
  /* 11c */	asm ("	long 0x80738074");
  /* 120 */	asm ("	long 0x80758076");
  /* 124 */	asm ("	long 0x80778078");
  /* 128 */	asm ("	long 0x8079807a");
  /* 12c */	asm ("	long 0x807b1000");
  /* 130 */	asm ("	long 0x807d807e");
  /* 134 */	asm ("	long 0xe841ea41");
  /* 138 */	asm ("	long 0xe44180e1");
  /* 13c */	asm ("	long 0xeb43e245");
  /* 140 */	asm ("	long 0xe44ee84f");
  /* 144 */	asm ("	long 0xe44f80ea");
  /* 148 */	asm ("	long 0x80e9e855");
  /* 14c */	asm ("	long 0xe161e261");
  /* 150 */	asm ("	long 0xe361e461");
  /* 154 */	asm ("	long 0xe861ea61");
  /* 158 */	asm ("	long 0x80f1eb63");
  /* 15c */	asm ("	long 0xe165e265");
  /* 160 */	asm ("	long 0xe365e865");
  /* 164 */	asm ("	long 0xe169e269");
  /* 168 */	asm ("	long 0xe369e869");
  /* 16c */	asm ("	long 0xe46ee16f");
  /* 170 */	asm ("	long 0xe26fe36f");
  /* 174 */	asm ("	long 0xe46fe86f");
  /* 178 */	asm ("	long 0x80fa80f9");
  /* 17c */	asm ("	long 0x80fbe175");
  /* 180 */	asm ("	long 0xe275e375");
  /* 184 */	asm ("	long 0xe875ea75");
  /* 188 */	asm ("	long 0x80ca80c8");
  /* 18c */	asm ("	long 0x80a380a7");
  /* 190 */	asm ("	long 0x802480a2");
  /* 194 */	asm ("	long 0x80a180bf");
  /* 198 */	asm ("	long 0x10011002");
  /* 19c */	asm ("	long 0x10031004");
  /* 1a0 */	asm ("	long 0x100580b6");
  /* 1a4 */	asm ("	long 0x100680d4");
  /* 1a8 */	asm ("	long 0x80d380d2");
  /* 1ac */	asm ("	long 0x80eb80e3");
  /* 1b0 */	asm ("	long 0x10071008");
  /* 1b4 */	asm ("	long 0x80a51009");
  /* 1b8 */	asm ("	long 0x80b880b4");
  /* 1bc */	asm ("	long 0x100a80b5");
  /* 1c0 */	asm ("	long 0xe379e279");
  /* 1c4 */	asm ("	long 0xe879100b");
  /* 1c8 */	asm ("	long 0x100c80c5");
  /* 1cc */	asm ("	long 0x807c80cb");
  /* 1d0 */	asm ("	long 0x80c2100d");
  /* 1d4 */	asm ("	long 0x200e3010");
  /* 1d8 */	asm ("	long 0x30132016");
  /* 1dc */	asm ("	long 0x2018201a");
  /* 1e0 */	asm ("	long 0xe141e241");
  /* 1e4 */	asm ("	long 0xe341e441");
  /* 1e8 */	asm ("	long 0xe541e641");
  /* 1ec */	asm ("	long 0xe841ea41");
  /* 1f0 */	asm ("	long 0xee41e243");
  /* 1f4 */	asm ("	long 0xe343e743");
  /* 1f8 */	asm ("	long 0xeb43ef43");
  /* 1fc */	asm ("	long 0xef44e145");
  /* 200 */	asm ("	long 0xe245e345");
  /* 204 */	asm ("	long 0xe545e745");
  /* 208 */	asm ("	long 0xe845ee45");
  /* 20c */	asm ("	long 0xef45e347");
  /* 210 */	asm ("	long 0xe647e747");
  /* 214 */	asm ("	long 0xeb47e348");
  /* 218 */	asm ("	long 0xe149e249");
  /* 21c */	asm ("	long 0xe349e449");
  /* 220 */	asm ("	long 0xe549e749");
  /* 224 */	asm ("	long 0xe849ee49");
  /* 228 */	asm ("	long 0xe34aeb4b");
  /* 22c */	asm ("	long 0xe24ceb4c");
  /* 230 */	asm ("	long 0xef4ce24e");
  /* 234 */	asm ("	long 0xe44eeb4e");
  /* 238 */	asm ("	long 0xef4ee14f");
  /* 23c */	asm ("	long 0xe24fe34f");
  /* 240 */	asm ("	long 0xe44fe54f");
  /* 244 */	asm ("	long 0xe84fed4f");
  /* 248 */	asm ("	long 0xe252eb52");
  /* 24c */	asm ("	long 0xef52e253");
  /* 250 */	asm ("	long 0xe353eb53");
  /* 254 */	asm ("	long 0xef53eb54");
  /* 258 */	asm ("	long 0xef54e155");
  /* 25c */	asm ("	long 0xe255e355");
  /* 260 */	asm ("	long 0xe455e555");
  /* 264 */	asm ("	long 0xe655e855");
  /* 268 */	asm ("	long 0xea55ed55");
  /* 26c */	asm ("	long 0xee55e357");
  /* 270 */	asm ("	long 0xe159e259");
  /* 274 */	asm ("	long 0xe359e859");
  /* 278 */	asm ("	long 0xe25ae75a");
  /* 27c */	asm ("	long 0xef5ae161");
  /* 280 */	asm ("	long 0xe261e361");
  /* 284 */	asm ("	long 0xe461e561");
  /* 288 */	asm ("	long 0xe661e861");
  /* 28c */	asm ("	long 0xea61ee61");
  /* 290 */	asm ("	long 0xe263e363");
  /* 294 */	asm ("	long 0xe763eb63");
  /* 298 */	asm ("	long 0xef63ef64");
  /* 29c */	asm ("	long 0xe165e265");
  /* 2a0 */	asm ("	long 0xe365e565");
  /* 2a4 */	asm ("	long 0xe765e865");
  /* 2a8 */	asm ("	long 0xee65ef65");
  /* 2ac */	asm ("	long 0xe267e367");
  /* 2b0 */	asm ("	long 0xe667e767");
  /* 2b4 */	asm ("	long 0xe368e169");
  /* 2b8 */	asm ("	long 0xe269e369");
  /* 2bc */	asm ("	long 0xe469e569");
  /* 2c0 */	asm ("	long 0xe869ee69");
  /* 2c4 */	asm ("	long 0xe36aeb6b");
  /* 2c8 */	asm ("	long 0xe26ceb6c");
  /* 2cc */	asm ("	long 0xef6ce26e");
  /* 2d0 */	asm ("	long 0xe46eeb6e");
  /* 2d4 */	asm ("	long 0xef6ee16f");
  /* 2d8 */	asm ("	long 0xe26fe36f");
  /* 2dc */	asm ("	long 0xe46fe56f");
  /* 2e0 */	asm ("	long 0xe86fed6f");
  /* 2e4 */	asm ("	long 0xe272eb72");
  /* 2e8 */	asm ("	long 0xef72e273");
  /* 2ec */	asm ("	long 0xe373eb73");
  /* 2f0 */	asm ("	long 0xef73eb74");
  /* 2f4 */	asm ("	long 0xef74e175");
  /* 2f8 */	asm ("	long 0xe275e375");
  /* 2fc */	asm ("	long 0xe475e575");
  /* 300 */	asm ("	long 0xe675e875");
  /* 304 */	asm ("	long 0xea75ed75");
  /* 308 */	asm ("	long 0xee75e377");
  /* 30c */	asm ("	long 0xe179e279");
  /* 310 */	asm ("	long 0xe379e879");
  /* 314 */	asm ("	long 0xe27ae77a");
  /* 318 */	asm ("	long 0xef7aef6b");
  /* 31c */	asm ("	long 0xefe4efe5");
  /* 320 */	asm ("	long 0xefe62223");
  /* 324 */	asm ("	long 0x2222ef30");
  /* 328 */	asm ("	long 0xefa2efa4");
  /* 32c */	asm ("	long 0xef6aefcf");
  /* 330 */	asm ("	long 0xef67ef66");
  /* 334 */	asm ("	long 0x26730066");
  /* 338 */	asm ("	long 0x00660066");
  /* 33c */	asm ("	long 0x00660069");
  /* 340 */	asm ("	long 0x00660066");
  /* 344 */	asm ("	long 0x006c0066");
  /* 348 */	asm ("	long 0x00690066");
  /* 34c */	asm ("	long 0x006c0066");
  /* 350 */	asm ("	long 0x00740000");
#else CC_mcc
	extern struct cstthdr cs_tostd;

	asm ("	.globl	cs_tostd");
	asm ("cs_tostd:");
  /* 000 */	asm ("	.long 0x00000352");
  /* 004 */	asm ("	.long 0x63735f74");
  /* 008 */	asm ("	.long 0x6f737464");
  /* 00c */	asm ("	.long 0x00000000");
  /* 010 */	asm ("	.long 0x00000000");
  /* 014 */	asm ("	.long 0x00000028");
  /* 018 */	asm ("	.long 0x00000028");
  /* 01c */	asm ("	.long 0x000a031a");
  /* 020 */	asm ("	.long 0x00000000");
  /* 024 */	asm ("	.long 0x00020000");
  /* 028 */	asm ("	.long 0x20000000");
  /* 02c */	asm ("	.long 0x217e0078");
  /* 030 */	asm ("	.long 0x20000000");
  /* 034 */	asm ("	.long 0xa1d20134");
  /* 038 */	asm ("	.long 0x20000000");
  /* 03c */	asm ("	.long 0xdfe30198");
  /* 040 */	asm ("	.long 0x20000000");
  /* 044 */	asm ("	.long 0xe6fe01a2");
  /* 048 */	asm ("	.long 0xf0000000");
  /* 04c */	asm ("	.long 0x212601d4");
  /* 050 */	asm ("	.long 0xf1000000");
  /* 054 */	asm ("	.long 0x213701e0");
  /* 058 */	asm ("	.long 0xf1000000");
  /* 05c */	asm ("	.long 0x3970020e");
  /* 060 */	asm ("	.long 0xf1000000");
  /* 064 */	asm ("	.long 0xa1bb027e");
  /* 068 */	asm ("	.long 0xf1000000");
  /* 06c */	asm ("	.long 0xbdc202b4");
  /* 070 */	asm ("	.long 0xf1000000");
  /* 074 */	asm ("	.long 0xc4f002c0");
  /* 078 */	asm ("	.long 0x80218022");
  /* 07c */	asm ("	.long 0x802380a4");
  /* 080 */	asm ("	.long 0x80258026");
  /* 084 */	asm ("	.long 0x80278028");
  /* 088 */	asm ("	.long 0x8029802a");
  /* 08c */	asm ("	.long 0x802b802c");
  /* 090 */	asm ("	.long 0x802d802e");
  /* 094 */	asm ("	.long 0x802f8030");
  /* 098 */	asm ("	.long 0x80318032");
  /* 09c */	asm ("	.long 0x80338034");
  /* 0a0 */	asm ("	.long 0x80358036");
  /* 0a4 */	asm ("	.long 0x80378038");
  /* 0a8 */	asm ("	.long 0x8039803a");
  /* 0ac */	asm ("	.long 0x803b803c");
  /* 0b0 */	asm ("	.long 0x803d803e");
  /* 0b4 */	asm ("	.long 0x803f8040");
  /* 0b8 */	asm ("	.long 0x80418042");
  /* 0bc */	asm ("	.long 0x80438044");
  /* 0c0 */	asm ("	.long 0x80458046");
  /* 0c4 */	asm ("	.long 0x80478048");
  /* 0c8 */	asm ("	.long 0x8049804a");
  /* 0cc */	asm ("	.long 0x804b804c");
  /* 0d0 */	asm ("	.long 0x804d804e");
  /* 0d4 */	asm ("	.long 0x804f8050");
  /* 0d8 */	asm ("	.long 0x80518052");
  /* 0dc */	asm ("	.long 0x80538054");
  /* 0e0 */	asm ("	.long 0x80558056");
  /* 0e4 */	asm ("	.long 0x80578058");
  /* 0e8 */	asm ("	.long 0x8059805a");
  /* 0ec */	asm ("	.long 0x805b805c");
  /* 0f0 */	asm ("	.long 0x805d805e");
  /* 0f4 */	asm ("	.long 0x805f8060");
  /* 0f8 */	asm ("	.long 0x80618062");
  /* 0fc */	asm ("	.long 0x80638064");
  /* 100 */	asm ("	.long 0x80658066");
  /* 104 */	asm ("	.long 0x80678068");
  /* 108 */	asm ("	.long 0x8069806a");
  /* 10c */	asm ("	.long 0x806b806c");
  /* 110 */	asm ("	.long 0x806d806e");
  /* 114 */	asm ("	.long 0x806f8070");
  /* 118 */	asm ("	.long 0x80718072");
  /* 11c */	asm ("	.long 0x80738074");
  /* 120 */	asm ("	.long 0x80758076");
  /* 124 */	asm ("	.long 0x80778078");
  /* 128 */	asm ("	.long 0x8079807a");
  /* 12c */	asm ("	.long 0x807b1000");
  /* 130 */	asm ("	.long 0x807d807e");
  /* 134 */	asm ("	.long 0xe841ea41");
  /* 138 */	asm ("	.long 0xe44180e1");
  /* 13c */	asm ("	.long 0xeb43e245");
  /* 140 */	asm ("	.long 0xe44ee84f");
  /* 144 */	asm ("	.long 0xe44f80ea");
  /* 148 */	asm ("	.long 0x80e9e855");
  /* 14c */	asm ("	.long 0xe161e261");
  /* 150 */	asm ("	.long 0xe361e461");
  /* 154 */	asm ("	.long 0xe861ea61");
  /* 158 */	asm ("	.long 0x80f1eb63");
  /* 15c */	asm ("	.long 0xe165e265");
  /* 160 */	asm ("	.long 0xe365e865");
  /* 164 */	asm ("	.long 0xe169e269");
  /* 168 */	asm ("	.long 0xe369e869");
  /* 16c */	asm ("	.long 0xe46ee16f");
  /* 170 */	asm ("	.long 0xe26fe36f");
  /* 174 */	asm ("	.long 0xe46fe86f");
  /* 178 */	asm ("	.long 0x80fa80f9");
  /* 17c */	asm ("	.long 0x80fbe175");
  /* 180 */	asm ("	.long 0xe275e375");
  /* 184 */	asm ("	.long 0xe875ea75");
  /* 188 */	asm ("	.long 0x80ca80c8");
  /* 18c */	asm ("	.long 0x80a380a7");
  /* 190 */	asm ("	.long 0x802480a2");
  /* 194 */	asm ("	.long 0x80a180bf");
  /* 198 */	asm ("	.long 0x10011002");
  /* 19c */	asm ("	.long 0x10031004");
  /* 1a0 */	asm ("	.long 0x100580b6");
  /* 1a4 */	asm ("	.long 0x100680d4");
  /* 1a8 */	asm ("	.long 0x80d380d2");
  /* 1ac */	asm ("	.long 0x80eb80e3");
  /* 1b0 */	asm ("	.long 0x10071008");
  /* 1b4 */	asm ("	.long 0x80a51009");
  /* 1b8 */	asm ("	.long 0x80b880b4");
  /* 1bc */	asm ("	.long 0x100a80b5");
  /* 1c0 */	asm ("	.long 0xe379e279");
  /* 1c4 */	asm ("	.long 0xe879100b");
  /* 1c8 */	asm ("	.long 0x100c80c5");
  /* 1cc */	asm ("	.long 0x807c80cb");
  /* 1d0 */	asm ("	.long 0x80c2100d");
  /* 1d4 */	asm ("	.long 0x200e3010");
  /* 1d8 */	asm ("	.long 0x30132016");
  /* 1dc */	asm ("	.long 0x2018201a");
  /* 1e0 */	asm ("	.long 0xe141e241");
  /* 1e4 */	asm ("	.long 0xe341e441");
  /* 1e8 */	asm ("	.long 0xe541e641");
  /* 1ec */	asm ("	.long 0xe841ea41");
  /* 1f0 */	asm ("	.long 0xee41e243");
  /* 1f4 */	asm ("	.long 0xe343e743");
  /* 1f8 */	asm ("	.long 0xeb43ef43");
  /* 1fc */	asm ("	.long 0xef44e145");
  /* 200 */	asm ("	.long 0xe245e345");
  /* 204 */	asm ("	.long 0xe545e745");
  /* 208 */	asm ("	.long 0xe845ee45");
  /* 20c */	asm ("	.long 0xef45e347");
  /* 210 */	asm ("	.long 0xe647e747");
  /* 214 */	asm ("	.long 0xeb47e348");
  /* 218 */	asm ("	.long 0xe149e249");
  /* 21c */	asm ("	.long 0xe349e449");
  /* 220 */	asm ("	.long 0xe549e749");
  /* 224 */	asm ("	.long 0xe849ee49");
  /* 228 */	asm ("	.long 0xe34aeb4b");
  /* 22c */	asm ("	.long 0xe24ceb4c");
  /* 230 */	asm ("	.long 0xef4ce24e");
  /* 234 */	asm ("	.long 0xe44eeb4e");
  /* 238 */	asm ("	.long 0xef4ee14f");
  /* 23c */	asm ("	.long 0xe24fe34f");
  /* 240 */	asm ("	.long 0xe44fe54f");
  /* 244 */	asm ("	.long 0xe84fed4f");
  /* 248 */	asm ("	.long 0xe252eb52");
  /* 24c */	asm ("	.long 0xef52e253");
  /* 250 */	asm ("	.long 0xe353eb53");
  /* 254 */	asm ("	.long 0xef53eb54");
  /* 258 */	asm ("	.long 0xef54e155");
  /* 25c */	asm ("	.long 0xe255e355");
  /* 260 */	asm ("	.long 0xe455e555");
  /* 264 */	asm ("	.long 0xe655e855");
  /* 268 */	asm ("	.long 0xea55ed55");
  /* 26c */	asm ("	.long 0xee55e357");
  /* 270 */	asm ("	.long 0xe159e259");
  /* 274 */	asm ("	.long 0xe359e859");
  /* 278 */	asm ("	.long 0xe25ae75a");
  /* 27c */	asm ("	.long 0xef5ae161");
  /* 280 */	asm ("	.long 0xe261e361");
  /* 284 */	asm ("	.long 0xe461e561");
  /* 288 */	asm ("	.long 0xe661e861");
  /* 28c */	asm ("	.long 0xea61ee61");
  /* 290 */	asm ("	.long 0xe263e363");
  /* 294 */	asm ("	.long 0xe763eb63");
  /* 298 */	asm ("	.long 0xef63ef64");
  /* 29c */	asm ("	.long 0xe165e265");
  /* 2a0 */	asm ("	.long 0xe365e565");
  /* 2a4 */	asm ("	.long 0xe765e865");
  /* 2a8 */	asm ("	.long 0xee65ef65");
  /* 2ac */	asm ("	.long 0xe267e367");
  /* 2b0 */	asm ("	.long 0xe667e767");
  /* 2b4 */	asm ("	.long 0xe368e169");
  /* 2b8 */	asm ("	.long 0xe269e369");
  /* 2bc */	asm ("	.long 0xe469e569");
  /* 2c0 */	asm ("	.long 0xe869ee69");
  /* 2c4 */	asm ("	.long 0xe36aeb6b");
  /* 2c8 */	asm ("	.long 0xe26ceb6c");
  /* 2cc */	asm ("	.long 0xef6ce26e");
  /* 2d0 */	asm ("	.long 0xe46eeb6e");
  /* 2d4 */	asm ("	.long 0xef6ee16f");
  /* 2d8 */	asm ("	.long 0xe26fe36f");
  /* 2dc */	asm ("	.long 0xe46fe56f");
  /* 2e0 */	asm ("	.long 0xe86fed6f");
  /* 2e4 */	asm ("	.long 0xe272eb72");
  /* 2e8 */	asm ("	.long 0xef72e273");
  /* 2ec */	asm ("	.long 0xe373eb73");
  /* 2f0 */	asm ("	.long 0xef73eb74");
  /* 2f4 */	asm ("	.long 0xef74e175");
  /* 2f8 */	asm ("	.long 0xe275e375");
  /* 2fc */	asm ("	.long 0xe475e575");
  /* 300 */	asm ("	.long 0xe675e875");
  /* 304 */	asm ("	.long 0xea75ed75");
  /* 308 */	asm ("	.long 0xee75e377");
  /* 30c */	asm ("	.long 0xe179e279");
  /* 310 */	asm ("	.long 0xe379e879");
  /* 314 */	asm ("	.long 0xe27ae77a");
  /* 318 */	asm ("	.long 0xef7aef6b");
  /* 31c */	asm ("	.long 0xefe4efe5");
  /* 320 */	asm ("	.long 0xefe62223");
  /* 324 */	asm ("	.long 0x2222ef30");
  /* 328 */	asm ("	.long 0xefa2efa4");
  /* 32c */	asm ("	.long 0xef6aefcf");
  /* 330 */	asm ("	.long 0xef67ef66");
  /* 334 */	asm ("	.long 0x26730066");
  /* 338 */	asm ("	.long 0x00660066");
  /* 33c */	asm ("	.long 0x00660069");
  /* 340 */	asm ("	.long 0x00660066");
  /* 344 */	asm ("	.long 0x006c0066");
  /* 348 */	asm ("	.long 0x00690066");
  /* 34c */	asm ("	.long 0x006c0066");
  /* 350 */	asm ("	.long 0x00740000");
#endif CC_mcc
