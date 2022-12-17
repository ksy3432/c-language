//사용자가 입력한 정수의 합을 하는 프로그램-(a)
#include<stdio.h>
int main(void){
	int i,n,sum;
	
	printf("덧셈을 시작할 수를 입력하시오 :");
	scanf("%d",&i);
	
	sum = 0;
	n = i + 99;
	
    while(i<=n){
    	  sum += i;
    	  i++;
	} 

	printf("입력한 정수의  합은 %d입니다",sum);
	
	return 0;
} 
