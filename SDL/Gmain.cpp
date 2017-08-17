#include <iostream>
#include <SDL2/SDL.h>
#include "SDLttf.h"
#include <SDL2/SDL_image.h>
//SDL_Renderer* Render;


//显示字体
#include<string>
// 使用std::string


using std::string;

// 字体路径
string Fonts = "f.ttf";
//纹理贴图
SDL_Texture *Texture = NULL;

// 图片表面
SDL_Surface *Surface = NULL;
//切割和粘贴用的矩形参数
SDL_Rect Cut, Box;
// 窗口
SDL_Window *Window = NULL;
// 渲染器
SDL_Renderer *Render = NULL;
// 画笔
SDL_Texture *fonts = NULL;





//事件线程
SDL_Thread *Thread = NULL;
//窗口标题线程
SDL_Thread *Thread2 = NULL;
int Init()
{
    /* 参数说明 *标题,位置信息(x,y,w,h),窗体模式标记 */
    Window =
        SDL_CreateWindow("poo", 100, 100, 400, 300,
                         SDL_WINDOW_SHOWN);

    /* 参数说明 *窗体,渲染器索引(-1为默认),模式标记 */
    Render = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED);
    if ((Render == NULL) || (Window == NULL))
        return -1;
    return 0;
}

SDL_Texture *Text(std::string Fonts, int FontSize, SDL_Renderer * Render,
                  std::string FontsPath,int r=0,int g=0,int b=0,int a=0)
{
    // 初始化字体
    TTF_Init();
    TTF_Font *font = NULL;
    font = TTF_OpenFont(FontsPath.c_str(), FontSize);
    /*
     *结构体原型
     SDL_Color
     {
     Uint8 r,g,b,a;
     };
     */
    SDL_Color color;
    color.r =r;
    color.g =g;
    color.b =b;
    color.a = a;
    SDL_Surface *temp = NULL;
    /*
       函数原型： extern DECLSPEC SDL_Surface * SDLCALL
       TTF_RenderUTF8_Blended(TTF_Font *font,const char *text, SDL_Color fg); */
    temp = TTF_RenderUTF8_Blended(font, Fonts.c_str(), color);
    fonts = SDL_CreateTextureFromSurface(Render, temp);
    SDL_FreeSurface(temp);
    TTF_CloseFont(font);
    if (fonts == NULL){std::cout<<"eer"<<std::endl;};
        return fonts;
}


void BiltTexture(int x, int y, SDL_Texture * Draw_Texture,
                SDL_Renderer * Draw_Render)
{
    SDL_Rect Draw_Render_Rect;
    Draw_Render_Rect.x = x;
    Draw_Render_Rect.y = y;
    /*
     *查询函数
     *int SDL_QueryTexture(SDL_Texture* texture,Uint32* format, int* access,int* w,int* h)
     */
    int w = 0, h = 0;
    SDL_QueryTexture(Draw_Texture, NULL, NULL, &w, &h);
    Draw_Render_Rect.w = w;
    Draw_Render_Rect.h = h;

    SDL_RenderCopy(Draw_Render, Draw_Texture, NULL, &Draw_Render_Rect);
}


void DestroyAll()
{
    // 释放
    SDL_FreeSurface(Surface);

  SDL_DestroyTexture(Texture);
    SDL_DestroyTexture(fonts);
    SDL_DestroyRenderer(Render);
    SDL_DestroyWindow(Window);

}
//void SDL_DestroyEnd(const char*);
//static bool pressbutton=false;
static int buttonID=0;
//define SDL_Window in U
//    SDL_Window* GWindow;
/*
    GTTF ButtonTTF(Render,"f.ttf",10,"asdasd",200,125,125,125);
    Gchange_T("hello");
   ButtonTTF.GchangeRect(120,120);
*/




int LoadSurface()
{
//加载图片
Surface = IMG_Load("button.jpg");
  if (Surface == NULL)
    return -1;
  //去背景
  Uint32 color_key = SDL_MapRGB(Surface->format, 4, 4, 4);
  SDL_SetColorKey(Surface, SDL_TRUE, color_key);
  return 0;
}


    /////////////////////////////////////////////////////
    class Gbutton{
    public:
    Gbutton(const std::string,SDL_Rect,bool,int,int);
    bool GbuttonSee;
    int Gbuttonb(SDL_Rect);
    private:
    std::string title;
    int GbuttonPage;
    int GbuttonID;
    SDL_Rect GbuttonRect;

    };
    Gbutton::Gbutton(const std::string titlea,SDL_Rect GbuttonRecta,bool GbuttonSeea,int GbuttonPagea,int GbuttonIDa){
    this->title=titlea;
    this->GbuttonRect=GbuttonRecta;
    this->GbuttonSee=GbuttonSeea;
    this->GbuttonPage=GbuttonPagea;
    this->GbuttonID=GbuttonIDa;

    }
   int Gbutton::Gbuttonb(SDL_Rect GbuttonRectb){
    if(buttonID!=0){
    int temp =buttonID;
    return temp;};
    if(this->GbuttonSee==false)return 0;


    if(GbuttonRectb.x>=this->GbuttonRect.x&&GbuttonRectb.x<=this->GbuttonRect.w)
      {
        if(GbuttonRectb.y>=this->GbuttonRect.y&&GbuttonRectb.y<=this->GbuttonRect.h)
            {
            buttonID=this->GbuttonID;
             return this->GbuttonID;


            };
        return 0;

      }else
        {
        return 0;
        };

  return -01001;
    };



 bool Quit = false;
