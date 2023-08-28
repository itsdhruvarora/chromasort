#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include "intro.h"
#include "render.h"
#include "bubblesort.h"
#include "swap.h"
#include "selectionsort.h"
#include "insertionsort.h"
#include "mergesort.h"
#include "quicksort.h"

// Constants
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define ARRAY_SIZE 40
#define BAR_WIDTH (SCREEN_WIDTH / ARRAY_SIZE)

// SDL variables
SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;


void clearConsole() {
    system("clear");
}
int main(int argc, char *argv[]) {
    // Initialize SDL
    SDL_Init(SDL_INIT_VIDEO);

    clearConsole();

    // Array to be sorted

    printIntro();
    int arr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        arr[i] = rand() % (ARRAY_SIZE * 2);
    }


    int choice;
    printf("Enter your Choice Now: ");
    scanf("%d", &choice);
if (choice == 1) {
    window = SDL_CreateWindow("Bubble Sort Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    bubbleSort(arr,ARRAY_SIZE, renderer);
    exit(1);
}

else if (choice == 2) {
    window = SDL_CreateWindow("Selection Sort Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    selectionSort(arr, ARRAY_SIZE, renderer);
    exit(1);

}

else if(choice == 3){
    window = SDL_CreateWindow("Insertion Sort Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    insertionSort(arr, ARRAY_SIZE, renderer);
    exit(1);
}
else if(choice == 4){
    window = SDL_CreateWindow("Merge Sort Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    mergeSort(arr, 0, ARRAY_SIZE-1, renderer);
    exit(1);
}
else if(choice == 5){
    window = SDL_CreateWindow("Quick Sort Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    quickSort(arr, 0, ARRAY_SIZE-1);
    exit(1);
}
else {
    printf("Invalid choice. Please choose another option.\n");
    exit(0);
}

    // Event loop
    SDL_Event event;
    int quit = 0;
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = 1;
            }
        }
    }

    // Clean up and quit
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}


