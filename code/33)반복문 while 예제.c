//사용자가 입력하는 5개의 값을 합하여 출력하는 프로그램 
#include<stdio.h>
int main(void){
	int a;
	int count,sum;
	
	count = 0;
	sum = 0;
	
	while(count <= 4){
		printf("정수를 입력하시오 : ");
		scanf("%d",&a);
		
		sum += a;
		a++;
		count++;		
	}
	printf("사용자가 입력한 정수 5개의 합은 %d입니다",sum);
	
	return 0;
}
