//반복을 이용한 정수합 프로그램 
#include<stdio.h>
int main(void){
	int i,n,sum;
	
	sum = 0;
	 
	printf("n까지의 합을 구할 때,n의 값을 입력하시오 :");
	scanf("%d",&n);
	
	for(i=1 ;i <= n;i++)
	 sum += i;
	
	printf("n까지의 합은 %d입니다",sum);
	
	return 0; 
}
