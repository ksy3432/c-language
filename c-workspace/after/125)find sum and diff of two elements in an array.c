//배열에 들어 있는 무작위인 두 원소의 합과 차를 구현하기
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void get_sum_diff(int A[],int n,int *p_sum,int *p_diff);

int main(void){
    int S[5] = {35,24,19,13,3};
    int sum,diff;
    srand((unsigned int)time(NULL));

    get_sum_diff(S,5,&sum,&diff);

    printf("배열에 존재하는 무작위인 두 원소의 합은 %d입니다\n",sum);
    printf("배열에 존재하는 무작위인 두 원소의 차는 %d입니다\n",diff);

    return 0;
}

void get_sum_diff(int A[],int n,int *p_sum,int *p_diff){
    *p_sum = 0;
    *p_diff = 0;
    int i,k;

    i = rand()%4;
    for(k=i;k<(i+2);k++)
       *p_sum += *(A + k -1);

    for(k=i;k<=i;k++)
       *p_diff += *(A + k -1) - *(A +  k);
}