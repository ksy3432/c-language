#include<stdio.h>

int main(void){
	int x,y;
	char ch;
	
	printf("수식을 입력하시오 :");
	scanf("%d %c %d",&x,&ch,&y);
	
    if(ch == '+')
	 printf("%d %c %d = %d",x,ch,y,x+y);

    else if(ch == '-')
	 printf("%d %c %d = %d",x,ch,y,x-y);
	
	else if(ch == '%')
	 printf("%d %c %d = %d",x,ch,y,x/y);
	 
	else if(ch == 'x')
	 printf("%d %c %d = %d",x,ch,y,x*y);
	 
	else
	 printf("지원되지 않는 기호입니다");
	 
	
	return 0; 
}
