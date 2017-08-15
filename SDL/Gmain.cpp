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
int main(int argc,char* argv[]){
	int QUIT_MAINI=0;
	bool SDL_INIT_FRONT=SDL_Init(SDL_INIT_EVERYTHING);
	if(!SDL_INIT_FRONT)SDL_Quit();
	
	
	
	
	
	const std::string QUIT_MAINS="main()quit";
	++QUIT_MAINI;
	return 0;}