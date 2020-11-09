flags="-fcf-protection=none -g -O2"
flags="-DDEBUG -g -O2"
flags="-g -O2"
gcc ${flags} -c goto.c
gcc ${flags} -c test-goto.c
gcc ${flags} -c switch.c
gcc ${flags} -c test-switch.c
gcc ${flags} goto.o test-goto.o -o goto_test
gcc ${flags} switch.o test-switch.o -o switch_test
