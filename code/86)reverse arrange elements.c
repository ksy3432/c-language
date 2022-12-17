//배열을 입력받아 역순으로 출력하는 프로그램
#include<stdio.h>
int main(void){
	int i;
	int arrange[5];
	
	for(i=0;i<5;i++){
		printf("배열의 %d번째 원소를 입력하시오 :",i+1);
		scanf("%d",&arrange[i]);
	}
	
	printf("입력된 배열을 역순으로 출력하면  {");
	
	for(i=4;i>=0;i--)
	    printf(" %d",arrange[i]);
	    
	printf(" } 입니다.");
	 
	return 0;
} 
