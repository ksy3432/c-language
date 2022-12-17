//직각 삼각형의 밑변과 높이를 이용하여 각도와 대각선의 길이를 구하는 예제 
#include<stdio.h>
#include<math.h>

#define radian (45.0/atan(1))

int main(void){
	double h,w,r,seta;
	
	printf("밑변과 높이를 입력하시오 :");
	scanf("%1f %1f",&w,&h);
	
	r = sqrt(w * w + h * h);
	seta = radian * atan2(h,w);
	
	printf("각도는 %f이고 빗변의 길이는 %f입니다\n",seta,r);
	
}

