#include<stdio.h>
int main(void){
	float x;
	float y;
	float z;
	float sum;
	float average; 
	
	printf("1번째 숫자의 값을 입력하시오 :");
	scanf("%f",&x); 
	
	printf("2번째 숫자의 값을 입력하시오 :");
	scanf("%f",&y); 
	
	printf("3번째 숫자의 값을 입력하시오 :");
	scanf("%f",&z);
	
	sum = x + y + z;
	printf("세 수의 합은 %f",sum);
	
	average = sum / 3; 
	printf("세 숫자의 평균값은 %f",average);
	
	return 0;
}
