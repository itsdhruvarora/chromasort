#include "render.h"
#include <SDL2/SDL.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define ARRAY_SIZE 40
#define BAR_WIDTH (SCREEN_WIDTH / ARRAY_SIZE)

void render(SDL_Renderer *renderer, int arr[]) {
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        int height = arr[i] * (SCREEN_HEIGHT / ARRAY_SIZE);
        SDL_Rect rect = {i * BAR_WIDTH, SCREEN_HEIGHT - height, BAR_WIDTH, height};

        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
        SDL_RenderFillRect(renderer, &rect);
    }

    SDL_RenderPresent(renderer);
}
