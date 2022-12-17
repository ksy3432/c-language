//난수 활용 예제 
#include<stdio.h>
#include<stdlib.h>

double b_rand(double n);
double f_rand(double n);
double rand_range(double low,double high);

int main(void){
	double low,high,n;
		
	printf("시작값을 입력하시오 :");
	scanf("%lf",&low);
	printf("종료값을 입력하시오 :");
	scanf("%lf",&high); 
	
	printf("0또는 1을 무작위로 반환하는 함수 : %f \n",b_rand(n));
	printf("0.0 ~ 1.0 사이의 수를 무작위로 반환하는 함수: %f \n",f_rand(n));
	printf("%f ~ %f 사이의 수를 무작위로 반환하는 함수 : %f \n",low,high,rand_range(low,high));
	
	return 0;
}

double b_rand(double n){
	n = rand()%2;
	return n;
}

double f_rand(double n){
	n  = rand()/(double)RAND_MAX;
	return n;
}

double rand_range(double low,double high){
	double n;
	
	n  = (rand()/(double)RAND_MAX) + high - low;
	
	return n;
}
