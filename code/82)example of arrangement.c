#include<stdio.h>
int main(void){
	int grade[10] = {31,63,62,84,65,25,79,84,51,45};
	int i;
	
	printf("===================\n");
	printf("  ÀÎµ¦½º      °ª\n");
	printf("===================\n");
		
	for(i=0;i<10;i++)
	  printf("%5d      %5d\n",i,grade[i]);
	  
	return 0;
}
