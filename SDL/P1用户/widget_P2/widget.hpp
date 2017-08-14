#include "widget.h"
//#include <boost>
	
		std::string Gwidget::process( const std::string Title,int Schedule_a,int Complete_a,Uint32 d){
			std::string temp1;
		//	std::string
			if(Schedule_a<=Complete_a){
			int Percentage=Schedule_a*(100/Complete_a);
		
//char buf[10];
//sprintf(buf,"%d",Percentage);
 //boost::lexical_cast<string
//>(Percentage);
std::stringstream ss;
 ss<<Percentage; 

std::string s1 = ss.str();
temp1=Title+":"+s1+"%";
		//	for(int i=Schedule;i<=Complete;i++){
		//		if(ispunct(a[i])){mai++;
	//			if(mai==b){temp="0";}
				
	//			else{
	//		temp=temp+a[i];}
	//			temp=a[g];
//				for (int inx=0;inx!=f; ++inx) a[inx]=a[g][inx];
				
	//		}
	//if(Schedule_a==Complete_a)Schedule_a=-1;
	};
		return temp1;	
			
			}
	