#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -fPIC -c *.c

# Create the dynamic library liball.so from the object files
gcc -shared -o liball.so *.o

# Clean up: remove the object files
# rm *.o
