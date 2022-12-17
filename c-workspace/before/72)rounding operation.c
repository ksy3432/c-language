//반올림을 연산하는 프로그램
#include<stdio.h>
#include<math.h>

double round(double f);

int main(void){
	double f;
	
	printf("실수를 입력하시오 :");
	scanf("%lf",&f);
	
	printf("반올림한 값은 %f입니다\n",round(f));
	
	return 0;
} 

double round(double f){
	double result;
	
	if(f - floor(f) >= 0.5)
	   result = ceil(f);
	else 
	   result = floor(f);
	   
	return result;
}

