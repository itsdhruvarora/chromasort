#include "render.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600
#define ARRAY_SIZE 40
#define BAR_WIDTH (SCREEN_WIDTH / ARRAY_SIZE)


void render(SDL_Renderer *renderer, int arr[], TTF_Font *font) {
    SDL_SetRenderDrawColor(renderer, 66, 70, 81, 255);
    SDL_RenderClear(renderer);

    for (int i = 0; i < ARRAY_SIZE; i++) {
        int barHeight = arr[i] * 10;
        int barX = i * (BAR_WIDTH); // +1 for spacing between bars
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

        // Draw the value inside the rectangle
        SDL_Color textColor = {255, 255, 255, 255};
        char valueText[5];
        snprintf(valueText, sizeof(valueText), "%d", arr[i]);
        SDL_Surface *textSurface = TTF_RenderText_Solid(font, valueText, textColor);
        SDL_Texture *textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);

        // Calculate the position to center the text
        int textX = barX + BAR_WIDTH / 2 - textSurface->w / 2;
        int textY = barY - textSurface->h - 5; // Adjust for text position

        SDL_Rect textRect = {textX, textY, textSurface->w, textSurface->h};
        SDL_RenderCopy(renderer, textTexture, NULL, &textRect);

        SDL_FreeSurface(textSurface);
        SDL_DestroyTexture(textTexture);
    }

    SDL_RenderPresent(renderer);
    SDL_Delay(100);    
}
