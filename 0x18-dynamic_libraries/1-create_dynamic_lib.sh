#!/bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pedantic *.c
gcc -shared *.o -o liball.so

