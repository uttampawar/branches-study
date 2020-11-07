#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "test.h"

extern struct opline * current;
extern struct opline * root;
extern struct opline * tail;

//Tail block
static void add_a_tail_block(void * labels[]) {
	tail = (struct opline *)malloc(sizeof(struct opline));
	tail->name = "done";
	tail->lineno = 256;
	tail->handler = (void *)labels[256];
	tail->next = NULL;

	struct opline * head = root;
	while(head) {
		if (head->next == NULL) {
			head->next = tail;
			break;
		}
		head = head->next;
	}

	return;
}

static void  add_a_node(void * labels[], int position) {
	struct opline * node = NULL;


	node = (struct opline *)malloc(sizeof(struct opline));
	node->next = NULL;

	node->lineno = position;
	node->handler = labels[position];
	if (position == 0) {
		node->name = "x0";
	} else if (position == 1) {
		node->name = "x1";
	} else if (position == 2) {
		node->name = "x2";
	} else if (position == 3) {
		node->name = "x3";
	} else if (position == 4) {
		node->name = "x4";
	} else if (position == 5) {
		node->name = "x5";
	} else if (position == 6) {
		node->name = "x6";
	} else if (position == 7) {
		node->name = "x7";
	} else if (position == 8) {
		node->name = "x8";
	} else if (position == 9) {
		node->name = "x9";
	} else if (position == 10) {
		node->name = "x10";
	} else if (position == 11) {
		node->name = "x11";
	} else if (position == 12) {
		node->name = "x12";
	} else if (position == 13) {
		node->name = "x13";
	} else if (position == 14) {
		node->name = "x14";
	} else if (position == 15) {
		node->name = "x15";
	} else if (position == 16) {
		node->name = "x16";
	} else if (position == 17) {
		node->name = "x17";
	} else if (position == 18) {
		node->name = "x18";
	} else if (position == 19) {
		node->name = "x19";
	} else if (position == 20) {
		node->name = "x20";
	} else if (position == 21) {
		node->name = "x21";
	} else if (position == 22) {
		node->name = "x22";
	} else if (position == 23) {
		node->name = "x23";
	} else if (position == 24) {
		node->name = "x24";
	} else if (position == 25) {
		node->name = "x25";
	} else if (position == 26) {
		node->name = "x26";
	} else if (position == 27) {
		node->name = "x27";
	} else if (position == 28) {
		node->name = "x28";
	} else if (position == 29) {
		node->name = "x29";
	} else if (position == 30) {
		node->name = "x30";
	} else if (position == 31) {
		node->name = "x31";
	} else if (position == 32) {
		node->name = "x32";
	} else if (position == 33) {
		node->name = "x33";
	} else if (position == 34) {
		node->name = "x34";
	} else if (position == 35) {
		node->name = "x35";
	} else if (position == 36) {
		node->name = "x36";
	} else if (position == 37) {
		node->name = "x37";
	} else if (position == 38) {
		node->name = "x38";
	} else if (position == 39) {
		node->name = "x39";
	} else if (position == 40) {
		node->name = "x40";
	} else if (position == 41) {
		node->name = "x41";
	} else if (position == 42) {
		node->name = "x42";
	} else if (position == 43) {
		node->name = "x43";
	} else if (position == 44) {
		node->name = "x44";
	} else if (position == 45) {
		node->name = "x45";
	} else if (position == 46) {
		node->name = "x46";
	} else if (position == 47) {
		node->name = "x47";
	} else if (position == 48) {
		node->name = "x48";
	} else if (position == 49) {
		node->name = "x49";
	} else if (position == 50) {
		node->name = "x50";
	} else if (position == 51) {
		node->name = "x51";
	} else if (position == 52) {
		node->name = "x52";
	} else if (position == 53) {
		node->name = "x53";
	} else if (position == 54) {
		node->name = "x54";
	} else if (position == 55) {
		node->name = "x55";
	} else if (position == 56) {
		node->name = "x56";
	} else if (position == 57) {
		node->name = "x57";
	} else if (position == 58) {
		node->name = "x58";
	} else if (position == 59) {
		node->name = "x59";
	} else if (position == 60) {
		node->name = "x60";
	} else if (position == 61) {
		node->name = "x61";
	} else if (position == 62) {
		node->name = "x62";
	} else if (position == 63) {
		node->name = "x63";
	} else if (position == 64) {
		node->name = "x64";
	} else if (position == 65) {
		node->name = "x65";
	} else if (position == 66) {
		node->name = "x66";
	} else if (position == 67) {
		node->name = "x67";
	} else if (position == 68) {
		node->name = "x68";
	} else if (position == 69) {
		node->name = "x69";
	} else if (position == 70) {
		node->name = "x70";
	} else if (position == 71) {
		node->name = "x71";
	} else if (position == 72) {
		node->name = "x72";
	} else if (position == 73) {
		node->name = "x73";
	} else if (position == 74) {
		node->name = "x74";
	} else if (position == 75) {
		node->name = "x75";
	} else if (position == 76) {
		node->name = "x76";
	} else if (position == 77) {
		node->name = "x77";
	} else if (position == 78) {
		node->name = "x78";
	} else if (position == 79) {
		node->name = "x79";
	} else if (position == 80) {
		node->name = "x80";
	} else if (position == 81) {
		node->name = "x81";
	} else if (position == 82) {
		node->name = "x82";
	} else if (position == 83) {
		node->name = "x83";
	} else if (position == 84) {
		node->name = "x84";
	} else if (position == 85) {
		node->name = "x85";
	} else if (position == 86) {
		node->name = "x86";
	} else if (position == 87) {
		node->name = "x87";
	} else if (position == 88) {
		node->name = "x88";
	} else if (position == 89) {
		node->name = "x89";
	} else if (position == 90) {
		node->name = "x90";
	} else if (position == 91) {
		node->name = "x91";
	} else if (position == 92) {
		node->name = "x92";
	} else if (position == 93) {
		node->name = "x93";
	} else if (position == 94) {
		node->name = "x94";
	} else if (position == 95) {
		node->name = "x95";
	} else if (position == 96) {
		node->name = "x96";
	} else if (position == 97) {
		node->name = "x97";
	} else if (position == 98) {
		node->name = "x98";
	} else if (position == 99) {
		node->name = "x99";
	} else if (position == 100) {
		node->name = "x100";
	} else if (position == 101) {
		node->name = "x101";
	} else if (position == 102) {
		node->name = "x102";
	} else if (position == 103) {
		node->name = "x103";
	} else if (position == 104) {
		node->name = "x104";
	} else if (position == 105) {
		node->name = "x105";
	} else if (position == 106) {
		node->name = "x106";
	} else if (position == 107) {
		node->name = "x107";
	} else if (position == 108) {
		node->name = "x108";
	} else if (position == 109) {
		node->name = "x109";
	} else if (position == 110) {
		node->name = "x110";
	} else if (position == 111) {
		node->name = "x111";
	} else if (position == 112) {
		node->name = "x112";
	} else if (position == 113) {
		node->name = "x113";
	} else if (position == 114) {
		node->name = "x114";
	} else if (position == 115) {
		node->name = "x115";
	} else if (position == 116) {
		node->name = "x116";
	} else if (position == 117) {
		node->name = "x117";
	} else if (position == 118) {
		node->name = "x118";
	} else if (position == 119) {
		node->name = "x119";
	} else if (position == 120) {
		node->name = "x120";
	} else if (position == 121) {
		node->name = "x121";
	} else if (position == 122) {
		node->name = "x122";
	} else if (position == 123) {
		node->name = "x123";
	} else if (position == 124) {
		node->name = "x124";
	} else if (position == 125) {
		node->name = "x125";
	} else if (position == 126) {
		node->name = "x126";
	} else if (position == 127) {
		node->name = "x127";
	} else if (position == 128) {
		node->name = "x128";
	} else if (position == 129) {
		node->name = "x129";
	} else if (position == 130) {
		node->name = "x130";
	} else if (position == 131) {
		node->name = "x131";
	} else if (position == 132) {
		node->name = "x132";
	} else if (position == 133) {
		node->name = "x133";
	} else if (position == 134) {
		node->name = "x134";
	} else if (position == 135) {
		node->name = "x135";
	} else if (position == 136) {
		node->name = "x136";
	} else if (position == 137) {
		node->name = "x137";
	} else if (position == 138) {
		node->name = "x138";
	} else if (position == 139) {
		node->name = "x139";
	} else if (position == 140) {
		node->name = "x140";
	} else if (position == 141) {
		node->name = "x141";
	} else if (position == 142) {
		node->name = "x142";
	} else if (position == 143) {
		node->name = "x143";
	} else if (position == 144) {
		node->name = "x144";
	} else if (position == 145) {
		node->name = "x145";
	} else if (position == 146) {
		node->name = "x146";
	} else if (position == 147) {
		node->name = "x147";
	} else if (position == 148) {
		node->name = "x148";
	} else if (position == 149) {
		node->name = "x149";
	} else if (position == 150) {
		node->name = "x150";
	} else if (position == 151) {
		node->name = "x151";
	} else if (position == 152) {
		node->name = "x152";
	} else if (position == 153) {
		node->name = "x153";
	} else if (position == 154) {
		node->name = "x154";
	} else if (position == 155) {
		node->name = "x155";
	} else if (position == 156) {
		node->name = "x156";
	} else if (position == 157) {
		node->name = "x157";
	} else if (position == 158) {
		node->name = "x158";
	} else if (position == 159) {
		node->name = "x159";
	} else if (position == 160) {
		node->name = "x160";
	} else if (position == 161) {
		node->name = "x161";
	} else if (position == 162) {
		node->name = "x162";
	} else if (position == 163) {
		node->name = "x163";
	} else if (position == 164) {
		node->name = "x164";
	} else if (position == 165) {
		node->name = "x165";
	} else if (position == 166) {
		node->name = "x166";
	} else if (position == 167) {
		node->name = "x167";
	} else if (position == 168) {
		node->name = "x168";
	} else if (position == 169) {
		node->name = "x169";
	} else if (position == 170) {
		node->name = "x170";
	} else if (position == 171) {
		node->name = "x171";
	} else if (position == 172) {
		node->name = "x172";
	} else if (position == 173) {
		node->name = "x173";
	} else if (position == 174) {
		node->name = "x174";
	} else if (position == 175) {
		node->name = "x175";
	} else if (position == 176) {
		node->name = "x176";
	} else if (position == 177) {
		node->name = "x177";
	} else if (position == 178) {
		node->name = "x178";
	} else if (position == 179) {
		node->name = "x179";
	} else if (position == 180) {
		node->name = "x180";
	} else if (position == 181) {
		node->name = "x181";
	} else if (position == 182) {
		node->name = "x182";
	} else if (position == 183) {
		node->name = "x183";
	} else if (position == 184) {
		node->name = "x184";
	} else if (position == 185) {
		node->name = "x185";
	} else if (position == 186) {
		node->name = "x186";
	} else if (position == 187) {
		node->name = "x187";
	} else if (position == 188) {
		node->name = "x188";
	} else if (position == 189) {
		node->name = "x189";
	} else if (position == 190) {
		node->name = "x190";
	} else if (position == 191) {
		node->name = "x191";
	} else if (position == 192) {
		node->name = "x192";
	} else if (position == 193) {
		node->name = "x193";
	} else if (position == 194) {
		node->name = "x194";
	} else if (position == 195) {
		node->name = "x195";
	} else if (position == 196) {
		node->name = "x196";
	} else if (position == 197) {
		node->name = "x197";
	} else if (position == 198) {
		node->name = "x198";
	} else if (position == 199) {
		node->name = "x199";
	} else if (position == 200) {
		node->name = "x200";
	} else if (position == 201) {
		node->name = "x201";
	} else if (position == 202) {
		node->name = "x202";
	} else if (position == 203) {
		node->name = "x203";
	} else if (position == 204) {
		node->name = "x204";
	} else if (position == 205) {
		node->name = "x205";
	} else if (position == 206) {
		node->name = "x206";
	} else if (position == 207) {
		node->name = "x207";
	} else if (position == 208) {
		node->name = "x208";
	} else if (position == 209) {
		node->name = "x209";
	} else if (position == 210) {
		node->name = "x210";
	} else if (position == 211) {
		node->name = "x211";
	} else if (position == 212) {
		node->name = "x212";
	} else if (position == 213) {
		node->name = "x213";
	} else if (position == 214) {
		node->name = "x214";
	} else if (position == 215) {
		node->name = "x215";
	} else if (position == 216) {
		node->name = "x216";
	} else if (position == 217) {
		node->name = "x217";
	} else if (position == 218) {
		node->name = "x218";
	} else if (position == 219) {
		node->name = "x219";
	} else if (position == 220) {
		node->name = "x220";
	} else if (position == 221) {
		node->name = "x221";
	} else if (position == 222) {
		node->name = "x222";
	} else if (position == 223) {
		node->name = "x223";
	} else if (position == 224) {
		node->name = "x224";
	} else if (position == 225) {
		node->name = "x225";
	} else if (position == 226) {
		node->name = "x226";
	} else if (position == 227) {
		node->name = "x227";
	} else if (position == 228) {
		node->name = "x228";
	} else if (position == 229) {
		node->name = "x229";
	} else if (position == 230) {
		node->name = "x230";
	} else if (position == 231) {
		node->name = "x231";
	} else if (position == 232) {
		node->name = "x232";
	} else if (position == 233) {
		node->name = "x233";
	} else if (position == 234) {
		node->name = "x234";
	} else if (position == 235) {
		node->name = "x235";
	} else if (position == 236) {
		node->name = "x236";
	} else if (position == 237) {
		node->name = "x237";
	} else if (position == 238) {
		node->name = "x238";
	} else if (position == 239) {
		node->name = "x239";
	} else if (position == 240) {
		node->name = "x240";
	} else if (position == 241) {
		node->name = "x241";
	} else if (position == 242) {
		node->name = "x242";
	} else if (position == 243) {
		node->name = "x243";
	} else if (position == 244) {
		node->name = "x244";
	} else if (position == 245) {
		node->name = "x245";
	} else if (position == 246) {
		node->name = "x246";
	} else if (position == 247) {
		node->name = "x247";
	} else if (position == 248) {
		node->name = "x248";
	} else if (position == 249) {
		node->name = "x249";
	} else if (position == 250) {
		node->name = "x250";
	} else if (position == 251) {
		node->name = "x251";
	} else if (position == 252) {
		node->name = "x252";
	} else if (position == 253) {
		node->name = "x253";
	} else if (position == 254) {
		node->name = "x254";
	} else if (position == 255) {
		node->name = "x255";
	} else if (position == 256) {
		node->name = "done";
	}

	if (root == NULL) {
		root = node;
	} else {
		struct opline * head = root;
		while(head != NULL) {
			if (head->next != NULL) {
				head = head->next;
			} else {
				head->next = node;
				break;
			}
		}
	}
}

