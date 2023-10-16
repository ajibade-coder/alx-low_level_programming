#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBARY_PATH=.:SLD_LIBRARY_PATH
