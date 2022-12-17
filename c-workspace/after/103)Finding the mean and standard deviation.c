//n개의 자료를 입력받아 평균과 표준편차를 구하는 프로그램
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int n;
    printf("입력받을 자료의 수를 입력하시오(단,20개를 초과할 수 없다) :");
    scanf("%d",&n);
    
    int avg,sd,k,sum1,sum2;
    int s[n];
    srand((unsigned int)time(NULL));

    sum1 = 0;

    for(k=0;k<n;k++)
      s[k] = rand()%100 + 1;

    for(k=0;k<n;k++)
      sum1 += s[k];

    avg = sum1/n;

    sum2 =0;

    for(k=0;k<n;k++)
        sum2 += (s[k]-avg)*(s[k]-avg);
    
    sd = sum2/n;

    printf("평균은 %d 입니다\n",avg);
    printf("표준편차는 %d 입니다\n",sd);

    return 0;    
}