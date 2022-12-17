//사용자가 입력한 정수의 합을 구하는 프로그램-(b)
#include<stdio.h>
int main(void){
	int count,i,n,sum;
	
	n = 1;
	sum = 0;
	
	printf("더할 정수의 개수를 입력하시오 :");
	scanf("%d",&count);
	
	for(n=1;n<=count;n++)
    {
	 printf("%d번째 정수를 입력하시오 :",n);
	 scanf("%d",&i);
		
		
	 sum += i;}
	 
	printf("사용자가 입력한 정수의 합 : %d",sum);
	
	return 0;
}
