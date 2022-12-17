//이진탐색
#include<stdio.h>
#define SIZE 10

int binary_search(int list[],int key,int n);

int main(void){
    int key;
    int seq[SIZE] = {1,2,3,4,5,6,7,8,9};

    printf("탐색할 값을 입력하시오 :");
    scanf("%d",&key);
    printf("탐색 결과 = %d\n",binary_search(seq,key,SIZE));
    
    return 0;
    }

int binary_search(int list[],int key,int n){
    int low,high,middle;

    low = 0;
    high = n-1;

    while(low <= high){
        middle = (high + low)/2;
        if(key == list[middle])
           return middle;
        else if (key > list[middle])
           low = middle + 1;
        else
           high = middle - 1;}
    
    return -1;   
    }