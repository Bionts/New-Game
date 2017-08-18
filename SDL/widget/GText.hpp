#include "Gtext.h"
 GText::GText(SDL_Renderer* renderT,std::string FontPath){

this->Render=renderT;
this->FontPath=FontPath;

};
SDL_Texture* GText::Text(std::string Fonts, int FontSize,int a,int r,int g,int b)
{

 // init
    TTF_Init();
    SDL_Color color;
    color.r =r;
		color.g =g;
		color.b =b;
		color.a =a;
   // TTF_Font* font=x
    SDL_Surface *temp = NULL;
    temp = TTF_RenderUTF8_Blended(TTF_OpenFont(this->FontPath.c_str(),FontSize), Fonts.c_str(), color);
    this->fonts = SDL_CreateTextureFromSurface(this->Render, temp);
    SDL_FreeSurface(temp);
  //  TTF_CloseFont(font);

    TTF_Quit();
    if (this->fonts == NULL){std::cout<<"Error:Text,fonts==NULL"<<std::endl;};
        return this->fonts;
}

SDL_Texture* GText::TextF(std::string Fonts, int FontSize,std::string FontsPath,int a,int r,int g,int b)
{
    // 初始化字体
    TTF_Init();
    SDL_Color color;
    color.r =r;
		color.g =g;
		color.b =b;
		color.a =a;
    SDL_Surface* temp=TTF_RenderUTF8_Blended(TTF_OpenFont(FontsPath.c_str(), FontSize), Fonts.c_str(), color);
    this->fonts = SDL_CreateTextureFromSurface(this->Render, temp);
    SDL_FreeSurface(temp);
     TTF_Quit();
    if (this->fonts == NULL){std::cout<<"Error:TextF,fonts==NULL"<<std::endl;};
        return this->fonts;
}



void GText::RenderT(int x,int y,SDL_Texture* DrawTexture)
{
    SDL_Rect DrawRect;
    DrawRect.x = x;
    DrawRect.y = y;
    int w = 0, h = 0;
    //query
    SDL_QueryTexture(DrawTexture, NULL, NULL, &w, &h);
    DrawRect.w = w;
    DrawRect.h = h;

    SDL_RenderCopy(GText::Render, DrawTexture, NULL, &DrawRect);
}
GText::~GText(){
SDL_DestroyTexture(this->fonts);}
