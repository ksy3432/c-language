//사칙연산을 지원하는 연산기 
#include<stdio.h>

int plus(int x,int y);
int minus(int x,int y);
int multiply(int x,int y);
int divide(int x,int y);

count = 0;
int n;

int main(void){
	calculater(5);
}

int calculater(int n){
	int a,b;
	char op;
	
	printf("연산식을 입력하시오 :");
	scanf("%d%c%d",&a,&op,&b);
	
	if(op == '+')
	  plus(a,b);
	else if(op == '-')
	  minus(a,b);
	else if(op == 'x')
	  multiply(a,b);
	else if(op == '%')
	  divide(a,b);
	else
	  printf("지원되는 연산자가 아닙니다\n연산을 멈춥니다");
	  
    return 0;
}


int plus(int x,int y){
	if(x!=0 && y!=0)
	  {
	  printf("계산 결과: %d\n",x+y);
	  static count;
	  count++;
	  printf("덧셈의 계산 횟수 :%d\n",count);
	  n--;
	  return calculater(n-1);}
}

int minus(int x,int y){
	if(x!=0 && y!=0)
	  {
	  printf("계산 결과 :%d\n",x-y);
	  static count;
	  count++;
	  printf("뺄샘의 총 계산 횟수 :%d\n",count);
	  n--;
	  return calculater(n-1);}
}

int multiply(int x,int y){
	if(x!=0 && y!=0)
	  {printf("계산 결과 :%d\n",x*y);
	  static count;
	  count++;
	  printf("곱셈의 총 계산 횟수 :%d\n",count);
	  n--;
	  return calculater(n-1);
	  }
}

int divide(int x,int y){
	if(x!=0 && y!=0)
	 { printf("계산 결과 :%d\n",x/y);
	  static count;
	  count++;
	  printf("나눗셈의 총 계산 횟수 :%d\n",count);
	  n--;
	  return calculater(n-1);
	 }
}
