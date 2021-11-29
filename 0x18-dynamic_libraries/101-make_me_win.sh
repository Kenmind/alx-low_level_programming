#!/bin/bash
gcc *.o -shared -o libwin.so
LD_PRELOAD=$PWD/libwin.so
