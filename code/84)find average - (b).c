//학생들의 평균 성적을 구하는 프로그램 - (b) 배열을 사용하는 예제 
#include<stdio.h>
int main(void){
	int g[5];
	int average,student,i;
	int sum = 0;
	
	printf("학생 수를 입력하시오 :");
	scanf("%d",&student);
	
	for(i=0;i<student;i++){
		printf("학생의 점수를 입력하시오 :");
		scanf("%d",&g[i]);
	}
	
	for(i=0;i<student;i++)
	   sum += g[i];
	   
	average = sum/student;
	
	printf("학생들의 평균 성적은 %d입니다\n",average);
	
	return 0;
	} 
