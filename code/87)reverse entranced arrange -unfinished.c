//재귀호출과 배열을 사용하여 입력한 글자를 역순으로 출력하는 프로그램
#include<stdio.h>

int letter(void);
int reverse(void);
int convert(int n);
int number = 5;
int i;

int main(void){
	convert(3);
}

int convert(int n){
		
	printf("입력한 배열은 { ");
	
	for(i=0;i<number;i++)
	  printf(" %c",letter[i]);
	
	printf(" }입니다.");
	
	printf("입력한 배열은 { ");
	
	for(i=0;i>=number;i++)
	   printf(" %d",reverse[i]);
	
	printf(" }입니다.");
	
	return 0;
	
}

int letter(void){
	char ch[number];
	
	for(i=0;i<number;i++){
	printf("%d번째 글자를 입력하시오 :",i+1);
	scanf("%c",ch[i]);}
	   
	return ch[number];
}

int reverse(void){
	char reverse_ch[number];
	
	for(i=number-1;i>=0;i--)
	   reverse_ch[i]
	   
	return reverse_ch[number];
}
