//문자열을 입력받아 모든 공백문자를 제거하기
//??????왜 이 파일만 실행파일이 안 만들어지고 악성코드에 감염되었다고 나오지...?일단 패스
#include<stdio.h>
#include<ctype.h>

int delete(const char *A);

int main(void){
    char s[50],a[50];
    int i;

    printf("문자열을 입력하시오 :");
    scanf("%s", s);
    
    for(i=0;i<50;i++)
        if(isalnum(s[i]) != 0)
           a[i] = s[i];
               
    printf("공백이 제거된 입력받은 문자열은 %s입니다\n",a);

    return 0;
}
