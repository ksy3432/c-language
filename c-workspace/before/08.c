//if문을 이용하여 음수와 양수를 구하는 프로그램 
#include<stdio.h>
int main(void){
	int number;
	
	printf("숫자를 입력하시오 :");
	scanf("%d",&number);
	
	if(number > 0)
	 printf("%d는 양수입니다",number);
	 
	if(number == 0)
	 printf("입력된 정수는 0입니다");
	  
    if(number < 0) 
	 printf("%d는 음수입니다",number);
	 
	return 0; 
}
