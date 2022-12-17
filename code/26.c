//사용자로부터 하나의 문자를 입력받아 대문자는 소문자로 소문자는 대문자로 바꾸는 프로그램
#include<stdio.h>
int main(void){
	char ch;
	
	printf("문자를 하나 입력하시오 : ");
	scanf("%c",&ch);
	
	if(ch >= 'A' &&  ch <= 'Z'){
		printf("입력하신 문자인 %c는 대문자이고 %c로 바뀝니다",ch,ch-'A'+'a');
	}
	else if(ch >= 'a' && ch <= 'z'){
		printf("입력하신 문자인 %c는 소문자이고 %c로 바뀝니다",ch,ch+'A'-'a');
		}
	else {
		printf("잘못된 입력입니다.문자를 입력해주세요");
	}
			
	return 0; 
}
 
