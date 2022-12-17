//문자열 안에 들어 있는 단어의 개수를 세는 프로그램
#include<stdio.h>
#include<ctype.h>

int count_word(const char *S);

int main(void){
    printf("%d\n",count_word("where there is a will there is a way"));

    return 0;
}

int count_word(const char *S){
    int i,wc = 0, waiting = 1;

    for( i = 0; S[i] != NULL; ++i)
       if(isalpha(S[i])){
           if(waiting){
               wc++;
               waiting = 0;
           }
       }
       else
           waiting = 1;

    return wc;
}