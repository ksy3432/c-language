//문자 처리 라이브러리 함수
#include<stdio.h>
#include<ctype.h>

int main(void){
    int c;

    while((c = getchar()) != EOF){
        if(islower(c))
          c = toupper(c);
        putchar(c);
    }
    return 0;
}