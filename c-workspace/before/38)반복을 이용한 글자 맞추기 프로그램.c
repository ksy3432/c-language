//반복을 이용한 글자 맞추기 프로그램
#include<stdio.h>
int main(void){
	char ch;
	char answer = 'K';
	int count = 0;
	
	do
	{
	  printf("정답을 입력하세요 :");
	  scanf("%c",&ch);
	  count++; 
	  
	  if(ch < answer)
	   printf("제시된 문자보다 아스키코드 값이 낮습니다\n");
	   
	  if(ch > answer)
	   printf("제시된 문자보다 아스키코드 값이 높습니다\n");
	}
	while(ch != answer);
	
	printf("정답입니다!%d번만에 성공하셨습니다!\n",count);
	return 0;
} 