int EventThread(void *ptr)
{

  //切割表面的区域
  Cut.x = 0;
  Cut.y = 0;
  Cut.w = 28;
  Cut.h = 28;

  //粘贴表面的盒子
  Box.x = 50;
  Box.y = 50;
  Box.w = 100;
  Box.h = 100;
//事件储存器
  SDL_Event Event;
 static SDL_Rect buttonar;
   buttonar.x=0;
   buttonar.y=0;
   buttonar.w=50;
   buttonar.h=50;
    static Gbutton buttona("play",buttonar,true,1,100);
  //获取键盘焦点
while (!Quit) {

    //将事件储存至储存器中
    while (SDL_PollEvent(&Event) != 0) {
SDL_Rect Mou;

	switch (Event.type) {
	case SDL_MOUSEBUTTONDOWN:
	  {Mou.x=Event.motion.x;
	  Mou.y=Event.motion.y;
	    Box.y -= 50;
	    buttona.Gbuttonb(Mou);


	    break;
	  }
	case SDL_MOUSEBUTTONUP:
	  {
	    Box.y += 50;
	    break;
	  }
	  //菜单键退出……
	case SDL_QUIT:{
	    // dbg("MENU");
	    Quit = true;
	    break;
	  };
	}




      if (Event.type == SDL_KEYDOWN)
	switch (Event.key.keysym.sym) {
	case SDLK_UP:
	  {
	    Box.y -= 50;
	    break;
	  }
	case SDLK_DOWN:
	  {
	    Box.y += 50;
	    break;
	  }
	case SDLK_LEFT:
	  {

	    Box.x -= 50;
	    break;
	  }
	case SDLK_RIGHT:
	  {
	    Box.x += 50;
	    break;
	  }
	  //菜单键退出……
	case SDLK_x:{
	    // dbg("MENU");
	    Quit = true;
	    break;
	  }
	}
      //SDL_Delay(2000);
    }
  }
  return 0;
}



int TitleThread(void *ptr)
{
  while (!Quit) {

    SDL_SetWindowTitle(Window, "线程进行中");
    SDL_Delay(250);
    SDL_SetWindowTitle(Window, "线程进行中.");
    SDL_Delay(250);
    SDL_SetWindowTitle(Window, "线程进行中..");
    SDL_Delay(250);
    SDL_SetWindowTitle(Window, "线程进行中...");
    SDL_Delay(250);
  }

  return 0;
}

int main(int argc, char *argv[])
{
    // 初始化SDL2
//    SDL_Init(SDL_INIT_EVERYTHING);
    // 初始化
   Init();

        SDL_RenderClear(Render);
       BiltTexture(0, 0, Text("DXkite",10,Render,Fonts,0xff), Render);
    // 刷新
      BiltTexture(100, 0, Text("DXkite",10,Render,Fonts,0xff), Render);

    SDL_RenderPresent(Render);
    SDL_Delay(5 * 1000);
      if (LoadSurface() != 0)
    return -2;


//创建线程
  Thread = SDL_CreateThread(EventThread, "Thread", (void *) NULL);
  Thread2 = SDL_CreateThread(TitleThread, "Thread2", (void *) NULL);
  //从表面创建贴图//
 static SDL_Rect buttonar;
   buttonar.x=0;
   buttonar.y=0;
   buttonar.w=50;
   buttonar.h=50;
    static Gbutton buttona("play",buttonar,true,1,100);

  Texture = SDL_CreateTextureFromSurface(Render, Surface);
  while (!Quit) {
    //清理渲染器
    SDL_RenderClear(Render);
    //复制绘图后的表面至渲染器
    SDL_RenderCopy(Render, Texture, &Cut, &Box);
    if(buttonID!=0){
    std::cout<<"youzhi"<<std::endl;
    BiltTexture(0, 0, Text("annubeianxia",10,Render,Fonts,0xff), Render);

    };
//刷新
    SDL_RenderPresent(Render);
    buttonID=0;
  }
  // 等待线程运行完成
  SDL_WaitThread(Thread, NULL);
  SDL_WaitThread(Thread2, NULL);
    DestroyAll();
    SDL_Quit();
}


/*

//main() much use (...);
int main(int argc,char* argv[])
{
//    SDL_Init(SDL_INIT_EVERYTHING);
//    GWindow = SDL_CreateWindow("Hello,World",SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,650,680,SDL_WINDOW_SHOWN);
//    Render=SDL_CreateRenderer(GWindow,-1,SDL_RENDERER_ACCELERATED);
    std::cout << "Hello world!\n" << std::endl;
    SDL_Rect a={10,10,10,10};

    Gbutton ai("olsdj",a,true,1,325);

//    SDL_Texture* oop=ButtonTTF.Gget_Texture();

//SDL_RenderCopy(Render,oop,NULL,NULL);
//SDL_RenderPresent(Render);
////SDL_Delay(2000);









////    SDL_DestroyEnd("Hello,wrold\n");
    return 0;
}
void SDL_DestroyEnd(const char* SDL_REEND){
    SDL_DestroyTexture(oop);
    SDL_Delay(2000);
    std::cout<<"SDL_quit is ok,OUT:"<<SDL_REEND<<std::endl;
    SDL_DestroyRenderer(Render);
    SDL_DestroyWindow(GWindow);
    SDL_Quit();

    };
*/




/*
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
*/
