//3씩 건너뛰면서 정수의 값을 출력하는 프로그램 -(a)
#include<stdio.h>
int main(void){
	int i=1;
	int n=100;
	
	while(i <= n){
		if(i%3 == 1)
		{ printf("%d\n",i);
		  i++;}
		else if(i%3 != 1) 
		  i++;n
	}
	
	return 0;}
