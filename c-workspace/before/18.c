//if-else문을 이용하여 홀수와 짝수를 구분한다 
#include<stdio.h>
int main(void){
	int number;
	
	printf("숫자를 입력하시오 : ");
	scanf("%d",&number);
	
	if(number%2 == 0)
	 printf("입력하신 숫자인 %d은 짝수입니다",number);
	
	else
	 printf("입력하신 숫자인 %d은 홀수입니다",number);
	 
	return 0; 
}
