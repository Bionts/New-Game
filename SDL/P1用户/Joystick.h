#ifndef JOYSTICK_H
#define JOYSTICK_H
#include <SDL2/SDL.h>
 class GJoystick{
 private:
 int win_W;
 int win_H;
 double V_x;
 double V_y;
 SDL_Event e;
 bool hasTouched;
 double E_x;
 double E_y;
 double L_x;
 double L_y;
 int vel;
public:
GJoystick(int ,int,int );
bool Gis_Touched();
void Gset_Touch();//hasTouched set  true;
void Gset_Angle(); //setAngle;
void Gup_Touch();//hasTouched set false;
double GgetVx();
double GgetVy();
 };
 #endif