#include<stdio.h>
int main(void){
	int computer_science,c_language,english,general_math,average;
	
	printf("컴퓨터 개론 과목의 점수를 입력하시오 : ");
	scanf("%d",&computer_science);
	
	printf("c언어 프로그래밍 과목의 점수를 입력하시오 : ");
	scanf("%d",&c_language);

    printf("영어 과목의 점수를 입력하시오 : ");
	scanf("%d",&english);
	
	printf("일반 수학 과목의 점수를 입력하시오 : ");
	scanf("%d",&general_math);
	
	average = (computer_science+c_language+english+general_math)/4;
	printf("평균 점수는 %d 입니다",average);
	
	return 0; 
			
}
