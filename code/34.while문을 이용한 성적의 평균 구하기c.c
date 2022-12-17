//while문을 이용한 성적의 평균 구하기
#include<stdio.h>
int main(void){
	int grade,n;
	float sum,average;
	
	n = 0;
	sum = 0;
	grade = 0;
	
	printf("성적 입력을 중단하려면 음수를 입력하시오\n");
	
	while(grade >= 0){
		printf("성적을 입력하시오 :");
		scanf("%d",&grade);
		
		sum += grade;
		n++; 
	}
	sum = sum - grade;
	n--;
	average = sum/n;
	printf("성적의 평균은 %f입니다",average);
	
	return 0;
	
} 
