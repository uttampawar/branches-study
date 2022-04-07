This directory contains small test program to mimic Zend-PHP's virtual machine.
In PHP's VM program moves from an opcode to opcode with more complex
interaction. This program is much simpler. It tries to depicts the flow showing 
very high branch mispredicts (similar to ZendVM) with given test input from a 
file. It can also generate different flow of opcodes with internal random number
generator.

################################################################################
Files:
################################################################################
test-goto.c - Main program (goto implementation)
test-switch.c - Main program (switch implementation)
goto.c - "goto" implementation support functions
switch.c  - "switch" implementation support functions
test.h - support header file
test.input - input. Contain 3000 numbers (nodes)
build.sh - build script

################################################################################
Build
$ ./build.sh

Usage:
$ ./goto_test
Usage:
./goto_test -n <nodes> -r
-n nodes: Number of function nodes to create/use
-r      : Create nodes dynamically using random generator.
          Default is to use input from a test.input file

# Run with supplied input file to use 1500 nodes/opcodes
$ ./goto_test -n 10000

# Use internal dynamic number generator to create a list of 1500 nodes/opcodes
$ ./goto_test -n 10000 -r

################################################################################
# Examples ...
# Various perf stat/LBR data collection
################################################################################

$ perf stat ./goto_test -n 10000
Create a flow with 10000 nodes
Building the flow from  input file
Executing the opcode/functions
Finished

 Performance counter stats for './goto_test -n 10000':

     126538.389753      task-clock (msec)         #    1.000 CPUs utilized
                38      context-switches          #    0.000 K/sec
                 0      cpu-migrations            #    0.000 K/sec
               173      page-faults               #    0.001 K/sec
   453,283,052,490      cycles                    #    3.582 GHz
   130,439,507,753      instructions              #    0.29  insn per cycle
    50,085,517,038      branches                  #  395.813 M/sec
     9,956,920,526      branch-misses             #   19.88% of all branches

     126.543265450 seconds time elapsed

################################################################################
# toplev.py: 
#  $ git clone https://github.com/andikleen/pmu-tools.git
################################################################################
$ pmu-tools/toplev.py --core S0-C0 -l2 -v --no-desc taskset -c 0 ./goto_test -n
10000
S0-C0    FE             Frontend_Bound                      % Slots                      47.2    [11.1%]
S0-C0    BAD            Bad_Speculation                     % Slots                      37.1    [11.1%]
S0-C0    BE             Backend_Bound                       % Slots                       7.4  < [11.1%]
S0-C0    RET            Retiring                            % Slots                       8.3  < [11.1%]
S0-C0    FE             Frontend_Bound.Fetch_Latency        % Slots                      23.9    [11.1%]<==
warning: Unknown sample event FRONTEND_RETIRED.LATENCY_GE_1:pp
S0-C0    FE             Frontend_Bound.Fetch_Bandwidth      % Slots                      23.2  < [11.1%]
S0-C0    BAD            Bad_Speculation.Branch_Mispredicts  % Slots                      37.1    [11.1%]
S0-C0    BAD            Bad_Speculation.Machine_Clears      % Slots                       0.0  < [11.1%]
S0-C0    BE/Mem         Backend_Bound.Memory_Bound          % Slots                       1.3  < [11.1%]
S0-C0    BE/Core        Backend_Bound.Core_Bound            % Slots                       6.0  < [11.1%]
S0-C0    RET            Retiring.Light_Operations           % Slots                       7.2  < [11.1%]
S0-C0    RET            Retiring.Heavy_Operations           % Slots                       1.1  < [11.1%]
S0-C0-T0 MUX                                                %                            11.11  
S0-C0-T1 MUX                                                %                            11.11

################################################################################
# LBR data collection of any type of branches direct or indirect
################################################################################
$ perf record -g -BN --no-buffering -j any,u -e cycles,instructions
./goto_test -n 10000
$ perf script -F brstack &> dump.txt

