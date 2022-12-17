//사용자가 입력한 정수의 합을 구하는 프로그램 -(c)
#include<stdio.h>
int main(void){
	int i,sum,count;
	
	sum = 0;
	count = 0;
	
	while(i>=0){
		printf("정수를 입력하시오(멈추고 싶다면 0을 누르시오):");
		scanf("%d",&i);
		
		if(i>0)
		  sum += i;
		  count++;
		if(i == 0)
		  break; 
	}
	printf("입력한 정수는 %d개이고 모든 정수의 합은 %d입니다",count,sum);
	
	return 0;
} 
