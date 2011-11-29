#include <SDL/sdl.h>
#include "epl.h"

static SDL_Surface *screen;

ERESULT EplInit(ECOORD ScrWidth, ECOORD ScrHeight, ECOORD ScrDepth)
{
        if (SDL_Init(SDL_INIT_VIDEO) < 0 ) {
                EplError ("EPL001: Could not initialize the video subsystem.");
                return EPL_NO_VIDEO_INIT;
        }

        if (!(screen = SDL_SetVideoMode(ScrWidth, ScrHeight, ScrDepth, SDL_FULLSCREEN | SDL_HWSURFACE))) {
                SDL_Quit();
                EplError ("EPL002: Could not set the requested video mode.");
                return EPL_BAD_VIDEO_MODE;
        }
}

void EplError(ESTR ErrMessage)
{
        printf("%s\n", ErrMessage);     
}
