#include <SDL2/SDL.h>
#include <stdio.h>

#include "render.h"
#include "swap.h"
#include "selectionsort.h"

void selectionSort(int arr[], int size, SDL_Renderer *renderer) {
    int i, j, min_idx;
    for (i = 0; i < size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(&arr[min_idx], &arr[i]);
        }
        render(renderer, arr);
        SDL_Delay(500); // Delay to visualize the sorting process
    }
}