//두 수 중에서 큰 수를 찾는 함수 예제 
#include<stdio.h>

int get_max(int x,int y);

int main(void){
	int a,b;
	
	printf("정수를 두 개 입력하시오 :");
	scanf("%d,%d",&a,&b);
	
	printf("두 정수 중 큰 수는 %d입니다",get_max(a,b));
	
	return 0;
}

int get_max(int x,int y){
	if(x >= y)
	  return(x);
	else 
	  return(y);
}
