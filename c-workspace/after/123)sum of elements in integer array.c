//정수형 배열의 원소의 합을 구하여 반환하는 함수
#include<stdio.h>
int sum(int *A,int n);

int main(void){
    int A[10] = {2,4,75,76,87,34,23,1,4,5};
    int i;

    printf("주어진 배열의 원소들의 합은 %d 입니다.\n",sum(A,10));

    return 0;
}

int sum(int *A,int n){
    int i;
    int result = 0;

    for(i=0;i<n;i++)
       result += *(A + i);
    
    return result;
}