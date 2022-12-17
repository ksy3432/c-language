//3씩 건너뛰면서 정수의 값을 출력하는 프로그램 -(b)
#include<stdio.h>
int main(void){
	int i=1;
	
	for(i=1;i<100;i++){
		if(i % 3 == 1)
		   {
		   printf("%d\n",i);
		   i++;}
		else if(i % 3 != 1)
		   i++;
	}
	
	return 0;
}
