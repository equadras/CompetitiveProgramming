# CompetitiveProgramming
Place to commit my journey in competitive programming 

# Setup
- copy this vimrc configuration to your vim configurations file. You need to have the VimPlug manager installed to use it.
- to utilize the debug feature, move the debug.h file to /usr/local/include.
- to run the code, I use a vim macro on F9 to compile with the flags below and
  run.

# Compile Flags
The run macro sets the following compile flags:

- `-std=c++20`: Compile with C++20 standard.
- `-O2`: Optimize code for performance.
- `-fsanitize=address,undefined`: Enable AddressSanitizer and UndefinedBehaviorSanitizer for runtime error detection.
- `-Wall -Wextra -Wconversion -Wfatal-errors`: Enable various warnings and treat warnings as errors to catch potential issues during compilation
