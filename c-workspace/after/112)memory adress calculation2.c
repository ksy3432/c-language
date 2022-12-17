//포인터끼리의 연산
#include<stdio.h>
int main(void){
    int i,j,*p1,*p2;

    p1 = &i;
    p2 = &j;

    if(p1 != NULL)
       printf("p1의 값이 NULL이 아님\n");

    if(p1 != p2)
       printf("p1과 p2가 같지 않음\n");

    if(p1 < p2)
       printf("p1이 p2보다 앞에 있음\n");
    else
       printf("p1이 p2보다 뒤에 있음\n");

    return 0; 
}