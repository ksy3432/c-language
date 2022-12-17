//사는 물건의 개수에 따라 다르게 적용되는 할인율을 감안해서 총 금액을 계산하는 프로그램
#include<stdio.h>
int main(void){
	float count;
	
	printf("살 물건의 개수를 입력하시오 :");
	scanf("%f",&count);
	 
	if(count <= 0)
	 printf("양수를 입력하세요");
	else if(count >= 10 && count <20)
	 printf("할인율이 적용되어 총 상품의 가격은 %f입니다",100*count*0.9);
	else if(count < 100)
	 printf("할인율이 적용되어 총 상품의 가격은 %f입니다",100*count*0.8);
	else 
	 printf("할인율이 적용되어 총 상품의 가격은 %f입니다",100*count*0.7);
	  
	  
	return 0; 
} 
