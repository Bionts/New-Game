#ifndef JOYSTICK_H
#define JOYSTICK_H
#include <SDL2/SDL.h>
 class Joystick{
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
Joystick(int ,int,int );
bool is_Touched();
void set_Touch();//hasTouched set  true;
void set_Angle(); //setAngle;
void up_Touch();//hasTouched set false;
double getVx();
double getVy();
 };
 #endif