void build_the_flow(void * labels[], int nodes, int dynamic) {
	long idx=0;
	int position = 0;

	/* Build an execution pattern */
	printf("Create a flow with %d nodes\n", nodes);
	if (dynamic) {

		/* Use random number generator to create dynamic flow */
		printf("Use random number generator between 0 and %d\n", OPCODES);
		for(idx=0; idx < nodes; idx++) {
			/* get random number between 0 and #OPCODES */
			position = rand() % OPCODES;
			add_a_node(labels, position);
		}
	} else {

		/* Use test.input file */
		printf("Building the flow from  input file\n");
		FILE * myfp = fopen("./test.input", "r");
		if (myfp == NULL) {
			fprintf(stderr, "Couldnt open test input\n");
			exit(1);
		}

		position=0;
		idx=0;
		int n=0;
		while(!feof(myfp)) {
			n=fscanf (myfp, "%d", &position);
			if(n < 0 ) {
				fclose(myfp);
				break;
			}
			idx++;
			if (idx > nodes) {
				fclose(myfp);
				break;
			}
			add_a_node(labels, position);
			fflush(myfp);
		}
	}

	add_a_tail_block(labels);


	return;
}

void  __attribute__((noinline)) advanced_to_next_node() {
	if (current != NULL) {
		current = current->next;
	} else {
	  current = tail;
	}

	return;
}

