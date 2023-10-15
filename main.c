#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <time.h>
#include "headers/intro.h"
#include "headers/render.h"
#include "headers/bubblesort.h"
#include "headers/insertionsort.h"
#include "headers/swap.h"
#include "headers/selectionsort.h"
#include "headers/mergesort.h"
#include "headers/quicksort.h"
#include "headers/printsortinginfo.h"


//Load Fonts
TTF_Font *font;


// Constants
#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define ARRAY_SIZE 40
#define BAR_WIDTH (SCREEN_WIDTH / ARRAY_SIZE) 

// SDL variables
SDL_Window * window = NULL;
SDL_Renderer * renderer = NULL;

void clearConsole() {
  system("clear");
}


void info(int choice){

}

//MAIN FUNVTION STARTS ----->>>>
int main(int argc, char * argv[]) {

    //initialize clock
    clock_t start_time, end_time;
    double cpu_time_used;

    // Record the start time
    start_time = clock();


  // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(stderr, "SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    if (TTF_Init() < 0) {
      fprintf(stderr, "SDL_ttf could not initialize! SDL_ttf Error: %s\n", TTF_GetError());
      return 1;
  }

  font = TTF_OpenFont("OpenSans-Light.ttf", 12);

  
  while(true){
  clearConsole();

  // Array to be sorted
  printIntro();

  srand(time(NULL));
  int arr[ARRAY_SIZE];
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    arr[i] = rand() % 50;
  }

  int choice;
  printf("Enter your Choice Now: ");
  scanf("%d", & choice);
  if (choice == 1) {
    window = SDL_CreateWindow("Bubble Sort Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    bubbleSort(arr, ARRAY_SIZE, renderer, font);
  } else if (choice == 2) {
    window = SDL_CreateWindow("Selection Sort Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    selectionSort(arr, ARRAY_SIZE, renderer, font);

  } else if (choice == 3) {
    window = SDL_CreateWindow("Insertion Sort Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    insertionSort(arr, ARRAY_SIZE, renderer, font);
    exit(1);
  } else if (choice == 4) {
    window = SDL_CreateWindow("Merge Sort Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    mergeSort(arr, 0, ARRAY_SIZE - 1, renderer,font);
  } else if (choice == 5) {
    window = SDL_CreateWindow("Quick Sort Visualizer", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    quickSort(arr, 0, ARRAY_SIZE - 1, renderer, font);
  } else {
    printf("Invalid choice. Please choose another option.\n");
    exit(0);
  }

  clearConsole();

  // Record the end time
  end_time = clock();

  // Calculate the CPU time used in seconds
  cpu_time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;


  //print outro
  printf(
      "█▀ █▀█ █▀█ ▀█▀ █ █▄░█ █▀▀   █▀▀ █▀█ █▀▄▀█ █▀█ █░░ █▀▀ ▀█▀ █▀▀ █▀▄\n"
      "▄█ █▄█ █▀▄ ░█░ █ █░▀█ █▄█   █▄▄ █▄█ █░▀░█ █▀▀ █▄▄ ██▄ ░█░ ██▄ █▄▀\n"
  );

  printf("\n\n\n\n Time Taken: %f seconds", cpu_time_used );
  printf("\n\n\" The sorted array is : ");
  for(int i=0; i<ARRAY_SIZE; i++){
    printf("%d ", arr[i]);
  }

  printSortingInfo(choice);

  int l;
  printf("Press 1 if you want to restart the program. ");
  scanf("%d", &l);
  if(l != 1){
    printf("Thanks for Using my Program!. Hope You Enjoyed it. :=)");
    break;
  }


  fflush(stdout);
  // Event loop
  SDL_Event event;
  int quit = 0;
  while (!quit) {
    while (SDL_PollEvent( & event)) {
      if (event.type == SDL_QUIT) {
        quit = 1;
      }
    }
  }

  // Clean up and quit
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  TTF_Quit();
  SDL_Quit();
  }



  return 0;
}