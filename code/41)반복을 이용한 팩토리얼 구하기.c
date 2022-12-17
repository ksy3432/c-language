//반복을 이용한 팩토리얼 구하기
#include<stdio.h>
int main(void){
	long fact = 1;
	int i,n;
	
	printf("n의 값을 입력하시오 :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	 fact *= i;
	
	printf("%d",fact);
	
	return 0;
} 
