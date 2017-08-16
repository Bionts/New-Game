#include <SDL2/SDL.h>
#include "Joystick.h"
#include <cmath>
 int isNumber(double d)
{return (d==d);}
template<class T>
T poww(T a,T b);
GJoystick::GJoystick(int vel,int Win_w,int Win_h)
{
	win_W=Win_w;
	win_H=Win_h;
	this->vel =vel;
	E_x =0;
	E_y =0;
	L_x =0;
	L_y =0;
	V_x =0;
	V_y =0;
	hasTouched =false;
	}
bool	GJoystick::Gis_Touched(){
return	hasTouched ;
}
void GJoystick::Gset_Touch(){
while (SDL_PollEvent(&e))
{
	switch (e.type)
	{
		case SDL_FINGERDOWN:{
			E_x =e.tfinger.x;
			E_y =e.tfinger.y;
			hasTouched =true;
			break;
		}
		case SDL_FINGERMOTION:{
			L_x =e.tfinger.x;
			L_y =e.tfinger.y;
			set_Angle();
			break;
		}
		case SDL_FINGERUP:{
			E_x =0;
			E_y =0;
			L_x =0;
			L_y =0;
			hasTouched=false;
			break;
		}
		
	}
	}
	}
	void GJoystick::Gset_Angle(){
	double x =L_x -E_x;
		double y =L_y -E_y;
	//	if (L_x==(win_W-50));
	//	x=L_x;
	//	if (L_y==(win_H-50));
	//	y=L_y;
		
//	if ((x<=0.1)&&(x>=-0.1)&&(y<=0.1)&&(y>=-0.1))
//return;
//	if ((E_x ==0)&&(E_y==0)&&(L_x==0)&&(L_y==0))
	//	return;
	if ((x==0)&&(y==0))
	return;
double sinx = y/sqrt((poww(x,y)));
double cosx =x/sqrt((poww(x,y)));

		V_y =sinx*vel;
		V_x =cosx*vel;
		}
		
		void Joystick::up_Touch(){
			hasTouched =false;
		}
		
		
double GJoystick::GgetVx(){
	return V_x;
}
		
double GJoystick::GgetVy(){
	return V_y;
}
		
template<class T>
T poww(T a,T b){
  return (a*a+b*b);
}