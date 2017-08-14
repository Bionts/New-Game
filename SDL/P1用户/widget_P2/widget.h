#ifndef _WIDGET_H_
#define _WIDGET_H_
#include <iostream>
#include <sstream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <string>
#include <cstdlib>
#include <cstring>
#include <vector>
#define CHAR_SIZE 10
std::vector<std::string> ivec;
std::vector<std::string> translate;
//typedef unsigned int time;
class Gwidget{
	public:
	
	std::string s1;
	 void itostr(int);
//	using arrA=char[10];
std::string title;
 void process(int,int){
 	};
void trans(std::string);


//
//	std::string process(std::string,int,int,Uint32){};
//	auto process(std::string,int,int)->char(*)[CHAR_SIZE];
	
//	unsigned int startTime=0;
	};
	
#endif