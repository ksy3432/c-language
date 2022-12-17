//원의 넓이를 구하는 예제
#include<stdio.h>
int input_radius(void);
int area(int r);

int main(void){
	int r;
	
	r = input_radius();
	
	printf("원의 면적은 %d입니다",area(r));
	
	return 0;
} 

int input_radius(void){
	int r;
	
	printf("원의 반지름을 입력하시오 :");
	scanf("%d",&r);
	
	return r; 
}

int area(int r){
	float pi = 3.14;
	int s;
	
	s = pi*r*r;
	
	return s;
}
