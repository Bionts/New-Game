#ifndef _WIDGET_H_
#define _WIDGET_H_
#include <iostream>
#include <sstream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <string>
#include <stdlib.h>
#include <cstring>

//typedef unsigned int time;
struct Gwidget{
std::string title;
//int number;	//读条du.tiao....1每个阶段的名称mei.ge.jie.duan.de.ming.chen....2
	std::string process(const std::string,int,int,Uint32);
	
	
//	unsigned int startTime=0;
	};
#endif