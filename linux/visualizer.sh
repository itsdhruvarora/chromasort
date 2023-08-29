#!/bin/bash

# Compile the project
gcc -o visualizer /home/dhruv/Desktop/sort-vis/main.c -L/home/dhruv/Desktop/sort-vis/linux/ -lvis -lSDL2

# Run the compiled program
./visualizer