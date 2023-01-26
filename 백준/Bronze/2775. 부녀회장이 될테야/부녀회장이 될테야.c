#include<stdio.h>

int main(void){
    int k,n,i,j,t;
    int s[15][15];

    scanf("%d",&t);

    for(int l=0;l<t;l++){
        scanf("%d",&k);
        scanf("%d",&n);
        
        for(i=0;i<15;i++){
            for(j=0;j<15;j++){
               s[i][j] = 0;
           } 
        }   //s[i][j] 초기화

        for(i=0;i<15;i++){
           s[0][i] = i+1;
           s[i][0] = 1;
        }  //각 층의 1호를 1로 고정하고 0층의 모든 호수를 사람수로 설정하기

        for(i=1;i<15;i++){
           for(j=1;j<14;j++){
              s[i][j] = s[i-1][j] + s[i][j-1];
            }
        }
        printf("%d\n",s[k][n-1]);
    }

    return 0;
}