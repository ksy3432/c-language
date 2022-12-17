//break를 이용하여 반복문을 탈출한다 
#include<stdio.h>
int main(void){
	float grade,sum = 0.0,average;
	int count = 0;
	
	while(1){
		printf("학생의 성적을 입력하시오 :");
		scanf("%d",&grade);
	
		if(grade < 0.0)
		   break;
			
		count++;
		sum += grade;
		
	}
	
	average = sum / count;
	printf("학생들의 성적은 %f입니다\n",average);
	
	return 0;
}
