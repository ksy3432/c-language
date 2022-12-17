#include<stdio.h>

int main(void)
{
    int x;
    int y;
    int sum;

    printf("1번째 숫자를 입력하시오 : ");
    scanf("%d",&x);

    printf("2번째 숫자를 입력하시오 : ");
    scanf("%d",&y);

    sum = x + y;
    printf("두 숫자의 합은 :%d",sum);
    
    
    return 0;

}
