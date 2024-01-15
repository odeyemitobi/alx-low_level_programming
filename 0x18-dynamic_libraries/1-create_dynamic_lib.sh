#!/bin/bash

# Exclude files containing a main function from compilation
exclude_files=$(ls *.c | grep -v 'main.c')

# Check if there are files to compile
if [ -n "$exclude_files" ]; then
    # Compile all remaining .c files into object files
    gcc -Wall -fPIC -c $exclude_files

    # Create the dynamic library liball.so from the object files
    gcc -shared -o liball.so *.o

    # Display the symbols in the dynamic library
    nm -D --defined-only liball.so

else
    echo "No source files to compile."
fi
