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
		(void*)&&one_label,
		(void*)&&two_label,
		(void*)&&three_label,
		(void*)&&four_label,
		(void*)&&five_label,
		(void*)&&six_label,
		(void*)&&seven_label,
		(void*)&&eight_label,
		(void*)&&nine_label,
		(void*)&&ten_label,
		(void*)&&done
	};

	//build_the_flow(labels, nodes, 1);
	build_the_flow(labels, nodes, dynamic);

	print_the_flow();
	//exit(0);
	
	for(idx=0; idx < iter; idx++) {
	  current = root;
	  goto *(void**)current->handler;
		while(1) {
			zero_label: 
				zero(); 
				goto *(void **)current->handler;
			one_label:
				one();
				goto *(void **)current->handler;
			two_label:
				two();
				goto *(void **)current->handler;
			three_label:
				three();
				goto *(void **)current->handler;
			four_label:
				four();
				goto *(void **)current->handler;
			five_label:
				five();
				goto *(void **)current->handler;
   			six_label:
				six();
				goto *(void **)current->handler;
   			seven_label:
				seven();
				goto *(void **)current->handler;
   			eight_label:
				eight();
				goto *(void **)current->handler;
   			nine_label:
				nine();
				goto *(void **)current->handler;
   			ten_label:
				ten();
				goto *(void **)current->handler;
   			done:
				//printf(" Hit done\n");
				t= t + 3.14 * 3.14;
				break;
		}
	}

	printf("Finished\n");
}

