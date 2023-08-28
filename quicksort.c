#include <SDL2/SDL.h>
#include "render.h"
#include "swap.h"
#include "quicksort.h"

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {

        if (arr[j] < pivot) {

            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high, SDL_Renderer *renderer)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1, renderer);
        quickSort(arr, pi + 1, high, renderer);

                render(renderer, arr);
        SDL_Delay(100);
    }
}