#include<stdio.h>
int main(void){
	int x;
	int a;
	
	printf("x의 값을 입력하시오 :");
	scanf("%d",&x);
	
	a = 3*x*x + 7*x + 11;
	printf("계산값은 %d 입니다",a);
	
	return 0; 
}
