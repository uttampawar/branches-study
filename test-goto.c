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
		printf("next:Num:%d, name:%s, address:%p\n", tree->lineno, tree->name, (void *)tree->handler);
		tree = tree->next;
	}
#endif
}

void usage(char *pname) {
  printf("Usage:\n");
  printf("%s -n <nodes> -r\n", pname);
  printf("-n nodes: Number of function nodes to create/use\n");
  printf("-r      : Create nodes dynamically using random generator.\n");
  printf("          Default is to use input from a test.input file\n");
  exit(0);
}

int main(int argc, char **argv) {

  float t = 3.14;
  int nodes = 0;
  long iter = 100000;
  long idx=0;
  int dynamic = 0;

  size_t optind=0;
  if (argc == 1) {
    usage(argv[0]);
  }
  for (optind = 1; optind < argc && argv[optind][0] == '-'; optind++) {
    switch(argv[optind][1]) {
      case 'n': 
        optind++;
        nodes = atoi(argv[optind]);
        break;
      case 'r': 
		    dynamic = 1;
        printf("Use input created dynamically\n");
        break;
      default:
        printf("Invalid option. Exiting\n");
        usage(argv[0]);
    }
  }

	static void * labels[] = {
		(void*)&&x0_label,
		(void*)&&x1_label,
		(void*)&&x2_label,
		(void*)&&x3_label,
		(void*)&&x4_label,
		(void*)&&x5_label,
		(void*)&&x6_label,
		(void*)&&x7_label,
		(void*)&&x8_label,
		(void*)&&x9_label,
		(void*)&&x10_label,
		(void*)&&x11_label,
		(void*)&&x12_label,
		(void*)&&x13_label,
		(void*)&&x14_label,
		(void*)&&x15_label,
		(void*)&&x16_label,
		(void*)&&x17_label,
		(void*)&&x18_label,
		(void*)&&x19_label,
		(void*)&&x20_label,
		(void*)&&x21_label,
		(void*)&&x22_label,
		(void*)&&x23_label,
		(void*)&&x24_label,
		(void*)&&x25_label,
		(void*)&&x26_label,
		(void*)&&x27_label,
		(void*)&&x28_label,
		(void*)&&x29_label,
		(void*)&&x30_label,
		(void*)&&x31_label,
		(void*)&&x32_label,
		(void*)&&x33_label,
		(void*)&&x34_label,
		(void*)&&x35_label,
		(void*)&&x36_label,
		(void*)&&x37_label,
		(void*)&&x38_label,
		(void*)&&x39_label,
		(void*)&&x40_label,
		(void*)&&x41_label,
		(void*)&&x42_label,
		(void*)&&x43_label,
		(void*)&&x44_label,
		(void*)&&x45_label,
		(void*)&&x46_label,
		(void*)&&x47_label,
		(void*)&&x48_label,
		(void*)&&x49_label,
		(void*)&&x50_label,
		(void*)&&x51_label,
		(void*)&&x52_label,
		(void*)&&x53_label,
		(void*)&&x54_label,
		(void*)&&x55_label,
		(void*)&&x56_label,
		(void*)&&x57_label,
		(void*)&&x58_label,
		(void*)&&x59_label,
		(void*)&&x60_label,
		(void*)&&x61_label,
		(void*)&&x62_label,
		(void*)&&x63_label,
		(void*)&&x64_label,
		(void*)&&x65_label,
		(void*)&&x66_label,
		(void*)&&x67_label,
		(void*)&&x68_label,
		(void*)&&x69_label,
		(void*)&&x70_label,
		(void*)&&x71_label,
		(void*)&&x72_label,
		(void*)&&x73_label,
		(void*)&&x74_label,
		(void*)&&x75_label,
		(void*)&&x76_label,
		(void*)&&x77_label,
		(void*)&&x78_label,
		(void*)&&x79_label,
		(void*)&&x80_label,
		(void*)&&x81_label,
		(void*)&&x82_label,
		(void*)&&x83_label,
		(void*)&&x84_label,
		(void*)&&x85_label,
		(void*)&&x86_label,
		(void*)&&x87_label,
		(void*)&&x88_label,
		(void*)&&x89_label,
		(void*)&&x90_label,
		(void*)&&x91_label,
		(void*)&&x92_label,
		(void*)&&x93_label,
		(void*)&&x94_label,
		(void*)&&x95_label,
		(void*)&&x96_label,
		(void*)&&x97_label,
		(void*)&&x98_label,
		(void*)&&x99_label,
		(void*)&&x100_label,
		(void*)&&x101_label,
		(void*)&&x102_label,
		(void*)&&x103_label,
		(void*)&&x104_label,
		(void*)&&x105_label,
		(void*)&&x106_label,
		(void*)&&x107_label,
		(void*)&&x108_label,
		(void*)&&x109_label,
		(void*)&&x110_label,
		(void*)&&x111_label,
		(void*)&&x112_label,
		(void*)&&x113_label,
		(void*)&&x114_label,
		(void*)&&x115_label,
		(void*)&&x116_label,
		(void*)&&x117_label,
		(void*)&&x118_label,
		(void*)&&x119_label,
		(void*)&&x120_label,
		(void*)&&x121_label,
		(void*)&&x122_label,
		(void*)&&x123_label,
		(void*)&&x124_label,
		(void*)&&x125_label,
		(void*)&&x126_label,
		(void*)&&x127_label,
		(void*)&&x128_label,
		(void*)&&x129_label,
		(void*)&&x130_label,
		(void*)&&x131_label,
		(void*)&&x132_label,
		(void*)&&x133_label,
		(void*)&&x134_label,
		(void*)&&x135_label,
		(void*)&&x136_label,
		(void*)&&x137_label,
		(void*)&&x138_label,
		(void*)&&x139_label,
		(void*)&&x140_label,
		(void*)&&x141_label,
		(void*)&&x142_label,
		(void*)&&x143_label,
		(void*)&&x144_label,
		(void*)&&x145_label,
		(void*)&&x146_label,
		(void*)&&x147_label,
		(void*)&&x148_label,
		(void*)&&x149_label,
		(void*)&&x150_label,
		(void*)&&x151_label,
		(void*)&&x152_label,
		(void*)&&x153_label,
		(void*)&&x154_label,
		(void*)&&x155_label,
		(void*)&&x156_label,
		(void*)&&x157_label,
		(void*)&&x158_label,
		(void*)&&x159_label,
		(void*)&&x160_label,
		(void*)&&x161_label,
		(void*)&&x162_label,
		(void*)&&x163_label,
		(void*)&&x164_label,
		(void*)&&x165_label,
		(void*)&&x166_label,
		(void*)&&x167_label,
		(void*)&&x168_label,
		(void*)&&x169_label,
		(void*)&&x170_label,
		(void*)&&x171_label,
		(void*)&&x172_label,
		(void*)&&x173_label,
		(void*)&&x174_label,
		(void*)&&x175_label,
		(void*)&&x176_label,
		(void*)&&x177_label,
		(void*)&&x178_label,
		(void*)&&x179_label,
		(void*)&&x180_label,
		(void*)&&x181_label,
		(void*)&&x182_label,
		(void*)&&x183_label,
		(void*)&&x184_label,
		(void*)&&x185_label,
		(void*)&&x186_label,
		(void*)&&x187_label,
		(void*)&&x188_label,
		(void*)&&x189_label,
		(void*)&&x190_label,
		(void*)&&x191_label,
		(void*)&&x192_label,
		(void*)&&x193_label,
		(void*)&&x194_label,
		(void*)&&x195_label,
		(void*)&&x196_label,
		(void*)&&x197_label,
		(void*)&&x198_label,
		(void*)&&x199_label,
		(void*)&&x200_label,
		(void*)&&x201_label,
		(void*)&&x202_label,
		(void*)&&x203_label,
		(void*)&&x204_label,
		(void*)&&x205_label,
		(void*)&&x206_label,
		(void*)&&x207_label,
		(void*)&&x208_label,
		(void*)&&x209_label,
		(void*)&&x210_label,
		(void*)&&x211_label,
		(void*)&&x212_label,
		(void*)&&x213_label,
		(void*)&&x214_label,
		(void*)&&x215_label,
		(void*)&&x216_label,
		(void*)&&x217_label,
		(void*)&&x218_label,
		(void*)&&x219_label,
		(void*)&&x220_label,
		(void*)&&x221_label,
		(void*)&&x222_label,
		(void*)&&x223_label,
		(void*)&&x224_label,
		(void*)&&x225_label,
		(void*)&&x226_label,
		(void*)&&x227_label,
		(void*)&&x228_label,
		(void*)&&x229_label,
		(void*)&&x230_label,
		(void*)&&x231_label,
		(void*)&&x232_label,
		(void*)&&x233_label,
		(void*)&&x234_label,
		(void*)&&x235_label,
		(void*)&&x236_label,
		(void*)&&x237_label,
		(void*)&&x238_label,
		(void*)&&x239_label,
		(void*)&&x240_label,
		(void*)&&x241_label,
		(void*)&&x242_label,
		(void*)&&x243_label,
		(void*)&&x244_label,
		(void*)&&x245_label,
		(void*)&&x246_label,
		(void*)&&x247_label,
		(void*)&&x248_label,
		(void*)&&x249_label,
		(void*)&&x250_label,
		(void*)&&x251_label,
		(void*)&&x252_label,
		(void*)&&x253_label,
		(void*)&&x254_label,
		(void*)&&x255_label,
		(void*)&&done
	};

	//build_the_flow(labels, nodes, 1);
	build_the_flow(labels, nodes, dynamic);
	print_the_flow();
	//exit(0);
  
  printf("Executing the opcode/functions\n");
	
	for(idx=0; idx < iter; idx++) {
	  current = root;
	  goto *(void**)current->handler;
		while(1) {
			x0_label: 
				x0(); 
				goto *(void **)current->handler;
			x1_label:
				x1();
				goto *(void **)current->handler;
			x2_label:
				x2();
				goto *(void **)current->handler;
			x3_label:
				x3();
				goto *(void **)current->handler;
			x4_label:
				x4();
				goto *(void **)current->handler;
			x5_label:
				x5();
				goto *(void **)current->handler;
   			x6_label:
				x6();
				goto *(void **)current->handler;
   			x7_label:
				x7();
				goto *(void **)current->handler;
   			x8_label:
				x8();
				goto *(void **)current->handler;
   			x9_label:
				x9();
				goto *(void **)current->handler;
   			x10_label:
				x10();
				goto *(void **)current->handler;
   			x11_label:
				x11();
				goto *(void **)current->handler;
   			x12_label:
				x12();
				goto *(void **)current->handler;
   			x13_label:
				x13();
				goto *(void **)current->handler;
   			x14_label:
				x14();
				goto *(void **)current->handler;
   			x15_label:
				x15();
				goto *(void **)current->handler;
   			x16_label:
				x16();
				goto *(void **)current->handler;
   			x17_label:
				x17();
				goto *(void **)current->handler;
   			x18_label:
				x18();
				goto *(void **)current->handler;
   			x19_label:
				x19();
				goto *(void **)current->handler;
   			x20_label:
				x20();
				goto *(void **)current->handler;
   			x21_label:
				x21();
				goto *(void **)current->handler;
   			x22_label:
				x22();
				goto *(void **)current->handler;
   			x23_label:
				x23();
				goto *(void **)current->handler;
   			x24_label:
				x24();
				goto *(void **)current->handler;
   			x25_label:
				x25();
				goto *(void **)current->handler;
   			x26_label:
				x26();
				goto *(void **)current->handler;
   			x27_label:
				x27();
				goto *(void **)current->handler;
   			x28_label:
				x28();
				goto *(void **)current->handler;
   			x29_label:
				x29();
				goto *(void **)current->handler;
   			x30_label:
				x30();
				goto *(void **)current->handler;
   			x31_label:
				x31();
				goto *(void **)current->handler;
   			x32_label:
				x32();
				goto *(void **)current->handler;
   			x33_label:
				x33();
				goto *(void **)current->handler;
   			x34_label:
				x34();
				goto *(void **)current->handler;
   			x35_label:
				x35();
				goto *(void **)current->handler;
   			x36_label:
				x36();
				goto *(void **)current->handler;
   			x37_label:
				x37();
				goto *(void **)current->handler;
   			x38_label:
				x38();
				goto *(void **)current->handler;
   			x39_label:
				x39();
				goto *(void **)current->handler;
   			x40_label:
				x40();
				goto *(void **)current->handler;
   			x41_label:
				x41();
				goto *(void **)current->handler;
   			x42_label:
				x42();
				goto *(void **)current->handler;
   			x43_label:
				x43();
				goto *(void **)current->handler;
   			x44_label:
				x44();
				goto *(void **)current->handler;
   			x45_label:
				x45();
				goto *(void **)current->handler;
   			x46_label:
				x46();
				goto *(void **)current->handler;
   			x47_label:
				x47();
				goto *(void **)current->handler;
   			x48_label:
				x48();
				goto *(void **)current->handler;
   			x49_label:
				x49();
				goto *(void **)current->handler;
   			x50_label:
				x50();
				goto *(void **)current->handler;
   			x51_label:
				x51();
				goto *(void **)current->handler;
   			x52_label:
				x52();
				goto *(void **)current->handler;
   			x53_label:
				x53();
				goto *(void **)current->handler;
   			x54_label:
				x54();
				goto *(void **)current->handler;
   			x55_label:
				x55();
				goto *(void **)current->handler;
   			x56_label:
				x56();
				goto *(void **)current->handler;
   			x57_label:
				x57();
				goto *(void **)current->handler;
   			x58_label:
				x58();
				goto *(void **)current->handler;
   			x59_label:
				x59();
				goto *(void **)current->handler;
   			x60_label:
				x60();
				goto *(void **)current->handler;
   			x61_label:
				x61();
				goto *(void **)current->handler;
   			x62_label:
				x62();
				goto *(void **)current->handler;
   			x63_label:
				x63();
				goto *(void **)current->handler;
   			x64_label:
				x64();
				goto *(void **)current->handler;
   			x65_label:
				x65();
				goto *(void **)current->handler;
   			x66_label:
				x66();
				goto *(void **)current->handler;
   			x67_label:
				x67();
				goto *(void **)current->handler;
   			x68_label:
				x68();
				goto *(void **)current->handler;
   			x69_label:
				x69();
				goto *(void **)current->handler;
   			x70_label:
				x70();
				goto *(void **)current->handler;
   			x71_label:
				x71();
				goto *(void **)current->handler;
   			x72_label:
				x72();
				goto *(void **)current->handler;
   			x73_label:
				x73();
				goto *(void **)current->handler;
   			x74_label:
				x74();
				goto *(void **)current->handler;
   			x75_label:
				x75();
				goto *(void **)current->handler;
   			x76_label:
				x76();
				goto *(void **)current->handler;
   			x77_label:
				x77();
				goto *(void **)current->handler;
   			x78_label:
				x78();
				goto *(void **)current->handler;
   			x79_label:
				x79();
				goto *(void **)current->handler;
   			x80_label:
				x80();
				goto *(void **)current->handler;
   			x81_label:
				x81();
				goto *(void **)current->handler;
   			x82_label:
				x82();
				goto *(void **)current->handler;
   			x83_label:
				x83();
				goto *(void **)current->handler;
   			x84_label:
				x84();
				goto *(void **)current->handler;
   			x85_label:
				x85();
				goto *(void **)current->handler;
   			x86_label:
				x86();
				goto *(void **)current->handler;
   			x87_label:
				x87();
				goto *(void **)current->handler;
   			x88_label:
				x88();
				goto *(void **)current->handler;
   			x89_label:
				x89();
				goto *(void **)current->handler;
   			x90_label:
				x90();
				goto *(void **)current->handler;
   			x91_label:
				x91();
				goto *(void **)current->handler;
   			x92_label:
				x92();
				goto *(void **)current->handler;
   			x93_label:
				x93();
				goto *(void **)current->handler;
   			x94_label:
				x94();
				goto *(void **)current->handler;
   			x95_label:
				x95();
				goto *(void **)current->handler;
   			x96_label:
				x96();
				goto *(void **)current->handler;
   			x97_label:
				x97();
				goto *(void **)current->handler;
   			x98_label:
				x98();
				goto *(void **)current->handler;
   			x99_label:
				x99();
				goto *(void **)current->handler;
   			x100_label:
				x100();
				goto *(void **)current->handler;
   			x101_label:
				x101();
				goto *(void **)current->handler;
   			x102_label:
				x102();
				goto *(void **)current->handler;
   			x103_label:
				x103();
				goto *(void **)current->handler;
   			x104_label:
				x104();
				goto *(void **)current->handler;
   			x105_label:
				x105();
				goto *(void **)current->handler;
   			x106_label:
				x106();
				goto *(void **)current->handler;
   			x107_label:
				x107();
				goto *(void **)current->handler;
   			x108_label:
				x108();
				goto *(void **)current->handler;
   			x109_label:
				x109();
				goto *(void **)current->handler;
   			x110_label:
				x110();
				goto *(void **)current->handler;
   			x111_label:
				x111();
				goto *(void **)current->handler;
   			x112_label:
				x112();
				goto *(void **)current->handler;
   			x113_label:
				x113();
				goto *(void **)current->handler;
   			x114_label:
				x114();
				goto *(void **)current->handler;
   			x115_label:
				x115();
				goto *(void **)current->handler;
   			x116_label:
				x116();
				goto *(void **)current->handler;
   			x117_label:
				x117();
				goto *(void **)current->handler;
   			x118_label:
				x118();
				goto *(void **)current->handler;
   			x119_label:
				x119();
				goto *(void **)current->handler;
   			x120_label:
				x120();
				goto *(void **)current->handler;
   			x121_label:
				x121();
				goto *(void **)current->handler;
   			x122_label:
				x122();
				goto *(void **)current->handler;
   			x123_label:
				x123();
				goto *(void **)current->handler;
   			x124_label:
				x124();
				goto *(void **)current->handler;
   			x125_label:
				x125();
				goto *(void **)current->handler;
   			x126_label:
				x126();
				goto *(void **)current->handler;
   			x127_label:
				x127();
				goto *(void **)current->handler;
   			x128_label:
				x128();
				goto *(void **)current->handler;
   			x129_label:
				x129();
				goto *(void **)current->handler;
   			x130_label:
				x130();
				goto *(void **)current->handler;
   			x131_label:
				x131();
				goto *(void **)current->handler;
   			x132_label:
				x132();
				goto *(void **)current->handler;
   			x133_label:
				x133();
				goto *(void **)current->handler;
   			x134_label:
				x134();
				goto *(void **)current->handler;
   			x135_label:
				x135();
				goto *(void **)current->handler;
   			x136_label:
				x136();
				goto *(void **)current->handler;
   			x137_label:
				x137();
				goto *(void **)current->handler;
   			x138_label:
				x138();
				goto *(void **)current->handler;
   			x139_label:
				x139();
				goto *(void **)current->handler;
   			x140_label:
				x140();
				goto *(void **)current->handler;
   			x141_label:
				x141();
				goto *(void **)current->handler;
   			x142_label:
				x142();
				goto *(void **)current->handler;
   			x143_label:
				x143();
				goto *(void **)current->handler;
   			x144_label:
				x144();
				goto *(void **)current->handler;
   			x145_label:
				x145();
				goto *(void **)current->handler;
   			x146_label:
				x146();
				goto *(void **)current->handler;
   			x147_label:
				x147();
				goto *(void **)current->handler;
   			x148_label:
				x148();
				goto *(void **)current->handler;
   			x149_label:
				x149();
				goto *(void **)current->handler;
   			x150_label:
				x150();
				goto *(void **)current->handler;
   			x151_label:
				x151();
				goto *(void **)current->handler;
   			x152_label:
				x152();
				goto *(void **)current->handler;
   			x153_label:
				x153();
				goto *(void **)current->handler;
   			x154_label:
				x154();
				goto *(void **)current->handler;
   			x155_label:
				x155();
				goto *(void **)current->handler;
   			x156_label:
				x156();
				goto *(void **)current->handler;
   			x157_label:
				x157();
				goto *(void **)current->handler;
   			x158_label:
				x158();
				goto *(void **)current->handler;
   			x159_label:
				x159();
				goto *(void **)current->handler;
   			x160_label:
				x160();
				goto *(void **)current->handler;
   			x161_label:
				x161();
				goto *(void **)current->handler;
   			x162_label:
				x162();
				goto *(void **)current->handler;
   			x163_label:
				x163();
				goto *(void **)current->handler;
   			x164_label:
				x164();
				goto *(void **)current->handler;
   			x165_label:
				x165();
				goto *(void **)current->handler;
   			x166_label:
				x166();
				goto *(void **)current->handler;
   			x167_label:
				x167();
				goto *(void **)current->handler;
   			x168_label:
				x168();
				goto *(void **)current->handler;
   			x169_label:
				x169();
				goto *(void **)current->handler;
   			x170_label:
				x170();
				goto *(void **)current->handler;
   			x171_label:
				x171();
				goto *(void **)current->handler;
   			x172_label:
				x172();
				goto *(void **)current->handler;
   			x173_label:
				x173();
				goto *(void **)current->handler;
   			x174_label:
				x174();
				goto *(void **)current->handler;
   			x175_label:
				x175();
				goto *(void **)current->handler;
   			x176_label:
				x176();
				goto *(void **)current->handler;
   			x177_label:
				x177();
				goto *(void **)current->handler;
   			x178_label:
				x178();
				goto *(void **)current->handler;
   			x179_label:
				x179();
				goto *(void **)current->handler;
   			x180_label:
				x180();
				goto *(void **)current->handler;
   			x181_label:
				x181();
				goto *(void **)current->handler;
   			x182_label:
				x182();
				goto *(void **)current->handler;
   			x183_label:
				x183();
				goto *(void **)current->handler;
   			x184_label:
				x184();
				goto *(void **)current->handler;
   			x185_label:
				x185();
				goto *(void **)current->handler;
   			x186_label:
				x186();
				goto *(void **)current->handler;
   			x187_label:
				x187();
				goto *(void **)current->handler;
   			x188_label:
				x188();
				goto *(void **)current->handler;
   			x189_label:
				x189();
				goto *(void **)current->handler;
   			x190_label:
				x190();
				goto *(void **)current->handler;
   			x191_label:
				x191();
				goto *(void **)current->handler;
   			x192_label:
				x192();
				goto *(void **)current->handler;
   			x193_label:
				x193();
				goto *(void **)current->handler;
   			x194_label:
				x194();
				goto *(void **)current->handler;
   			x195_label:
				x195();
				goto *(void **)current->handler;
   			x196_label:
				x196();
				goto *(void **)current->handler;
   			x197_label:
				x197();
				goto *(void **)current->handler;
   			x198_label:
				x198();
				goto *(void **)current->handler;
   			x199_label:
				x199();
				goto *(void **)current->handler;
   			x200_label:
				x200();
				goto *(void **)current->handler;
   			x201_label:
				x201();
				goto *(void **)current->handler;
   			x202_label:
				x202();
				goto *(void **)current->handler;
   			x203_label:
				x203();
				goto *(void **)current->handler;
   			x204_label:
				x204();
				goto *(void **)current->handler;
   			x205_label:
				x205();
				goto *(void **)current->handler;
   			x206_label:
				x206();
				goto *(void **)current->handler;
   			x207_label:
				x207();
				goto *(void **)current->handler;
   			x208_label:
				x208();
				goto *(void **)current->handler;
   			x209_label:
				x209();
				goto *(void **)current->handler;
   			x210_label:
				x210();
				goto *(void **)current->handler;
   			x211_label:
				x211();
				goto *(void **)current->handler;
   			x212_label:
				x212();
				goto *(void **)current->handler;
   			x213_label:
				x213();
				goto *(void **)current->handler;
   			x214_label:
				x214();
				goto *(void **)current->handler;
   			x215_label:
				x215();
				goto *(void **)current->handler;
   			x216_label:
				x216();
				goto *(void **)current->handler;
   			x217_label:
				x217();
				goto *(void **)current->handler;
   			x218_label:
				x218();
				goto *(void **)current->handler;
   			x219_label:
				x219();
				goto *(void **)current->handler;
   			x220_label:
				x220();
				goto *(void **)current->handler;
   			x221_label:
				x221();
				goto *(void **)current->handler;
   			x222_label:
				x222();
				goto *(void **)current->handler;
   			x223_label:
				x223();
				goto *(void **)current->handler;
   			x224_label:
				x224();
				goto *(void **)current->handler;
   			x225_label:
				x225();
				goto *(void **)current->handler;
   			x226_label:
				x226();
				goto *(void **)current->handler;
   			x227_label:
				x227();
				goto *(void **)current->handler;
   			x228_label:
				x228();
				goto *(void **)current->handler;
   			x229_label:
				x229();
				goto *(void **)current->handler;
   			x230_label:
				x230();
				goto *(void **)current->handler;
   			x231_label:
				x231();
				goto *(void **)current->handler;
   			x232_label:
				x232();
				goto *(void **)current->handler;
   			x233_label:
				x233();
				goto *(void **)current->handler;
   			x234_label:
				x234();
				goto *(void **)current->handler;
   			x235_label:
				x235();
				goto *(void **)current->handler;
   			x236_label:
				x236();
				goto *(void **)current->handler;
   			x237_label:
				x237();
				goto *(void **)current->handler;
   			x238_label:
				x238();
				goto *(void **)current->handler;
   			x239_label:
				x239();
				goto *(void **)current->handler;
   			x240_label:
				x240();
				goto *(void **)current->handler;
   			x241_label:
				x241();
				goto *(void **)current->handler;
   			x242_label:
				x242();
				goto *(void **)current->handler;
   			x243_label:
				x243();
				goto *(void **)current->handler;
   			x244_label:
				x244();
				goto *(void **)current->handler;
   			x245_label:
				x245();
				goto *(void **)current->handler;
   			x246_label:
				x246();
				goto *(void **)current->handler;
   			x247_label:
				x247();
				goto *(void **)current->handler;
   			x248_label:
				x248();
				goto *(void **)current->handler;
   			x249_label:
				x249();
				goto *(void **)current->handler;
   			x250_label:
				x250();
				goto *(void **)current->handler;
   			x251_label:
				x251();
				goto *(void **)current->handler;
   			x252_label:
				x252();
				goto *(void **)current->handler;
   			x253_label:
				x253();
				goto *(void **)current->handler;
   			x254_label:
				x254();
				goto *(void **)current->handler;
   			x255_label:
				x255();
				goto *(void **)current->handler;
   			done:
				t= t + 3.14 * 3.14;
				break;
		}
	}

	printf("Finished\n");
}

