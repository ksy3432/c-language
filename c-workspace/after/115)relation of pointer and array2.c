//포인터와 배열의 관계 - 연산
#include<stdio.h>
int main(void){
    int a[] = {10,20,30,40,50};

    printf("a = %u\n",a);
    printf("a + 1 = %u\n",a+1);
    printf("*a = %u\n",*a); //배열의 첫번째 원소의 값을 가르킨다
    printf("*(a + 1) = %u\n",*(a+1)); //배열의 두번째 원소의 값을 가르킨다

    return 0;
}