#include<stdio.h>
#include<string.h>

int main(void){
    char s[5][15];

    for(int i=0;i<5;i++){
        for(int j=0;j<15;j++)       //문자열 초기화
            s[i][j] = 0;
    }

    for(int i=0;i<5;i++){       //문자열 생성
        scanf("%s",s[i]);
    }

    for(int j=0;j<15;j++){       //세로로 출력
        for(int i=0;i<5;i++){
            if(s[i][j] != 0)
              printf("%c",s[i][j]);
        }
    }

    return 0;
}