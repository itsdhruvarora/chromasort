#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>

#include "render.h"
#include "swap.h"
#include "insertionsort.h"

void insertionSort(int arr[], int n, SDL_Renderer *renderer, TTF_Font *font)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        render(renderer, arr, font);
        SDL_Delay(100);
    }
}