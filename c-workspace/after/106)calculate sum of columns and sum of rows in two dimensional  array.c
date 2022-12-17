//2차원 배열에서 행과 열의 총합을 구하기
#include<stdio.h>
int main(void){
    int s[3][5] = {{12,56,32,16,98},
                   {99,56,34,41,3},
                   {65,3,87,78,21}};
    int n,m;
    int sum = 1;

    for(n=0;n<3;n++){
       for(m=0;m<5;m++)
          sum += s[n][m];
        printf("%d행의 총합은 %d입니다\n",n+1,sum);}
          

    for(m=0;m<5;m++){
       for(n=0;n<3;n++)
          sum += s[n][m];
        printf("%d열의 총합은 %d입니다\n",m+1,sum);}
          

    return 0;
    
}