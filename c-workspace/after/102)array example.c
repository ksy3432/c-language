//랜덤으로 배열을 만들고 최솟값과 최댓값을 구하기
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define list 10

int main(void){
    int s[list];
    int k,min,max,n;
    srand((unsigned int)time(NULL));

    for(k=0;k<10;k++)
        s[k] = (rand()%100) +1;


    for(k=0;k<9;k++){
         if(s[k] > s[k+1])
            max = s[k];
         else
            max = s[k+1];
     }

     printf("가장 큰 수는 %d 입니다\n",max);

    for(k=0;k<9;k++){
         if(s[k] < s[k+1])
            min = s[k];
         else
            min = s[k+1];
     }

    printf("가장 작은 수는 %d 입니다\n",min);

    return 0;
}