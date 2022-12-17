//암호화와 복호화
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 100

int main(void){
    int i,ch;
    char s[SIZE];

    printf("1.암호화 \n2.복호화 \n");
    printf("메뉴 선택 :");
    scanf("%d",&ch);

    printf("문자열을 입력하시오 :");
    gets(s);

    printf("\n입력한 문자열은 %s입니다\n",s);

    
    if(ch == 1){
        for(i=0;i<strlen(s);i++){
            if(isalnum(s[i]) != 0){
                if(s[i] >= 97 && s[i] <= 119)
                    s[i] -= 29;
                else if(s[i] >= 120 && s[i] <= 90)
                    s[i] -= 55;
            }
        }
    printf("암호화된 문자열은 %s입니다\n",s);}

    else if(ch == 2){
        for(i=0;i<strlen(s);i++){
            if(isalnum(s[i]) != 0){
                if(s[i] >= 68 && s[i] <= 90)
                    s[i] += 29;
                else if(s[i] >= 65 && s[i] <= 67)
                    s[i] += 55;
            }
        }
    printf("암호화된 문자열은 %s입니다\n",s);
    }
    return 0;
}