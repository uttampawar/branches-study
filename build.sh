#flags="-DDEBUG -g -O2"
#flags="-fcf-protection=none -g -O2"
flags="-g -O2"
gcc ${flags} -c sub.c
gcc ${flags} -c test.c
gcc ${flags} -c sub-switch.c
gcc ${flags} -c test-switch.c
gcc ${flags} sub.o test.o -o goto_test
gcc ${flags} sub-switch.o test-switch.o -o switch_test
