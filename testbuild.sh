#!/bin/bash

#create 3rd party binary library
gcc -c library.c
objcopy --redefine-sym library_function=original_library_function library.o hacked_library.o


#create executable with patched 3rd party lib and shim layer
gcc main.c  shim.c hacked_library.o -o test.elf
