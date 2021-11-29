#!/bin/bash
gcc *.o -shared -o libwin.so LD_PRELOAD=$PWD/libwin.so
./gm 9 8 10 24 75 9
