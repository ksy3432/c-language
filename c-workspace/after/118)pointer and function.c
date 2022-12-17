//포인터와 함수
#include<stdio.h>
void swap(int *px, int *py);
int main(void){
    int a = 100,b = 200;

    printf("main() a = %d b = %d\n",a,b);
    swap(&a,&b);
    printf("main() a = %d b = %d\n",a,b);

    return 0;
}

void swap(int *px, int *py){
    int tmp;

    printf("swap() a = %d b = %d\n",*px,*py);

    tmp = *px;
    *px = *py;
    *py = tmp;

    printf("swap() a = %d b = %d\n",*px,*py);
}