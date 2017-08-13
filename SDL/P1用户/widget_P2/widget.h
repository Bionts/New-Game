#ifndef _WIDGET_H_
#define _WIDGET_H_
#include <iostream>
#include <sstream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <string>
//#include <cstring>

typedef unsigned int time;
class Gwidget{
	public:
std::string title;	//读条du.tiao....1每个阶段的名称mei.ge.jie.duan.de.ming.chen....2
	std::string process(std::string,unsigned int,time );
	
	private:
	time startTime=0;
	}
#endif
