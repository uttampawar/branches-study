struct opline {
	int lineno;
	char *name;
	void * handler;
	struct opline * next;
};

struct opline * build_tree();
long myglobal;
void zero();
void one();
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();
void nine();
void ten();

