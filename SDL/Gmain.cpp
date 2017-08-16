#include <iostream>
#include <SDL2/SDL.h>
//#include "SDL_Gbutton.h"

void SDL_DestroyEnd(const char*);


//define SDL_Window in U
    SDL_Window* GWindow;
    SDL_Surface* GWSurface;
    SDL_Renderer* GWRender;
//main() much use (...);
int main(int argc,char* argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);
  GWindow = SDL_CreateWindow("Hello,World",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,650,680,SDL_WINDOW_SHOWN);
    std::cout << "Hello world!\n" << std::endl;
    GWSurface=SDL_GetWindowSurface(GWindow);
    SDL_Event EndEvent;
    bool QuitSDL=false;
    while(QuitSDL==false){
    while (SDL_PollEvent(&EndEvent)){
    if(EndEvent.type==SDL_QUIT){std::cout << "exit(0)!\n" << std::endl;
    QuitSDL=true;}else if(EndEvent.type==SDL_MOUSEBUTTONDOWN)std::cout << "MOUSEbutton down!\n" << std::endl;else if(EndEvent.type==SDL_KEYDOWN)
   std::cout << "KEYdown\n" << std::endl; };};
    SDL_DestroyEnd("Hello,wrold\n");
    return 0;
}
void SDL_DestroyEnd(const char* SDL_REEND){
    std::cout<<"SDL_quit is ok,OUT:"<<SDL_REEND<<std::endl;
    SDL_FreeSurface(GWSurface);
    SDL_DestroyWindow(GWindow);
    SDL_Quit();

    };
