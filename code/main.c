#include<stdio.h>
#include"random.h"

unsigned random_i(void);
double random_f(void);

extern unsigned call_count;

int main(void){
	register int i;
	
	for(i=0;i<10;i++)
	  printf("%d\n",random_i());
	
	for(i=0;i<10;i++)
	  printf("%d",random_f());
	
	printf("\n함수가 호출된 횟수 = %d\n",call_count);
	
	return 0;
}

 
