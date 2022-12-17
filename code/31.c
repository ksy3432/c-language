//반복 구조를 이용하여 1~10까지의 숫자들의 제곱표를 만드는 예제
#include<stdio.h>
int main(void){
	int i=1;
	
	while(i<=10){
		printf("\b %d %d\n",i,i*i);
		i++;
	}
	
	return 0;
} 
