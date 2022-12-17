//void형 포인터의 올바른 예
#include<stdio.h>

int main(void){
    int a[] = {10,20,30,40,50};
    void *vp;
    int i;

    vp = a;
    vp = &a[2];

    *(int *)vp = 35;

    for(i=0;i<5;i++)
       printf("%d\n",&a[i]);
    printf("\n");

    printf("%d\n",vp);

    return 0;
}