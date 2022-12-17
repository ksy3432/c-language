//배열을 매개변수로 사용하는 경우
#include<stdio.h>
#define students 5

int get_average(int score[],int n);

int main(void){
	int grade[students] = {1,2,3,4,5};
	int avg;
	
	avg = get_average(grade,students);
	
	printf("평균은 %d입니다\n",avg);
	
	return 0;
}

int get_average(int score[],int n){
	int i;
	int sum = 0;
	
	for(i=0;i<n;i++)
	   sum += score[i];
	   
	return sum/n;
}
