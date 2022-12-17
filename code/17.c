#include<stdio.h>
int main(void){
	int x,y;
	
	printf("x좌표의 값을 입력하시오 :");
	scanf("%d",&x);
	
	printf("y좌표의 값을 입력하시오 : ");
	scanf("%d",&y);
	
	x>0? (y>0 ? printf("이 좌표는 1사분면에 위치합니다") : printf("이 좌표는 4사분면에 위치합니다")) : y>0 ? printf("이 좌표는 2사분면에 위치합니다") : printf("이 좌표는 3사분면에 위치합니"); 
}
