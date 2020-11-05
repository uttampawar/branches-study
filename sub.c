#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "test.h"
extern struct opline * current;
extern struct opline * root;
extern struct opline * tail;

void  __attribute__((noinline)) advanced_to_next_node() {
	if (current != NULL) {
		current = current->next;
	} else {
	  current = tail;
	}

	return;
}

//Tail block
static void add_a_tail_block(void * labels[]) {
	tail = (struct opline *)malloc(sizeof(struct opline));
	tail->name = "done";
	tail->lineno = 11;
	tail->handler = (void *)labels[11];
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
		node->name = "zero";
	} else if (position == 1) {
		node->name = "one";
	} else if (position == 2) {
		node->name = "two";
	} else if (position == 3) {
		node->name = "three";
	} else if (position == 4) {
		node->name = "four";
	} else if (position == 5) {
		node->name = "five";
	} else if (position == 6) {
		node->name = "six";
	} else if (position == 7) {
		node->name = "seven";
	} else if (position == 8) {
		node->name = "eight";
	} else if (position == 9) {
		node->name = "nine";
	} else if (position == 10) {
		node->name = "ten";
	} else if (position == 11) {
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
		printf("Use random number generator between 0 and 10\n");
		for(idx=0; idx < nodes; idx++) {
			/* get random number between 0 and 10 */
			position = rand() % 11;
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

void  __attribute__((noinline)) ten() {
  myglobal++;
#ifdef DEBUG
  printf("In ten()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) nine() {
  myglobal++;
#ifdef DEBUG
  printf("In nine()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) eight() {
  myglobal++;
#ifdef DEBUG
  printf("In eight()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) seven() {
  myglobal++;
#ifdef DEBUG
  printf("In seven()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) six() {
  myglobal++;
#ifdef DEBUG
  printf("In six()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) five() {
  myglobal++;
#ifdef DEBUG
  printf("In five()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) four() {
  myglobal++;
#ifdef DEBUG
  printf("In four()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) three() {
  myglobal++;
#ifdef DEBUG
  printf("In three()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) two() {
  myglobal++;
#ifdef DEBUG
  printf("In two()\n");
#endif
  advanced_to_next_node();
}
void  __attribute__((noinline)) one() {
  myglobal++;
#ifdef DEBUG
  printf("In one()\n");
#endif
  advanced_to_next_node();
}

void  __attribute__((noinline)) zero() {
  myglobal++;
#ifdef DEBUG
  printf("In zero()\n");
#endif
  advanced_to_next_node();
}


#if 0
void build_the_flow(void * labels[], int nodes) {
	long idx=0;
	struct opline * node = NULL;

	for(idx=0; idx < nodes; idx++) {
		// get random number between 0 and 10
		int position = rand() % 11;

		node = (struct opline *)malloc(sizeof(struct opline));
		node->next = NULL;

		node->lineno = position;
		if (position == 0) {
			node->name = "zero";
			node->handler = (void *)&&zero_label;
		} else if (position == 1) {
			node->name = "one";
			node->handler = (void *)&&one_label;
		} else if (position == 2) {
			node->name = "two";
			node->handler = (void *)&&two_label;
		} else if (position == 3) {
			node->name = "three";
			node->handler = (void *)&&three_label;
		} else if (position == 4) {
			node->name = "four";
			node->handler = (void *)&&four_label;
		} else if (position == 5) {
			node->name = "five";
			node->handler = (void *)&&five_label;
		} else if (position == 6) {
			node->name = "six";
			node->handler = (void *)&&six_label;
		} else if (position == 7) {
			node->name = "seven";
			node->handler = (void *)&&seven_label;
		} else if (position == 8) {
			node->name = "eight";
			node->handler = (void *)&&eight_label;
		} else if (position == 9) {
			node->name = "nine";
			node->handler = (void *)&&nine_label;
		} else if (position == 10) {
			node->name = "ten";
			node->handler = (void *)&&ten_label;
		} else if (position == 11) {
			node->name = "done";
			node->handler = (void *)&&done;
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
}
#endif

