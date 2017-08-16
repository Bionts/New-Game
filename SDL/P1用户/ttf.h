#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
using std::string;
class GTTF {
	private:
	SDL_Renderer * renderer;
	string FontsPath;
	SDL_Color color;
	int Fontsize;
	SDL_Rect rect;
	SDL_Texture * texture;
	public:
		
	GTTF(SDL_Renderer * renderer, string FontPath ,int Fontsize ,  string  Font,int a,int r,int g,int b)//Fontpath 路径，Fontsize 大小，argb颜色，位置函数在后面
	
	{
		this ->Fontsize =Fontsize;
		this->renderer =renderer;
	this->FontsPath =FontPath;
		TTF_Font *font = NULL;
		TTF_Init();
		SDL_Surface * temp;
		color.r =r;
		color.g =g;
		color.b =b;
		color.a =a;
		font =TTF_OpenFont(FontPath.c_str(), Fontsize);
		temp =TTF_RenderUTF8_Blended(font, Font.c_str(), color);
		texture =SDL_CreateTextureFromSurface(renderer, temp);
  SDL_FreeSurface(temp);
		
		TTF_CloseFont(font);
		TTF_Quit();
			 SDL_QueryTexture(texture, NULL, NULL, &rect.w, &rect.h);
			  	rect.x =0;
      	rect.y =0;
      	}
      
      		//A function that can make new Texture;
      		//不改变类的情况下改变字体内容，参数为string
      	void GChange_T(string  Fonts){
      	SDL_DestroyTexture(texture);
      	texture =NULL;
      					TTF_Font *font = NULL;
		TTF_Init();
		SDL_Surface * temp;
			font =TTF_OpenFont(FontsPath.c_str(), Fontsize);
		temp =TTF_RenderUTF8_Blended(font, Fonts.c_str(), color);
		texture =SDL_CreateTextureFromSurface(renderer, temp);
  SDL_FreeSurface(temp);
		
		TTF_CloseFont(font);
		TTF_Quit();
			 SDL_QueryTexture(texture, NULL, NULL, &rect.w, &rect.h);
			  //	rect.x =x;
      	//rect.y =y;
      	}
     
      	SDL_Texture *Gget_Texture(){
      		return texture;
      		}
      	//改变文字位置
      		void GchangeRect(int x,int y,int times=1){
      			int w,h;
      			 SDL_QueryTexture(texture, NULL, NULL, &w, &h);
 
      					rect.x =x;
      			rect.y =y;
      			rect.w =w*times;
      			rect.h =h*times;
      		}
      		SDL_Rect Gget_Rect(){
      			return rect;
      			}
   
      		
      		
   
      		~GTTF(){
      			SDL_DestroyTexture(texture);
      			}
      	
      	

		};