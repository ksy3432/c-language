#include<stdio.h>
int main(void){
	int x,y;
	char ch;
	
	printf("식을 입력하시오 :");
	scanf("%d %c %d",&x,&ch,&y);
	
	switch(ch){
		case '+':
			printf("%d %c %d = %d\n",x,ch,y,x+y);
			break;
		case '-':
			printf("%d %c %d = %d\n",x,ch,y,x-y);
			break;
		case '%':
			printf("%d %c %d = %d\n",x,ch,y,x/y);
			break;
		case 'x':
			printf("%d %c %d = %d\n",x,ch,y,x*y);
			break;
		default:
			printf("지원되지 않는 연산자입니다");
			break;
	} 
	
	return 0;
}
