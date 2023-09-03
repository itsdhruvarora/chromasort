#include <SDL2/SDL.h>
#include "render.h"
#include "swap.h"
#include "quicksort.h"

int partition(int arr[], int low, int high, SDL_Renderer *renderer, TTF_Font *font)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {

        if (arr[j] < pivot) {

            i++;
            swap(&arr[i], &arr[j]);
            render(renderer, arr, font);
            SDL_Delay(50);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    SDL_Delay(50);
    render(renderer, arr, font);
    return (i + 1);
}

void quickSort(int arr[], int low, int high, SDL_Renderer *renderer, TTF_Font *font)
{
    if (low < high) {
        int pi = partition(arr, low, high, renderer, font);
        quickSort(arr, low, pi - 1, renderer, font);
        quickSort(arr, pi + 1, high, renderer,font);
        SDL_Delay(100);
    }
}