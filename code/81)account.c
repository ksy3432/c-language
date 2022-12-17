//저금통
#include<stdio.h>
#include<stdlib.h>
int save(int amount);
int total = 0;
int amount;

int main(void){
	
   while(1){
	   save(amount);
   }
} 

int save(int amount){
	printf("얼마를 저축하시겠습니까?(-1을 입력하면 종료) :");
	scanf("%d",&amount);
	
	if(amount > 0){
	total += amount;
	printf("총 저축액은 %d입니다\n",total);
    }
    
    else if(amount < 0)
      exit(0);
	
	return 0;
	
}
