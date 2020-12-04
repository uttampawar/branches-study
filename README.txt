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
Build and Usage:
$ ./build.sh

# Run with supplied input file to use 1500 nodes/opcodes
$ ./a.out 1500 0

# Use internal dynamic number generator to create a list of 1500 nodes/opcodes
$ ./a.out 1500 1

################################################################################
# Examples ...
# Various perf stat/LBR data collection
################################################################################

$ perf stat ./a.out 1500 0
Create a flow with 1500 nodes
Building the flow from  input file
Finished

 Performance counter stats for './a.out 1500 0':

         16,148.30 msec task-clock                #    1.000 CPUs utilized          
                19      context-switches          #    0.001 K/sec                  
                 0      cpu-migrations            #    0.000 K/sec                  
                76      page-faults               #    0.005 K/sec                  
    59,389,245,553      cycles                    #    3.678 GHz                    
    25,663,255,837      instructions              #    0.43  insn per cycle         
     7,507,172,168      branches                  #  464.889 M/sec                  
     1,223,998,880      branch-misses             #   16.30% of all branches        

      16.149014503 seconds time elapsed

      16.144911000 seconds user
       0.004000000 seconds sys

################################################################################
# toplev.py: 
#  $ git clone https://github.com/andikleen/pmu-tools.git
################################################################################
$ pmu-tools/toplev.py --core S0-C0 -l2 -v --no-desc taskset -c 0 ./a.out 1500 0
Will measure complete system.
Using level 2.
Create a flow with 1500 nodes
Building the flow from  input file
Finished
# 4.11-full-perf on Intel(R) Xeon(R) Gold 6252 CPU @ 2.10GHz [clx/skylake]
S0-C0    FE             Frontend_Bound                      % Slots                   40.8  
S0-C0    BAD            Bad_Speculation                     % Slots                   40.0  
S0-C0    BE             Backend_Bound                       % Slots                    7.2 <
S0-C0    RET            Retiring                            % Slots                   12.1 <
S0-C0    FE             Frontend_Bound.Fetch_Latency        % Slots                   12.3 <
S0-C0    FE             Frontend_Bound.Fetch_Bandwidth      % Slots                   28.4   <==
S0-C0    BAD            Bad_Speculation.Branch_Mispredicts  % Slots                   39.9  
S0-C0    BAD            Bad_Speculation.Machine_Clears      % Slots                    0.0 <
S0-C0    BE/Mem         Backend_Bound.Memory_Bound          % Slots                    2.2 <
S0-C0    BE/Core        Backend_Bound.Core_Bound            % Slots                    5.0 <
S0-C0    RET            Retiring.Light_Operations           % Slots                   10.2 <
S0-C0    RET            Retiring.Heavy_Operations           % Slots                    1.9 <
S0-C0-T0 MUX                                                %                         14.3  
S0-C0-T1 MUX                                                %                         14.3  
Run toplev --describe Fetch_Bandwidth^ to get more information on bottleneck
Add --nodes '!+Fetch_Bandwidth*/3,+MUX' for breakdown on the bottleneck.

################################################################################
# LBR data collection of any type of branches direct or indirect
################################################################################
$ perf record -g -BN --no-buffering -j any,u -e cycles,instructions ./a.out 1500 0
$ perf script -F brstack &> dump.txt

