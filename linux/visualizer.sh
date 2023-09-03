#!/bin/bash

# Change to the directory containing your C source code
cd /home/dhruv/Desktop/sort-vis/

# Compile the project
gcc -o visualizer main.c -L./linux/ -lvis -lSDL2 -lSDL2_ttf

# Run the compiled program
./visualizer
