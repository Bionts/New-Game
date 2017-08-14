#include "widget.h"
void Gwidget::process(int Schedule,int Complete){
//	for(int i=0;i<=Complete;i++
if(ivec.size()==0){

Gwidget::itostr(Complete);

	ivec.push_back(s1);
	ivec.push_back("载入错误");
	Gwidget::itostr(Schedule);
	ivec.push_back(s1);
	}
	if(Schedule<=Complete){
		Gwidget::itostr((Schedule*(100/Complete)));
		
		ivec[3]=translate[std::atoi( text.c_str() )]+"loading"+":"+s1+"%";
		
		
		};
	
	
	
	
	}


void Gwidget::itostr(int a){
	
		std::stringstream ss;
 ss<<a; 
	s1 = ss.str();
	}
	void Gwidget::trans(std::string bi){
	//	int ci=translate.size();
		for(int o=0;o<=4;o++){if(o==0){
		translate.push_back(bi);}else{
			translate.push_back("-");
			}}
		
		}




//#include <boost>

/*	auto Gwidget::process(std::string Title,int Schedule,int Complete)->char(*)[CHAR_SIZE]{
			char Title_a[CHAR_SIZE];
		auto strs=Title.size();
		const char *Title_b=Title.c_str();
			for(int i=0;i<strs;i++){
	if(i<CHAR_SIZE){
Title_a[i]=Title_b[i];
		
	}
			}
		return &Title_a;
		};	
		
			
				*/
						
/*
		std::string Gwidget::process( std::string Title,int Schedule_a,int Complete_a,Uint32 d){
			std::string temp_a;
		//	std::string
			if(Schedule_a<=Complete_a){;};
			int Percentage=2;//Schedule_a*(100/Complete_a);
		
//char buf[10];
//sprintf(buf,"%d",Percentage);
 //boost::lexical_cast<string
//>(Percentage);
std::stringstream ss;
 ss<<Percentage; 

std::string s1 = ss.str();
//temp1=temp1+Title+":"+s1+"%"+'\n';

		//	for(int i=Schedule;i<=Complete;i++){
		//		if(ispunct(a[i])){mai++;
	//			if(mai==b){temp="0";}
				
	//			else{
	//		temp=temp+a[i];}
	//			temp=a[g];
//				for (int inx=0;inx!=f; ++inx) a[inx]=a[g][inx];
				
	//		}
	//if(Schedule_a==Complete_a)Schedule_a=-1;
	
	temp_a=Title+"\n";
		return temp_a;	
			
			};*/
	