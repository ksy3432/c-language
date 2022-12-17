//별을 이용하여 가로형 막대그래프를 그리는 프로그램 
#include<stdio.h>
int main(void){
	int i,n,number;
	
	for(number=1;number<=10;number++){
		printf("\n막대 #%d의 높이:",number);
		scanf("%d",&n);
		
		for(i=1;i<=n;i++)
		  printf("*");
	}
	return 0;
} 
