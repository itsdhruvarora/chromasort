#include <SDL2/SDL.h>
#include <stdio.h>

#include "render.h"
#include "swap.h"
#include "bubblesort.h"

void bubbleSort(int arr[], int size, SDL_Renderer *renderer, TTF_Font *font) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                // Render the updated array
                render(renderer, arr, font);
                SDL_Delay(50); // Delay to visualize the sorting process
            }
        }
    }
}