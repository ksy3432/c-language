/*인치를 센티미터로 변환시키는 프로그램*/
#include<stdio.h>
int main(void){
	int inch;
	int centimeter;
	
	printf("인치값을 입력하시오 :");
	scanf("%d",&inch);
	
	centimeter = 2.54 * inch;
	
	printf("%d 인치는 %d 센티미터와 같다\n",inch,centimeter);
	
	return 0; 
}
