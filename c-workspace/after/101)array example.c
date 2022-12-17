//각 월의 일수 출력하기
#include<stdio.h>
#define i 12
int main(void){
    int days[] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int n;

    for(n=0;n<i;n++)
       printf("%d월은 %d일까지 있습니다\n",n+1,days[n]);
    
    return 0;
}