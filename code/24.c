//입력하는 문자에 따라 다른 도형의 넓이를 계산하는 프로그램 
#include<stdio.h>
int main(void){
	char shape;
	float r,h;
	
	printf("면적을 계산할 도형을 고르시오(사각형R,원C,삼각형T) :");
	scanf("%c",&shape);
	
	switch(shape){
		case 'R':
			printf("사각형의 가로와 세로를 입력하시오 :");
			scanf("%f,%f",&r,&h);
			printf("가로가 %f이고 세로가 %f인 사각형의 넓이는 %f이다",r,h,r*h);
			break;
			
		case 'T':
		    printf("삼각형의 가로와 세로를 입력하시오 :");
			scanf("%f,%f",&r,&h);
			printf("가로가 %f이고 세로가 %f인 삼각형의 넓이는 %f이다",r,h,(r*h)*0.5);
			break; 
		case 'C':
		    printf("원의 반지름을 입력하시오 :");
			scanf("%f",&r);
			printf("반지름이 %f인 원의 넓이는 %f입니다",r,r*r*3.14);
			break;
		default:
		    printf("지원되지 않는 입력입니다");
			break; 
	}
	return 0; 
} 

