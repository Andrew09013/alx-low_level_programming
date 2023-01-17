#!/bin/bash
wget -P .. https://github.com/Andrew09013/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD="$PWD/../libinjection.so"
