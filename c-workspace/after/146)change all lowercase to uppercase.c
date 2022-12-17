//문자열을 받아서 소문자를 모두 대문자로 바꾸는 프로그램
#include<stdio.h>
#include<ctype.h>

char str_upper(char *s);

int main(void){
    char A[30];

    printf("저장할 문자열을 입력하시오 : \n");
    scanf("%s",A);

    printf("변환되기 전의 문자열은 %s입니다\n",A);

    printf("변환된 문자열은 %s입니다\n",str_upper(A));

    return 0;
}

char str_upper(char *s){
    int i;

    for(i=0;i<30;i++){
         if(islower(*(s-i-1)) != 0)
            *(s-i-1) -= 'a' + 'A'; 
    }
}
