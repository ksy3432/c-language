#include<stdio.h>
int main(void){
	float km,m,s,v;
	
	printf("달린 거리를 입력하시오(kmh) :");
	scanf("%f",&km);
	
	printf("달린 시간 중에서 분을 입력하시오 :");
	scanf("%f",&m);
	
	printf("달린 시간 중에서 초를 입력하시오 :");
	scanf("%f",&s);
	
	v = km/(m/60.0 +s/3600.0);
	printf("평균 속도는 %f km/h입니다",v);
}
