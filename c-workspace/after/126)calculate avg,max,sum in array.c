//평균값,최댓값,전체의 합을 포인터로 받아서 계산하기
#include<stdio.h>
void get_stat(double A[],double *p_avg,double *p_max,double *p_sum);

int main(void){
    double S[5] = {63.0,47.0,28.0,32.0,10.0};
    double avg,max,sum;

    get_stat(S,&avg,&max,&sum);

    printf("주어진 배열의 평균값은 %f입니다\n",avg);
    printf("주어진 배열의 최댓값은 %f입니다\n",max);
    printf("주어진 배열의 전체합은 %f입니다\n",sum);

    return 0;
}

void get_stat(double A[],double *p_avg,double *p_max,double *p_sum){
    *p_sum = 0;
    int i;

    for(i=0;i<5;i++)
       *p_sum += *(A + i -1);
    
    *p_avg = *p_sum/5.0;

    for(i=0;i<5;i++){
        if(*(A + i -1)>*(A + i))
            *p_max = *(A + i -1);
        else
            *p_max = *(A + i);
    }
}