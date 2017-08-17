static bool pressbutton=false;
static int buttonID=0;
///////////////////////////////////////////////
/*文件使用说明：这是一个按钮类，只有结构，通过
Gbutton name("标签题目",SDL_Rect,*可见性false或true*,*按钮所在页数*,*按钮ID号*);
来创建，
int temp=name.GButtonb(*鼠标指针位置需要用SDL_Rect的x，y来记录*);
于是temp就得到了按钮的ID；





*/
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

             return this->GbuttonID;


            };
        return 0;

      }else
        {
        return 0;
        };

  return -01001;
    };
