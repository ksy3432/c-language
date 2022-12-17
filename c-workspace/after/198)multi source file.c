//다중 소스 파일
#include<stdio.h>
#include "power.h"

int main(void){
    int x,y;

    printf("x값을 입력하시오 :");
    scanf("%d",&x);
    printf("y값을 입력하시오 :");
    scanf("%d",&y);
    printf("%d의 %d제곱 = %f\n", x, y, power(x,y));

    return 0;
}