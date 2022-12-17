//이중포인터를 이용하여 2차원 배열을 다른 2차원 배열으로 복사
#include<stdio.h>
#include<string.h>
#define ROWS 2
#define COLS 2
#define SIZE 10

void array_copy(char **new[ROWS][COLS],char **s[ROWS][COLS]);

int main(void){
    char *s[ROWS][COLS] = {
        {"default","default"},
        {"default","default"}
        };
    char *new[ROWS][COLS];
    char choose[SIZE];
    int i,n;

    for(i=0;i<ROWS;i++){
        for(n=0;n<COLS;n++){
            memset(new[i][n],"0",COLS);
        }
    }

    for(i=0;i<ROWS;i++){
        for(n=0;n<COLS;n++){
            printf("바꿀 글자를 입력하시오 :");
            gets(choose);
            strcpy(**new,choose);
        }
    }

    array_copy(&*new,&*s);

    for(i=0;i<ROWS;i++){
        for(n=0;n<COLS;n++){
            printf("%s",s[i][n]);
        }
        printf("\n");

    return 0;
    }
}

void array_copy(char **new[ROWS][COLS],char **s[ROWS][COLS]){
    char *(new_p),*(new_endp),*(s_p),*(s_endp);
    int i,n;

    *new_p = &*new[i][0];
    *new_endp = &*new[i][COLS-1];
    *s_p = &*s[i][0];
    *s_endp = &*s[i][COLS-1];

    for(i=0;i<ROWS;i++){
        for(n=0;n<COLS;n++){
            *(s_p) = *(new_p);
            **s[n][i] = *(s_p);
        }
    }
         
}
