//포인터의 증감 연산 2
#include<stdio.h>

int main(void){
    int i = 10;
    int *pi = &i;

    printf("i = %d, pi = %p\n",i,pi);
    (*pi)++;                            //pi가 가르키는 값 증가
    printf("i = %d, pi = %p\n",i,pi);

    printf("i = %d, pi = %p\n",i,pi); 
    *pi++;                              //pi를 증가
    printf("i = %d, pi = %p\n",i,pi);

    return 0;

}