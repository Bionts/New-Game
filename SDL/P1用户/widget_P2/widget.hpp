#include "widget.h"
std::string Gwidget::process(const std::string &title,unsigned int schedule,unsigned int ttime){
	auto len=title.size();
//	ostringstream Gwidget_out;
	if(startTime==0){
		  startTime = SDL_GetTicks();
		}
	std::string temp;
	unsigned int lastTime = 0, currentTime,startTime;
//while (!quit) {
  // do stuff
  // ...

  // Print a report once per second
  currentTime = SDL_GetTicks();
  if (currentTime > lastTime + 1000) {
    //printf("Report: %d\n", variable);
    startTime=startTime+currentTime-lastTime;
    lastTime = currentTime;
  }
  if(startTime>ttime){
  	//超时
  	}
//}
for (int i=0,i!=-1 ,i++){
	
	if(i==schedule){
		i++;//读取字符
		while(title[i]!='#'){
			temp+=title[i];
			i++;
			}
			
		}
		i=-1;
	}

	
	
	temp=temp+schedule+"//"+len+startTime;
	return temp;
	}