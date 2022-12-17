// 열거형
#include<stdio.h>

enum days{MON=1, TUE, WED, THU, FRI, SAT, SUN};

char *day_name[] = {
	" ","monday" , "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"
};

int main(void){
	enum days d;
	
	for(d=MON;d<SUN+1;d++){
       printf("%d day of week is %s\n",d,day_name[d]);
	}
}