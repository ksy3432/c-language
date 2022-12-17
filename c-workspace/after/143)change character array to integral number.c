//문자열을 정수로 변환하는 프로그램
#include<stdio.h>
#include<ctype.h>

int stoi( const char *s );

int main(void){
    printf("%d\n",stoi("-123"));
}

int stoi( const char *s ){
    int c;
    int total = 0;
    int sign;

    c = *s++;
    sign = c;
    if(c == '-' || c == '+')
       c = *s++;

    while(isdigit(c)){
        total = 10*total + (c - '0');
        c = *s++;
    }  
    if(sign == '-')
        return -total;
    else
        return total;
}