//sprint()와 sscanf()의 사용예제
#include<stdio.h>

int main(void){
    char S1[] = "100";
    char S2[] = "12.93";
    char buffer[100];

    int i;
    double d;
    double result;

    sscanf(S1,"%d",&i);
    sscanf(S2,"%lf",&d);

    result = i + d;

    sprintf(buffer,"%f",result);
    printf("연산 결과는 %s입니다\n",buffer);

    return 0;
}