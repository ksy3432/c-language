//입력받은 문자열 역순으로 출력하기
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 50

void reverse_order(char *s);

int main(void){
    char s[SIZE];

    printf("문자열을 입력하시오 : ");
    gets(s);

    printf("\n기존 문자열은 %s입니다\n",s);
    reverse_order(&s);
    printf("변형된 문자열은 %s입니다\n",s);

    return 0;
}

void reverse_order(char *s){
    int i,n,m;
    char a[SIZE];

    n = strlen(s);

    for(i=n;i>0;i--){             //이 부분에서 막힌다. 원래 의도는 공백을 기준으로 역순으로 문자열을 쪼개고 a[]에 저장한 후 이를 다시 s[]로 복사하기.
      if(isspace(s) == 0){
        m = strlen(s);
           for(i=0;i<m;i++){
                *(a+n-i-1) = *(s+i-1);
            }
        }
    }

    for(i=0;i<n;i++)
       *(s+i-1) = *(a+i-1);
       
    }