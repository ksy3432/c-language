//반복을 이용한 세제곱값 구하기
#include<stdio.h>
int main(void){
	int i,n;
	
	printf("n의 값을 입력하시오 :");
	scanf("%d",&n);
	
	printf("************************\n");
	printf(" 원래수 제곱수 세제곱수\n");
	printf("************************\n");
	
	for(i=1;i<=n;i++)
	 printf("%5d   %5d   %5d\n",i,i*i,i*i*i);
	 
	return 0; 
} 
