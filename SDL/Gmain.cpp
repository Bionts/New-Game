#include <SDL2/SDL.h>
#include <iostream>
#include <SDL2/SDL_image.h>
#include <vector>
#include <fstream>
#include <strstream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <SDL2/SDL_log.h>
#include <cmath>
#define SCRN_Height 400
#define SCRN_Width 800
SDL_Window* WMain;
SDL_Renderer* Render;
SDL_Surface* SLoading;
SDL_Texture* TLoading;
void Destroy_SDL(std::string);
int main(int argc,char* argv[]){
	
	int QUIT_MAINI=0;
		
	const std::string QUIT_MAINS="main()quit";
	bool SDL_INIT_FRONT=SDL_Init(SDL_INIT_EVERYTHING);
	if(!SDL_INIT_FRONT)SDL_Quit();
WMain=SDL_CreateWindow("MAIN:00-1",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,SCRN_Width,SCRN_Height,SDL_WINDOW_FULLSCREEN|SDL_WINDOW_SHOWN);
	if(WMain==NULL)return -2;
	Render=SDL_CreateRenderer(WMain,-1,SDL_RENDERER_ACCELERATED);
	if(Render==NULL)return -3;
	
	
	
	
	
	
	

	++QUIT_MAINI;
	if(QUIT_MAINI!=0)
	return 0;}
	void Destroy_SDL(std::string StrDestroy){
		if(StrDestroy);;
		SDL_DestroyTexture(TLoading);
    SDL_DestroyRenderer(Render);
    SDL_DestroyWindow(WMain);
		SDL_Quit();
		}