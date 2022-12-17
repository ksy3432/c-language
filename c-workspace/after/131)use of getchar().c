//getchar()의 사용
#include<stdio.h>

int main(void){
    int ch;

    while(1){
        ch = getchar();
        if(ch == 'q') break;
        putchar(ch);
    }

    return 0;
}