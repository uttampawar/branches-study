flags="-DDEBUG -g -O2"
flags="-g -O2"
gcc ${flags} -c sub.c
gcc ${flags} -c test.c
gcc ${flags} sub.o test.o
