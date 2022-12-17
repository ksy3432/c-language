//atoi() 함수
#include<stdio.h>
#include<stdlib.h>

int main(void){
    char S[30];
    char t[] = "36.5";
    int i;
    double v;

    printf("정수를 입력하시오: \n");
    gets(S);
    i = atoi(S);
    printf("입력된 정수는 %d입니다\n",i);

    v = atof(t);
    printf("변환된 정수는 %f입니다\n",v);

    return 0;
}