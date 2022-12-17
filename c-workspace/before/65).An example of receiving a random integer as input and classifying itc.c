//정수를 입력받아 분류하는 함수
#include<stdio.h>
#include<stdlib.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void){
	int n;
	
	printf("정수를 입력하시오 :");
	scanf("%d",&n);
	
	switch(even(n)){
		case 0:
			printf("주어진 정수는 홀수입니다\n");
			break;
		case 1 :
			printf("주어진 정수는 짝수입니다\n");
			break;
	}
	
	printf("주어진 정수의 절대값은 %d입니다\n",absolute(n));
	
	if(sign(n)<0)
	   printf("주어진 정수는 음수입니다\n");
	else if(sign(n)==0)
	   printf("주어진 정수는 0입니다\n");
	else if(sign(n)>0)
	   printf("주어진 정수는 양수입니다\n");
	   
	return 0; 
} 

int even(int n){
	if(n%2 == 0)
       n = 1;
   	else if(n%2 == 1)
       n = 0;
       
    return n;
}

int absolute(int n){
	return abs(n);
}

int sign(int n){
	if(n<0)
	  n = -1;
	else if(n==0)
	  n = 0;
	else if(n>0)
	  n = 1;
	  
    return n;
}
