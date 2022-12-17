//변수의 값과 포인터가 가르키는 값
#include<stdio.h>
int main(void){
    int i  = 3000;
    int *p = &i;

    printf("&i = %u\n",&i); //매모리의 주소를 가르킨다
    printf("p = %u\n",p); //참조한 변수의 주소를 가르킨다

    printf("i = %d\n",i); // 변수의 값을 출력한다
    printf("*p = %d\n, *p"); //간접참조한 변수의 값을 출력한다

    return 0;
}