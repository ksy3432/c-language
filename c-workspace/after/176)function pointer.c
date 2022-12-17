//함수 포인터 실습
#include<stdio.h>

int add(int ,int);       //함수 원형 정의
int sub(int, int);

int main(void){
    int result;
    int (*pf)(int,int);  //함수 포인터 정의
    
    pf = add;
    result = pf(10,20);
    printf("10 + 20 = %d\n",result);

    pf = sub;
    result = pf(20,10);
    printf("20 - 10 = %d\n",result);

    return 0;
}

int add(int x,int y){
     return x+y;
}

int sub(int x, int y){
     return x-y;
}