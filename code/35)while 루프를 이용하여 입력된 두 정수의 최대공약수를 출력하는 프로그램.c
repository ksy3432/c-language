//while 루프를 이용하여 입력된 두 정수의 최대공약수를 출력하는 프로그램
#include<stdio.h>
int main(void){
	int x,y,r;
	
	printf("정수 두 개를 입력하시오 :");
	scanf("%d,%d",&x,&y);
	
	while(y != 0){
		r = x % y;
		x = y;
		y = r;
	}
	printf("입력된 두 정수의 최대공약수는 %d 입니다",x);
	
	return 0;
} 
