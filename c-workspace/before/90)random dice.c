//주사위를 던져서 각 면이 나오는 횟수 출력 
#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i;
	int freq[6];
	
	for(i=0;i<10000;i++)
	  ++freq[rand()%6];
	  
	printf("=================\n");
	printf("  면         빈도\n");
	printf("=================\n");
	
	for(i=0;i<6;i++)
	   printf("%3d          %3d\n",i,freq[i]);
	   
	return 0; 
	} 
