//행렬의 덧셈을 2차원 행렬로 표현하기
#include<stdio.h>
#define array1 3
#define array2 3

int main(void){
    int A[array1][array2] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[array1][array2] = {{11,12,13},{14,15,16},{17,18,19}};
    int C[array1][array2];
    int a1,a2;

    for(a1=0;a1<array1;a1++)
       for(a2=0;a2<array2;a2++)
         C[a1][a2] = A[a1][a2] + B[a1][a2];
    
    for(a1=0;a1<array1;a1++)
      {for(a2=0;a2<array2;a2++)
           printf(" %d",C[a1][a2]);
        printf("\n");} 

    return 0;
}