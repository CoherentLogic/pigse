#include <SDL/sdl.h>
#include "epl.h"

static SDL_Surface *screen;

void 
EplInit(ScrWidth, ScrHeight, ScrDepth)
        int ScrWidth;
        int ScrHeight;
        int ScrDepth;
{
        if (SDL_Init(SDL_INIT_VIDEO) < 0 ) {
                EplError ("EPL001: Could not initialize the video subsystem.");
        }

        if (!(screen = SDL_SetVideoMode(ScrWidth, ScrHeight, ScrDepth, SDL_FULLSCREEN | SDL_HWSURFACE))) {
                SDL_Quit();
                EplError ("EPL002: Could not set the requested video mode.");
        }
}

void 
EplError(ErrMessage)
        char *ErrMessage;
{
        printf("%s\n", ErrMessage);
        SDL_Quit();
        exit(1);        
}
