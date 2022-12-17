#include<stdio.h>
int main(void){
	int vote;
	
	printf("1~10까지의 수 중 하나를 입력하세요 :");
	scanf("%d",&vote);
	
	switch(vote){
		case 2:
			printf("축하합니다!1등에 당첨되었습니다!");
			break;
		case 5:
			printf("축하합니다!2등에 당첨되었습니다!");
			break;
		case 7:
			printf("축하합니다!3등에 당첨되었습니다!");
			break;
		default:
		    printf("아쉽게도 꽝이군요!다음 기회를 노려보세요!");
			break; 
	} 
	return 0; 
}
