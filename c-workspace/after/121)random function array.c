//정수인 배열을 난수로 채우는 함수를 작성하기
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void fill(int *A,int n);

int main(void){
    int s[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;

    fill(s,10);

    printf("s[10] = {");
    for(i=0;i<10;i++){
         printf("%d,",s[i]);}
    printf("}");

    return 0;
}

void fill(int *A,int n){
    int i;
    srand(time(NULL));

    for(i=0;i<n;i++)
       *(A + i) = (int)rand() % 100 + 1;
}