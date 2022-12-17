//두 개의 부동소수점 비교하기
#include<stdio.h>
#include<math.h>

double f_equal(double a,double b);
double min(double a,double b);
double absolute_value(double n);

int main(void){
	double a,b;
	
	printf("1번째 실수를 입력하시오 :");
	scanf("%lf",&a);
	printf("2번째 실수를 입력하시오 :");
	scanf("%lf",&b);
	
	if(f_equal == 0)
		printf("두 실수는 근시적으로 같지 않습니다\n");
	else
		printf("두 실수는 근시적으로 같습니다\n");
	
	return 0;
} 

double absolute_value(double n){
	return (fabs(n));
}

double min(double a,double b){
	double k;
	
	if(a >= b)
	   k = b;
	else
	   k = a;
	   
	return k;   
}

double f_equal(double a,double b){
	double l,result;
	double e = 0.000001;
	
	l = absolute_value(a-b)/min(absolute_value(a),absolute_value(b));
	
	if(l < e)
	  result = 1;
	else if(l >= e)
	  result = 0;
	  
	return result;
}
