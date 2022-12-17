//가장 성적이 낮은 학생을 구하는 프로그램
#include<stdio.h>
int main(void){
	int grade[10];
	int i,min;
	
	for(i=0;i<10;i++){
		printf("%d번째 학생의 성적을 입력하시오 :",i+1);
		scanf("%d",&grade[i]); 
	}
	
	min = grade[0];
	
	for(i=1;i<10;i++){
		if(grade[i] < min)
		   min = grade[i]; 
	}
	
	printf("가장 낮은 학생의 성적은 %d입니다",min);
	
	return 0;
	
} 
