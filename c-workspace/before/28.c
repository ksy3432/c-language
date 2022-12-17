//사용자로부터 3개의 정수를 입력받아 가장 작은 정수를 판단하는 프로그램 
#include<stdio.h>
int main(void){
	int x,y,z;
	
	printf("정수를 세 개 입력하시오 : ");
	scanf("%d,%d,%d",&x,&y,&z);
	
	if(x>y){
		if(y>z)
		  printf("가장 작은 정수는 %d입니다",z);
		else
		  printf("가장 작은 정수는 %d입니다",y);
	}
	else{
		if(x<z)
		  printf("가장 작은 정수는 %d입니다",x);
		else
		  printf("가장 작은 정수는 %d입니다",z);
	}
	
	return 0;
	}
