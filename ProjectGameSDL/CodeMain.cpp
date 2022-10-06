#include <iostream>
#include <SDL.h>
#include "SDL_utils.h"


using namespace std;


const int STEP_DELAY = 20;
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
const string WINDOW_TITLE = "An Implementation of Code.org Painter";

int main(int argc, char* argv[])
{
    SDL_Window* window;
    SDL_Renderer* renderer;
    initSDL(window, renderer, SCREEN_WIDTH, SCREEN_HEIGHT, WINDOW_TITLE);
    //




    //
    waitUntilKeyPressed();
    quitSDL(window, renderer);
    return 0;

}


