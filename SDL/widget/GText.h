#ifndef _GTEXT_H_
#define _GTEXT_H_
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
#include <string>
class GText  {
//friend SDLCALL::SDL_RenderCopy(SDL_Render,SDL_Texture,SDL_Rect,SDL_Rect);
public:
GText(SDL_Renderer* RenderT,std::string);
~GText();
//You don't change font
SDL_Texture* Text(std::string,int,int,int,int,int);
//You need chang font
SDL_Texture* TextF(std::string,int,std::string,int,int,int,int);
void RenderT(int,int, SDL_Texture*);//~GText();
private:
//dedication fontpath of text().
std::string FontPath;
SDL_Renderer* Render;
SDL_Texture* fonts;




};

#endif
