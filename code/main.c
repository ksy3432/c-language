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
	
	printf("\n�Լ��� ȣ��� Ƚ�� = %d\n",call_count);
	
	return 0;
}

 
