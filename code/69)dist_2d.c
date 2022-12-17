//두 점 사이의 거리를 구하는 프로그램
#include<stdio.h>
#include<math.h>

double dist_2d(double x1,double y1,double x2,double y2);

int main(void){
	double a,b,c,d;
	
	printf("첫 번째 좌표를 입력하시오 :");
	scanf("%lf %lf",&a,&b);
	
	printf("두 번째 좌표를 입력하시오 :");
	scanf("%lf %lf",&c,&d)
	
	printf("두 점 사이의 거리는 %lf입니다\n",dist_2d(a,b,c,d)); 
	
	return 0;
	
} 

double dist_2d(double x1,double y1,double x2,double y2){
	double s,x,y;
	x = x2 - x1;
	y = y2 - y1;
	s = x * x + y * y;
	return (sqrt(s));
}
