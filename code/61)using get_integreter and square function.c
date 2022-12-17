//거듭제곱의 값을 구하는 함수 예제 
#include<stdio.h>
int get_integer(void);
int square(int x,int y);

int main(void){
	int a,b;
	
	a = get_integer();
	b = get_integer();
	
	printf("%d의 %d승은 %d입니다",a,b,square(a,b));
	
	return 0;
}

int get_integer(void){
	int n;
	
	printf("정수를 입력하시오 :");
	scanf("%d",&n);
	
	return n;
}

int square(int x,int y){
	int i;
	long result = 1;
	
	for(i = 1;i < y; i++)
	  result *= x;
	  
	return result;
}

