//원본 배열의 변경
#include<stdio.h>
#define SIZE 7

void square_array(int a[],int size);
void print_array(int a[],int size);
void square_elements(int n);

int main(void){
	int list[SIZE] = {1,2,3,4,5,6,7};
	
	print_array(list,SIZE);
	square_array(list,SIZE);
    print_array(list,SIZE);
	
	printf("%3d\n",list[6]);
	square_elements(list[6]);
	printf("%3d\n",list[6]);
	
	return 0;
}

void square_array(int a[],int size){
	int i;
	
	for(i=0;i<size;i++)
	   a[i] = a[i]*a[i];
}

void square_elements(int n){
	n =  n*n;
}

void print_array(int a[],int size){
	int i;
	
	for(i=0;i<size;i++)
	   printf("%3d",a[i]);
	printf("\n");
}

 