void  __attribute__((noinline)) x10() {
  myglobal++;
#ifdef DEBUG
  printf("In x10()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x9() {
  myglobal++;
#ifdef DEBUG
  printf("In x9()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x8() {
  myglobal++;
#ifdef DEBUG
  printf("In x8()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) x7() {
  myglobal++;
#ifdef DEBUG
  printf("In x7()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) x6() {
  myglobal++;
#ifdef DEBUG
  printf("In x6()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x5() {
  myglobal++;
#ifdef DEBUG
  printf("In x5()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) x4() {
  myglobal++;
#ifdef DEBUG
  printf("In x4()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) x3() {
  myglobal++;
#ifdef DEBUG
  printf("In x3()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) x2() {
  myglobal++;
#ifdef DEBUG
  printf("In x2()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) x1() {
  myglobal++;
#ifdef DEBUG
  printf("In x1()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x0() {
  myglobal++;
#ifdef DEBUG
  printf("In x0()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x11() {
  myglobal++;
#ifdef DEBUG
  printf("In x11()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x12() {
  myglobal++;
#ifdef DEBUG
  printf("In x12()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x13() {
  myglobal++;
#ifdef DEBUG
  printf("In x13()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x14() {
  myglobal++;
#ifdef DEBUG
  printf("In x14()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x15() {
  myglobal++;
#ifdef DEBUG
  printf("In x15()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x16() {
  myglobal++;
#ifdef DEBUG
  printf("In x16()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x17() {
  myglobal++;
#ifdef DEBUG
  printf("In x17()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x18() {
  myglobal++;
#ifdef DEBUG
  printf("In x18()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x19() {
  myglobal++;
#ifdef DEBUG
  printf("In x19()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x20() {
  myglobal++;
#ifdef DEBUG
  printf("In x20()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x21() {
  myglobal++;
#ifdef DEBUG
  printf("In x21()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x22() {
  myglobal++;
#ifdef DEBUG
  printf("In x22()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x23() {
  myglobal++;
#ifdef DEBUG
  printf("In x23()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x24() {
  myglobal++;
#ifdef DEBUG
  printf("In x24()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x25() {
  myglobal++;
#ifdef DEBUG
  printf("In x25()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x26() {
  myglobal++;
#ifdef DEBUG
  printf("In x26()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x27() {
  myglobal++;
#ifdef DEBUG
  printf("In x27()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x28() {
  myglobal++;
#ifdef DEBUG
  printf("In x28()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x29() {
  myglobal++;
#ifdef DEBUG
  printf("In x29()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x30() {
  myglobal++;
#ifdef DEBUG
  printf("In x30()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x31() {
  myglobal++;
#ifdef DEBUG
  printf("In x31()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x32() {
  myglobal++;
#ifdef DEBUG
  printf("In x32()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x33() {
  myglobal++;
#ifdef DEBUG
  printf("In x33()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x34() {
  myglobal++;
#ifdef DEBUG
  printf("In x34()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x35() {
  myglobal++;
#ifdef DEBUG
  printf("In x35()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x36() {
  myglobal++;
#ifdef DEBUG
  printf("In x36()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x37() {
  myglobal++;
#ifdef DEBUG
  printf("In x37()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x38() {
  myglobal++;
#ifdef DEBUG
  printf("In x38()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x39() {
  myglobal++;
#ifdef DEBUG
  printf("In x39()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x40() {
  myglobal++;
#ifdef DEBUG
  printf("In x40()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x41() {
  myglobal++;
#ifdef DEBUG
  printf("In x41()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x42() {
  myglobal++;
#ifdef DEBUG
  printf("In x42()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x43() {
  myglobal++;
#ifdef DEBUG
  printf("In x43()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x44() {
  myglobal++;
#ifdef DEBUG
  printf("In x44()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x45() {
  myglobal++;
#ifdef DEBUG
  printf("In x45()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x46() {
  myglobal++;
#ifdef DEBUG
  printf("In x46()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x47() {
  myglobal++;
#ifdef DEBUG
  printf("In x47()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x48() {
  myglobal++;
#ifdef DEBUG
  printf("In x48()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x49() {
  myglobal++;
#ifdef DEBUG
  printf("In x49()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x50() {
  myglobal++;
#ifdef DEBUG
  printf("In x50()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x51() {
  myglobal++;
#ifdef DEBUG
  printf("In x51()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x52() {
  myglobal++;
#ifdef DEBUG
  printf("In x52()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x53() {
  myglobal++;
#ifdef DEBUG
  printf("In x53()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x54() {
  myglobal++;
#ifdef DEBUG
  printf("In x54()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x55() {
  myglobal++;
#ifdef DEBUG
  printf("In x55()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x56() {
  myglobal++;
#ifdef DEBUG
  printf("In x56()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x57() {
  myglobal++;
#ifdef DEBUG
  printf("In x57()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x58() {
  myglobal++;
#ifdef DEBUG
  printf("In x58()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x59() {
  myglobal++;
#ifdef DEBUG
  printf("In x59()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x60() {
  myglobal++;
#ifdef DEBUG
  printf("In x60()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x61() {
  myglobal++;
#ifdef DEBUG
  printf("In x61()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x62() {
  myglobal++;
#ifdef DEBUG
  printf("In x62()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x63() {
  myglobal++;
#ifdef DEBUG
  printf("In x63()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x64() {
  myglobal++;
#ifdef DEBUG
  printf("In x64()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x65() {
  myglobal++;
#ifdef DEBUG
  printf("In x65()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x66() {
  myglobal++;
#ifdef DEBUG
  printf("In x66()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x67() {
  myglobal++;
#ifdef DEBUG
  printf("In x67()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x68() {
  myglobal++;
#ifdef DEBUG
  printf("In x68()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x69() {
  myglobal++;
#ifdef DEBUG
  printf("In x69()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x70() {
  myglobal++;
#ifdef DEBUG
  printf("In x70()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x71() {
  myglobal++;
#ifdef DEBUG
  printf("In x71()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x72() {
  myglobal++;
#ifdef DEBUG
  printf("In x72()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x73() {
  myglobal++;
#ifdef DEBUG
  printf("In x73()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x74() {
  myglobal++;
#ifdef DEBUG
  printf("In x74()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x75() {
  myglobal++;
#ifdef DEBUG
  printf("In x75()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x76() {
  myglobal++;
#ifdef DEBUG
  printf("In x76()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x77() {
  myglobal++;
#ifdef DEBUG
  printf("In x77()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x78() {
  myglobal++;
#ifdef DEBUG
  printf("In x78()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x79() {
  myglobal++;
#ifdef DEBUG
  printf("In x79()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x80() {
  myglobal++;
#ifdef DEBUG
  printf("In x80()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x81() {
  myglobal++;
#ifdef DEBUG
  printf("In x81()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x82() {
  myglobal++;
#ifdef DEBUG
  printf("In x82()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x83() {
  myglobal++;
#ifdef DEBUG
  printf("In x83()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x84() {
  myglobal++;
#ifdef DEBUG
  printf("In x84()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x85() {
  myglobal++;
#ifdef DEBUG
  printf("In x85()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x86() {
  myglobal++;
#ifdef DEBUG
  printf("In x86()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x87() {
  myglobal++;
#ifdef DEBUG
  printf("In x87()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x88() {
  myglobal++;
#ifdef DEBUG
  printf("In x88()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x89() {
  myglobal++;
#ifdef DEBUG
  printf("In x89()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x90() {
  myglobal++;
#ifdef DEBUG
  printf("In x90()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x91() {
  myglobal++;
#ifdef DEBUG
  printf("In x91()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x92() {
  myglobal++;
#ifdef DEBUG
  printf("In x92()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x93() {
  myglobal++;
#ifdef DEBUG
  printf("In x93()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x94() {
  myglobal++;
#ifdef DEBUG
  printf("In x94()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x95() {
  myglobal++;
#ifdef DEBUG
  printf("In x95()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x96() {
  myglobal++;
#ifdef DEBUG
  printf("In x96()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x97() {
  myglobal++;
#ifdef DEBUG
  printf("In x97()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x98() {
  myglobal++;
#ifdef DEBUG
  printf("In x98()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x99() {
  myglobal++;
#ifdef DEBUG
  printf("In x99()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x100() {
  myglobal++;
#ifdef DEBUG
  printf("In x100()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x101() {
  myglobal++;
#ifdef DEBUG
  printf("In x101()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x102() {
  myglobal++;
#ifdef DEBUG
  printf("In x102()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x103() {
  myglobal++;
#ifdef DEBUG
  printf("In x103()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x104() {
  myglobal++;
#ifdef DEBUG
  printf("In x104()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x105() {
  myglobal++;
#ifdef DEBUG
  printf("In x105()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x106() {
  myglobal++;
#ifdef DEBUG
  printf("In x106()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x107() {
  myglobal++;
#ifdef DEBUG
  printf("In x107()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x108() {
  myglobal++;
#ifdef DEBUG
  printf("In x108()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x109() {
  myglobal++;
#ifdef DEBUG
  printf("In x109()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x110() {
  myglobal++;
#ifdef DEBUG
  printf("In x110()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x111() {
  myglobal++;
#ifdef DEBUG
  printf("In x111()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x112() {
  myglobal++;
#ifdef DEBUG
  printf("In x112()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x113() {
  myglobal++;
#ifdef DEBUG
  printf("In x113()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x114() {
  myglobal++;
#ifdef DEBUG
  printf("In x114()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x115() {
  myglobal++;
#ifdef DEBUG
  printf("In x115()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x116() {
  myglobal++;
#ifdef DEBUG
  printf("In x116()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x117() {
  myglobal++;
#ifdef DEBUG
  printf("In x117()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x118() {
  myglobal++;
#ifdef DEBUG
  printf("In x118()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x119() {
  myglobal++;
#ifdef DEBUG
  printf("In x119()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x120() {
  myglobal++;
#ifdef DEBUG
  printf("In x120()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x121() {
  myglobal++;
#ifdef DEBUG
  printf("In x121()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x122() {
  myglobal++;
#ifdef DEBUG
  printf("In x122()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x123() {
  myglobal++;
#ifdef DEBUG
  printf("In x123()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x124() {
  myglobal++;
#ifdef DEBUG
  printf("In x124()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x125() {
  myglobal++;
#ifdef DEBUG
  printf("In x125()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x126() {
  myglobal++;
#ifdef DEBUG
  printf("In x126()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x127() {
  myglobal++;
#ifdef DEBUG
  printf("In x127()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x128() {
  myglobal++;
#ifdef DEBUG
  printf("In x128()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x129() {
  myglobal++;
#ifdef DEBUG
  printf("In x129()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x130() {
  myglobal++;
#ifdef DEBUG
  printf("In x130()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x131() {
  myglobal++;
#ifdef DEBUG
  printf("In x131()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x132() {
  myglobal++;
#ifdef DEBUG
  printf("In x132()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x133() {
  myglobal++;
#ifdef DEBUG
  printf("In x133()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x134() {
  myglobal++;
#ifdef DEBUG
  printf("In x134()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x135() {
  myglobal++;
#ifdef DEBUG
  printf("In x135()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x136() {
  myglobal++;
#ifdef DEBUG
  printf("In x136()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x137() {
  myglobal++;
#ifdef DEBUG
  printf("In x137()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x138() {
  myglobal++;
#ifdef DEBUG
  printf("In x138()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x139() {
  myglobal++;
#ifdef DEBUG
  printf("In x139()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x140() {
  myglobal++;
#ifdef DEBUG
  printf("In x140()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x141() {
  myglobal++;
#ifdef DEBUG
  printf("In x141()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x142() {
  myglobal++;
#ifdef DEBUG
  printf("In x142()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x143() {
  myglobal++;
#ifdef DEBUG
  printf("In x143()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x144() {
  myglobal++;
#ifdef DEBUG
  printf("In x144()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x145() {
  myglobal++;
#ifdef DEBUG
  printf("In x145()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x146() {
  myglobal++;
#ifdef DEBUG
  printf("In x146()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x147() {
  myglobal++;
#ifdef DEBUG
  printf("In x147()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x148() {
  myglobal++;
#ifdef DEBUG
  printf("In x148()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x149() {
  myglobal++;
#ifdef DEBUG
  printf("In x149()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x150() {
  myglobal++;
#ifdef DEBUG
  printf("In x150()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x151() {
  myglobal++;
#ifdef DEBUG
  printf("In x151()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x152() {
  myglobal++;
#ifdef DEBUG
  printf("In x152()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x153() {
  myglobal++;
#ifdef DEBUG
  printf("In x153()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x154() {
  myglobal++;
#ifdef DEBUG
  printf("In x154()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x155() {
  myglobal++;
#ifdef DEBUG
  printf("In x155()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x156() {
  myglobal++;
#ifdef DEBUG
  printf("In x156()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x157() {
  myglobal++;
#ifdef DEBUG
  printf("In x157()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x158() {
  myglobal++;
#ifdef DEBUG
  printf("In x158()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x159() {
  myglobal++;
#ifdef DEBUG
  printf("In x159()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x160() {
  myglobal++;
#ifdef DEBUG
  printf("In x160()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x161() {
  myglobal++;
#ifdef DEBUG
  printf("In x161()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x162() {
  myglobal++;
#ifdef DEBUG
  printf("In x162()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x163() {
  myglobal++;
#ifdef DEBUG
  printf("In x163()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x164() {
  myglobal++;
#ifdef DEBUG
  printf("In x164()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x165() {
  myglobal++;
#ifdef DEBUG
  printf("In x165()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x166() {
  myglobal++;
#ifdef DEBUG
  printf("In x166()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x167() {
  myglobal++;
#ifdef DEBUG
  printf("In x167()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x168() {
  myglobal++;
#ifdef DEBUG
  printf("In x168()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x169() {
  myglobal++;
#ifdef DEBUG
  printf("In x169()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x170() {
  myglobal++;
#ifdef DEBUG
  printf("In x170()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x171() {
  myglobal++;
#ifdef DEBUG
  printf("In x171()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x172() {
  myglobal++;
#ifdef DEBUG
  printf("In x172()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x173() {
  myglobal++;
#ifdef DEBUG
  printf("In x173()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x174() {
  myglobal++;
#ifdef DEBUG
  printf("In x174()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x175() {
  myglobal++;
#ifdef DEBUG
  printf("In x175()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x176() {
  myglobal++;
#ifdef DEBUG
  printf("In x176()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x177() {
  myglobal++;
#ifdef DEBUG
  printf("In x177()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x178() {
  myglobal++;
#ifdef DEBUG
  printf("In x178()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x179() {
  myglobal++;
#ifdef DEBUG
  printf("In x179()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x180() {
  myglobal++;
#ifdef DEBUG
  printf("In x180()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x181() {
  myglobal++;
#ifdef DEBUG
  printf("In x181()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x182() {
  myglobal++;
#ifdef DEBUG
  printf("In x182()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x183() {
  myglobal++;
#ifdef DEBUG
  printf("In x183()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x184() {
  myglobal++;
#ifdef DEBUG
  printf("In x184()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x185() {
  myglobal++;
#ifdef DEBUG
  printf("In x185()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x186() {
  myglobal++;
#ifdef DEBUG
  printf("In x186()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x187() {
  myglobal++;
#ifdef DEBUG
  printf("In x187()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x188() {
  myglobal++;
#ifdef DEBUG
  printf("In x188()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x189() {
  myglobal++;
#ifdef DEBUG
  printf("In x189()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x190() {
  myglobal++;
#ifdef DEBUG
  printf("In x190()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x191() {
  myglobal++;
#ifdef DEBUG
  printf("In x191()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x192() {
  myglobal++;
#ifdef DEBUG
  printf("In x192()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x193() {
  myglobal++;
#ifdef DEBUG
  printf("In x193()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x194() {
  myglobal++;
#ifdef DEBUG
  printf("In x194()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x195() {
  myglobal++;
#ifdef DEBUG
  printf("In x195()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x196() {
  myglobal++;
#ifdef DEBUG
  printf("In x196()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x197() {
  myglobal++;
#ifdef DEBUG
  printf("In x197()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x198() {
  myglobal++;
#ifdef DEBUG
  printf("In x198()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x199() {
  myglobal++;
#ifdef DEBUG
  printf("In x199()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x200() {
  myglobal++;
#ifdef DEBUG
  printf("In x200()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x201() {
  myglobal++;
#ifdef DEBUG
  printf("In x201()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x202() {
  myglobal++;
#ifdef DEBUG
  printf("In x202()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x203() {
  myglobal++;
#ifdef DEBUG
  printf("In x203()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x204() {
  myglobal++;
#ifdef DEBUG
  printf("In x204()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x205() {
  myglobal++;
#ifdef DEBUG
  printf("In x205()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x206() {
  myglobal++;
#ifdef DEBUG
  printf("In x206()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x207() {
  myglobal++;
#ifdef DEBUG
  printf("In x207()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x208() {
  myglobal++;
#ifdef DEBUG
  printf("In x208()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x209() {
  myglobal++;
#ifdef DEBUG
  printf("In x209()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x210() {
  myglobal++;
#ifdef DEBUG
  printf("In x210()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x211() {
  myglobal++;
#ifdef DEBUG
  printf("In x211()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x212() {
  myglobal++;
#ifdef DEBUG
  printf("In x212()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x213() {
  myglobal++;
#ifdef DEBUG
  printf("In x213()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x214() {
  myglobal++;
#ifdef DEBUG
  printf("In x214()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x215() {
  myglobal++;
#ifdef DEBUG
  printf("In x215()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x216() {
  myglobal++;
#ifdef DEBUG
  printf("In x216()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x217() {
  myglobal++;
#ifdef DEBUG
  printf("In x217()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x218() {
  myglobal++;
#ifdef DEBUG
  printf("In x218()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x219() {
  myglobal++;
#ifdef DEBUG
  printf("In x219()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x220() {
  myglobal++;
#ifdef DEBUG
  printf("In x220()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x221() {
  myglobal++;
#ifdef DEBUG
  printf("In x221()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x222() {
  myglobal++;
#ifdef DEBUG
  printf("In x222()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x223() {
  myglobal++;
#ifdef DEBUG
  printf("In x223()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x224() {
  myglobal++;
#ifdef DEBUG
  printf("In x224()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x225() {
  myglobal++;
#ifdef DEBUG
  printf("In x225()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x226() {
  myglobal++;
#ifdef DEBUG
  printf("In x226()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x227() {
  myglobal++;
#ifdef DEBUG
  printf("In x227()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x228() {
  myglobal++;
#ifdef DEBUG
  printf("In x228()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x229() {
  myglobal++;
#ifdef DEBUG
  printf("In x229()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x230() {
  myglobal++;
#ifdef DEBUG
  printf("In x230()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x231() {
  myglobal++;
#ifdef DEBUG
  printf("In x231()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x232() {
  myglobal++;
#ifdef DEBUG
  printf("In x232()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x233() {
  myglobal++;
#ifdef DEBUG
  printf("In x233()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x234() {
  myglobal++;
#ifdef DEBUG
  printf("In x234()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x235() {
  myglobal++;
#ifdef DEBUG
  printf("In x235()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x236() {
  myglobal++;
#ifdef DEBUG
  printf("In x236()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x237() {
  myglobal++;
#ifdef DEBUG
  printf("In x237()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x238() {
  myglobal++;
#ifdef DEBUG
  printf("In x238()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x239() {
  myglobal++;
#ifdef DEBUG
  printf("In x239()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x240() {
  myglobal++;
#ifdef DEBUG
  printf("In x240()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x241() {
  myglobal++;
#ifdef DEBUG
  printf("In x241()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x242() {
  myglobal++;
#ifdef DEBUG
  printf("In x242()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x243() {
  myglobal++;
#ifdef DEBUG
  printf("In x243()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x244() {
  myglobal++;
#ifdef DEBUG
  printf("In x244()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x245() {
  myglobal++;
#ifdef DEBUG
  printf("In x245()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x246() {
  myglobal++;
#ifdef DEBUG
  printf("In x246()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x247() {
  myglobal++;
#ifdef DEBUG
  printf("In x247()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x248() {
  myglobal++;
#ifdef DEBUG
  printf("In x248()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x249() {
  myglobal++;
#ifdef DEBUG
  printf("In x249()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x250() {
  myglobal++;
#ifdef DEBUG
  printf("In x250()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x251() {
  myglobal++;
#ifdef DEBUG
  printf("In x251()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x252() {
  myglobal++;
#ifdef DEBUG
  printf("In x252()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x253() {
  myglobal++;
#ifdef DEBUG
  printf("In x253()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x254() {
  myglobal++;
#ifdef DEBUG
  printf("In x254()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) x255() {
  myglobal++;
#ifdef DEBUG
  printf("In x255()\n");
#endif
  advanced_to_next_node();
}

