//알파벳 소문자를 입력받아 대문자로 바꾸는 프로그램
#include<stdio.h>
int main(void){
	char ch;
	
	while(1){
		printf("소문자를 입력하세요 :");
		scanf("%c",&ch);
		
		if(ch == 'Q')
		  break;
		
		if(ch < 'a' || ch > 'z')
		  continue;
		 
		ch -= 32;
		printf("변환된 대문자는 %c입니다\n",ch);
	}
	
	return 0;
} 
