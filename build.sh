flags="-fcf-protection=none -g -O2"
flags="-DDEBUG -g -O2"
flags="-g -O2"
flags="-O3"

echo "Build flag set to ${flags}"
echo "Compiling goto.c"
gcc ${flags} -c goto.c
echo "Compiling test-goto.c"
gcc ${flags} -c test-goto.c
echo "Compiling switch.c"
gcc ${flags} -c switch.c
echo "Compiling test-goto.c"
gcc ${flags} -c test-switch.c
echo "Linking goto_test from goto.o test-goto.o"
gcc ${flags} goto.o test-goto.o -o goto_test
echo "Linking switch_test from switch.o test-switch.o"
gcc ${flags} switch.o test-switch.o -o switch_test
