#!/bin/bash

# Compile Source Code
g++ -std=gnu++17 -O2 -Wall -Wextra -DONLINE_JUDGE -I/opt/boost/gcc/include -L/opt/boost/gcc/lib -I/lib/ac-library -g ${PWD}/main.cpp -o a.out

# Oj test command
oj t -d ./tests/ -c ./a.out -N

rm -f a.out