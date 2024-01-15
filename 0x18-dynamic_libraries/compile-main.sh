#!/bin/bash

gcc -Wall -Werror -fpic -c 0-main.c
gcc -shared -o libdynamic.so 0-main.o