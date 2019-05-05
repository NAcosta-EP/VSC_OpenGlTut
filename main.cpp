#include "common.h"

bool isRunning = true; //Set program state

int main(int argc, char* argv[])
{
    //Error checking/Initialization
    if(SDL_Init(SDL_INIT_NOPARACHUTE & SDL_INIT_EVERYTHING) != 0){
        SDL_Log("Unable to initialise SDL %s\n", SDL_GetError());
        return -1;
    }
    else
    {
        //Specify OpenGL Version(4.2)
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 4);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
        SDL_Log("SDL Initialised");
    }
    
    SDL_Window* window= SDL_CreateWindow(
        "Game Engine Tutorial",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        640,
        480,
        SDL_WINDOW_OPENGL
    );

    
    return 0;
}
