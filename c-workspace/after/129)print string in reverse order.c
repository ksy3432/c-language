//역순으로 문자열을 출력하기
#include<stdio.h>

int main(void){
    char str[6] = "seoul";
    char dst[6];
    int i;

    printf("원래 문자열 = %s\n",str);

    i=0;
    while(str[i] != '\0'){
        dst[i] = str[4-i];
        i++;
    }
    dst[i] = '\0';

    printf("역순 문자열 = %s\n",dst);

    return 0;
}