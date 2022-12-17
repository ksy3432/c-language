//수학적인 조합 값을 함수를 이용하여 구현하는 예제 
#include<stdio.h>
int integeter(void);
int factorial(int n);
int combination(int n,int r);

int main(void){
	int a,b;

	a = integeter();
	b = integeter();
	
	printf("c(%d,%d)의 값은 %d 입니다\n",a,b,combination(a,b));
	
	return 0; 
} 

int integeter(void){
	int k;
	
	printf("정수를 입력하시오 :");
	scanf("%d",&k);
	
	return k;
}

int factorial(int n){
	int i;
	long result = 1;
	
	for(i=1;i<=n;i++)
	   result *= i;
	   
	return result;
}

int combination(int n,int r){
	return factorial(n)/(factorial(n-r)*factorial(r));
}
