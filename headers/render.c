#include "render.h"
#include <SDL2/SDL.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define ARRAY_SIZE 40
#define BAR_WIDTH (SCREEN_WIDTH / ARRAY_SIZE)

void render(SDL_Renderer *renderer, int arr[]) {
    SDL_SetRenderDrawColor(renderer, 66, 70, 81, 255);
    SDL_RenderClear(renderer);

    for (int i = 0; i < ARRAY_SIZE; i++) {
        int barHeight = arr[i] * 10;
        int barX = i * (BAR_WIDTH + 1); // +1 for spacing between bars
        int barY = SCREEN_HEIGHT - barHeight;
        
        SDL_Color barColor;
        if (i % 2 == 0) {
            barColor = (SDL_Color){97, 152, 142, 255};
        } else {
            barColor = (SDL_Color){222, 255 , 252, 255};
        }
        
        SDL_SetRenderDrawColor(renderer, barColor.r, barColor.g, barColor.b, barColor.a);
        SDL_Rect barRect = {barX, barY, BAR_WIDTH, barHeight};
        SDL_RenderFillRect(renderer, &barRect);
    }

    SDL_RenderPresent(renderer);
}