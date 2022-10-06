#include <iostream>
#include <SDL.h>
#include "SDL_utils.h"
#include <windows.h>
#include <string>
#include <SDL_image.h>


using namespace std;

SDL_Surface* LoadImage(string file_path) {
    SDL_Surface* load_image = NULL;
    SDL_Surface* optimize_image = NULL;

    load_image = IMG_Load(file_path.c_str());


}




int main(int argc, char* argv[])
{

    return 0;
}


