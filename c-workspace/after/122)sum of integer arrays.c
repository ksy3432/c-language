//c[i] = a[i] + b[i]
#include<stdio.h>
void subtract(int *A,int *B,int *C,int n);
int main(void){
    int A[5] = {1,2,3,4,5};
    int B[5] = {6,7,8,9,10};
    int C[5] = {0,0,0,0,0};
    int i;

    printf("더하기 전 C[] = {");
    for(i=0;i<5;i++){
        printf("%d,",C[i]);}
    printf("}\n");

    subtract(A,B,C,i);
    
    printf("더한 후 C[] = {");
    for(i=0;i<5;i++){
        printf("%d,",C[i]);}
    printf("}");
    
    return 0;
}

void subtract(int *A,int *B,int *C,int n){
    int i;

    for(i=0;i<n;i++)
      *(C + i) = *(A + i) + *(B + i);
}
