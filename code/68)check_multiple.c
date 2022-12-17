//배수 확인 프로그램
#include<stdio.h>

int get_integer(void);
int check_multiple(int x,int y);

int main(void){
	int a,b;
	
	a = get_integer();
	b = get_integer();
	
	switch(check_multiple(a,b)){
		case 0:
			printf("%d는 %d의 배수입니다\n",b,a);
			break;
		case 1:
			printf("%d는 %d의 배수가 아닙니다\n",b,a);
			break;
		default :
		    printf("잘못된 접근입니다");
			break; 
	}
	
	return 0;
} 

int get_integer(void){
	int n;
	
	printf("정수를 입력하시오 :");
	scanf("%d",&n);
	
	return n;
}

int check_multiple(int x,int y){
	int result;
	
    if (y % x == 0)
       result = 0;
    else
       result = 1;
       
    return result;
}
