#include<stdio.h>
int main(void){
	int k;
	float d;
	float t;
	
	printf("환율을 입력하시오 :");
	scanf("%f",&t);
	
	printf("원화를 입력하시오 :");
	scanf("%d",&k);
	
	d = k/t;
	
	printf("현재 환율에 따르면 %d원= %f달러 입니다\n",k,d);
	
	return 0; 
}
