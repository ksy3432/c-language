//학생들의 성적을 구하는 프로그램 - (a) 변수를 각각 설정하여 알고리즘 만들기
#include<stdio.h>
int main(void){
	int g1,g2,g3,g4,g5;
	int average;
	
	printf("학생 5명의 성적을 입력하시오 :");
	scanf("%d,%d,%d,%d,%d",&g1,&g2,&g3,&g4,&g5);
	
	average = (g1+g2+g3+g4+g5)/5;
	
	printf("학생들의 평균 성적은 %d입니다\n",average);
	
	return 0; 
} 
