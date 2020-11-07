#include <stdio.h>
#include <stdlib.h>
#include "test.h"

struct opline * root = NULL;
struct opline * tail = NULL;
struct opline * current = NULL;

extern void advance_to_next_node();
extern void build_the_flow(void * const labels[], int nodes, int dynamic);

void print_the_flow() {
#ifdef DEBUG
	struct opline * tree = root;
	while(tree != NULL) {
		printf("next opcode/function:Num:%d\n", tree->lineno);
		tree = tree->next;
	}
#endif
}

int main(int argc, char **argv) {

	float t = 3.14;
	int nodes = atoi(argv[1]);
	long iter = 1000000;
	long idx=0;

	int dynamic = 0;
	if (argc == 3) {
		dynamic = atoi(argv[2]);
	}

	static void * labels[] = {
		(void*)&&zero_label,
	};

	build_the_flow(labels, nodes, dynamic);

	print_the_flow();
	//exit(0);
	
	int endOfOpcodes=0;
	for(idx=0; idx < iter; idx++) {
		current = root;
		endOfOpcodes=0;
		while(1) {
			if (current) {
	  			int position = current->lineno;
				switch(position) {
				case 0: 
					x0(); 
					break;
				case 1:
					x1();
					break;
				case 2:
					x2();
					break;
				case 3:
					x3();
					break;
				case 4:
					x4();
					break;
				case 5:
					x5();
					break;
   				case 6:
					x6();
					break;
   				case 7:
					x7();
					break;
   				case 8:
					x8();
					break;
   				case 9:
					x9();
					break;
   				case 10:
					x1();
					break;
   				case 11:
					x11();
				  	break;
   				case 12:
					  x12();
					  break;
   				case 13:
					  x13();
					  break;
   				case 14:
					  x14();
					  break;
   				case 15:
					  x15();
					  break;
   				case 16:
					  x16();
					  break;
   				case 17:
					  x17();
					  break;
   				case 18:
					  x18();
					  break;
   				case 19:
					  x19();
					  break;
   				case 20:
					  x20();
					  break;
   				case 21:
					  x21();
					  break;
   				case 22:
					  x22();
					  break;
   				case 23:
					  x23();
					  break;
   				case 24:
					  x24();
					  break;
   				case 25:
					  x25();
					  break;
   				case 26:
					  x26();
					  break;
   				case 27:
					  x27();
					  break;
   				case 28:
					  x28();
					  break;
   				case 29:
					  x29();
					  break;
   				case 30:
					  x30();
					  break;
   				case 31:
					  x31();
					  break;
   				case 32:
					  x32();
					  break;
   				case 33:
					  x33();
					  break;
   				case 34:
					  x34();
					  break;
   				case 35:
					  x35();
					  break;
   				case 36:
					  x36();
					  break;
   				case 37:
					  x37();
					  break;
   				case 38:
					  x38();
					  break;
   				case 39:
					  x39();
					  break;
   				case 40:
					  x40();
					  break;
   				case 41:
					  x41();
					  break;
   				case 42:
					  x42();
					  break;
   				case 43:
					  x43();
					  break;
   				case 44:
					  x44();
					  break;
   				case 45:
					  x45();
					  break;
   				case 46:
					  x46();
					  break;
   				case 47:
					  x47();
					  break;
   				case 48:
					  x48();
					  break;
   				case 49:
					  x49();
					  break;
   				case 50:
					  x50();
					  break;
   				case 51:
					  x51();
					  break;
   				case 52:
					  x52();
					  break;
   				case 53:
					  x53();
					  break;
   				case 54:
					  x54();
					  break;
   				case 55:
					  x55();
					  break;
   				case 56:
					  x56();
					  break;
   				case 57:
					  x57();
					  break;
   				case 58:
					  x58();
					  break;
   				case 59:
					  x59();
					  break;
   				case 60:
					  x60();
					  break;
   				case 61:
					  x61();
					  break;
   				case 62:
					  x62();
					  break;
   				case 63:
					  x63();
					  break;
   				case 64:
					  x64();
					  break;
   				case 65:
					  x65();
					  break;
   				case 66:
					  x66();
					  break;
   				case 67:
					  x67();
					  break;
   				case 68:
					  x68();
					  break;
   				case 69:
					  x69();
					  break;
   				case 70:
					  x70();
					  break;
   				case 71:
					  x71();
					  break;
   				case 72:
					  x72();
					  break;
   				case 73:
					  x73();
					  break;
   				case 74:
					  x74();
					  break;
   				case 75:
					  x75();
					  break;
   				case 76:
					  x76();
					  break;
   				case 77:
					  x77();
					  break;
   				case 78:
					  x78();
					  break;
   				case 79:
					  x79();
					  break;
   				case 80:
					  x80();
					  break;
   				case 81:
					  x81();
					  break;
   				case 82:
					  x82();
					  break;
   				case 83:
					  x83();
					  break;
   				case 84:
					  x84();
					  break;
   				case 85:
					  x85();
					  break;
   				case 86:
					  x86();
					  break;
   				case 87:
					  x87();
					  break;
   				case 88:
					  x88();
					  break;
   				case 89:
					  x89();
					  break;
   				case 90:
					  x90();
					  break;
   				case 91:
					  x91();
					  break;
   				case 92:
					  x92();
					  break;
   				case 93:
					  x93();
					  break;
   				case 94:
					  x94();
					  break;
   				case 95:
					  x95();
					  break;
   				case 96:
					  x96();
					  break;
   				case 97:
					  x97();
					  break;
   				case 98:
					  x98();
					  break;
   				case 99:
					  x99();
					  break;
   				case 100:
					  x100();
					  break;
   				case 101:
					  x101();
					  break;
   				case 102:
					  x102();
					  break;
   				case 103:
					  x103();
					  break;
   				case 104:
					  x104();
					  break;
   				case 105:
					  x105();
					  break;
   				case 106:
					  x106();
					  break;
   				case 107:
					  x107();
					  break;
   				case 108:
					  x108();
					  break;
   				case 109:
					  x109();
					  break;
   				case 110:
					  x110();
					  break;
   				case 111:
					  x111();
					  break;
   				case 112:
					  x112();
					  break;
   				case 113:
					  x113();
					  break;
   				case 114:
					  x114();
					  break;
   				case 115:
					  x115();
					  break;
   				case 116:
					  x116();
					  break;
   				case 117:
					  x117();
					  break;
   				case 118:
					  x118();
					  break;
   				case 119:
					  x119();
					  break;
   				case 120:
					  x120();
					  break;
   				case 121:
					  x121();
					  break;
   				case 122:
					  x122();
					  break;
   				case 123:
					  x123();
					  break;
   				case 124:
					  x124();
					  break;
   				case 125:
					  x125();
					  break;
   				case 126:
					  x126();
					  break;
   				case 127:
					  x127();
					  break;
   				case 128:
					  x128();
					  break;
   				case 129:
					  x129();
					  break;
   				case 130:
					  x130();
					  break;
   				case 131:
					  x131();
					  break;
   				case 132:
					  x132();
					  break;
   				case 133:
					  x133();
					  break;
   				case 134:
					  x134();
					  break;
   				case 135:
					  x135();
					  break;
   				case 136:
					  x136();
					  break;
   				case 137:
					  x137();
					  break;
   				case 138:
					  x138();
					  break;
   				case 139:
					  x139();
					  break;
   				case 140:
					  x140();
					  break;
   				case 141:
					  x141();
					  break;
   				case 142:
					  x142();
					  break;
   				case 143:
					  x143();
					  break;
   				case 144:
					  x144();
					  break;
   				case 145:
					  x145();
					  break;
   				case 146:
					  x146();
					  break;
   				case 147:
					  x147();
					  break;
   				case 148:
					  x148();
					  break;
   				case 149:
					  x149();
					  break;
   				case 150:
					  x150();
					  break;
   				case 151:
					  x151();
					  break;
   				case 152:
					  x152();
					  break;
   				case 153:
					  x153();
					  break;
   				case 154:
					  x154();
					  break;
   				case 155:
					  x155();
					  break;
   				case 156:
					  x156();
					  break;
   				case 157:
					  x157();
					  break;
   				case 158:
					  x158();
					  break;
   				case 159:
					  x159();
					  break;
   				case 160:
					  x160();
					  break;
   				case 161:
					  x161();
					  break;
   				case 162:
					  x162();
					  break;
   				case 163:
					  x163();
					  break;
   				case 164:
					  x164();
					  break;
   				case 165:
					  x165();
					  break;
   				case 166:
					  x166();
					  break;
   				case 167:
					  x167();
					  break;
   				case 168:
					  x168();
					  break;
   				case 169:
					  x169();
					  break;
   				case 170:
					  x170();
					  break;
   				case 171:
					  x171();
					  break;
   				case 172:
					  x172();
					  break;
   				case 173:
					  x173();
					  break;
   				case 174:
					  x174();
					  break;
   				case 175:
					  x175();
					  break;
   				case 176:
					  x176();
					  break;
   				case 177:
					  x177();
					  break;
   				case 178:
					  x178();
					  break;
   				case 179:
					  x179();
					  break;
   				case 180:
					  x180();
					  break;
   				case 181:
					  x181();
					  break;
   				case 182:
					  x182();
					  break;
   				case 183:
					  x183();
					  break;
   				case 184:
					  x184();
					  break;
   				case 185:
					  x185();
					  break;
   				case 186:
					  x186();
					  break;
   				case 187:
					  x187();
					  break;
   				case 188:
					  x188();
					  break;
   				case 189:
					  x189();
					  break;
   				case 190:
					  x190();
					  break;
   				case 191:
					  x191();
					  break;
   				case 192:
					  x192();
					  break;
   				case 193:
					  x193();
					  break;
   				case 194:
					  x194();
					  break;
   				case 195:
					  x195();
					  break;
   				case 196:
					  x196();
					  break;
   				case 197:
					  x197();
					  break;
   				case 198:
					  x198();
					  break;
   				case 199:
					  x199();
					  break;
   				case 200:
					  x200();
					  break;
   				case 201:
					  x201();
					  break;
   				case 202:
					  x202();
					  break;
   				case 203:
					  x203();
					  break;
   				case 204:
					  x204();
					  break;
   				case 205:
					  x205();
					  break;
   				case 206:
					  x206();
					  break;
   				case 207:
					  x207();
					  break;
   				case 208:
					  x208();
					  break;
   				case 209:
					  x209();
					  break;
   				case 210:
					  x210();
					  break;
   				case 211:
					  x211();
					  break;
   				case 212:
					  x212();
					  break;
   				case 213:
					  x213();
					  break;
   				case 214:
					  x214();
					  break;
   				case 215:
					  x215();
					  break;
   				case 216:
					  x216();
					  break;
   				case 217:
					  x217();
					  break;
   				case 218:
					  x218();
					  break;
   				case 219:
					  x219();
					  break;
   				case 220:
					  x220();
					  break;
   				case 221:
					  x221();
					  break;
   				case 222:
					  x222();
					  break;
   				case 223:
					  x223();
					  break;
   				case 224:
					  x224();
					  break;
   				case 225:
					  x225();
					  break;
   				case 226:
					  x226();
					  break;
   				case 227:
					  x227();
					  break;
   				case 228:
					  x228();
					  break;
   				case 229:
					  x229();
					  break;
   				case 230:
					  x230();
					  break;
   				case 231:
					  x231();
					  break;
   				case 232:
					  x232();
					  break;
   				case 233:
					  x233();
					  break;
   				case 234:
					  x234();
					  break;
   				case 235:
					  x235();
					  break;
   				case 236:
					  x236();
					  break;
   				case 237:
					  x237();
					  break;
   				case 238:
					  x238();
					  break;
   				case 239:
					  x239();
					  break;
   				case 240:
					  x240();
					  break;
   				case 241:
					  x241();
					  break;
   				case 242:
					  x242();
					  break;
   				case 243:
					  x243();
					  break;
   				case 244:
					  x244();
					  break;
   				case 245:
					  x245();
					  break;
   				case 246:
					  x246();
					  break;
   				case 247:
					  x247();
					  break;
   				case 248:
					  x248();
					  break;
   				case 249:
					  x249();
					  break;
   				case 250:
					  x250();
					  break;
   				case 251:
					  x251();
					  break;
   				case 252:
					  x252();
					  break;
   				case 253:
					  x253();
					  break;
   				case 254:
					  x254();
					  break;
   				case 255:
					  x255();
					  break;
   				default:
					endOfOpcodes=1;
					t= t + 3.14 * 3.14;
					break;
				}
			} else {
				break;
			}
		   	if (endOfOpcodes == 1) {
		   		break;
		   	}
		}
	}


	printf("Finished\n");
	exit(0);
	zero_label: { };
}

