//두 정수의 산술,기하,조화 평균 구하기
#include<stdio.h>
#include<math.h>

double arithmetic_mean(double x,double y);
double geometric_mean(double x,double y);
double harmonic_mean(double x,double y);

int main(void){
	double a,b;
	
	printf("첫 번째 정수를 입력하시오 :");
	scanf("%lf",&a);
	
	printf("두 번째 정수를 입력하시오 :");
	scanf("%lf",&b);
	
	printf("산술 평균은 %f입니다\n",arithmetic_mean(a,b));
    printf("기하 평균은 %f입니다\n",geometric_mean(a,b));
	printf("조화 평균은 %f입니다\n",harmonic_mean(a,b));
	 
	return 0;
} 
double arithmetic_mean(double x,double y){
	return (x+y/2);
}

double geometric_mean(double x,double y){
    return (sqrt(x*y)); 
}
double harmonic_mean(double x,double y){
    return (2*x*y/(x+y)); 
}

