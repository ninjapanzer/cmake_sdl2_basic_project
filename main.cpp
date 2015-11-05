#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

SDL_Event event;

int main(int argc, char *argv[]){
    if (SDL_Init(SDL_INIT_VIDEO) != 0){
        std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    bool done=false;
    while(!done) {
        while(SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                done=true;
            }
        }
    }

    SDL_Quit();

    return 0;
}