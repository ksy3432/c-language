//사용자가 입력한 모든 정수에 대하여 1부터 그 정수까지의 합을 계산하는 프로그램
#include<stdio.h>
int main(void){
	int i,n,sum;
	
	printf(" 정수를 입력하시오 :");
	scanf("%d",&n);
	printf("---   -----------------\n");
	printf(" n    1부터 n까지의 합\n");
	printf("---   -----------------\n");
	
	sum = 0;
	
	for(i=1;i<=n;i++){
		sum += i;
		printf(" %d      %d\n",i,sum);
 }
    return 0; 
} 
