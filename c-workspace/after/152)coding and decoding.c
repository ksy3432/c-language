//암호화와 복호화
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

int main(void){
    int i,choose;
    char s[80];

    printf("1.암호화 \n2.복호화 \n");
    printf("메뉴 선택 :");
    scanf("%d%*c",&choose);

    printf("문자열을 입력하시오 :\n");
    gets(s);

    
    if(choose == 1){
        for(i=0;i<strlen(s);i++){
            if(isalnum(s[i]) != 0){
                if(s[i] >= 97 && s[i] <= 119)
                    s[i] -= 29;
                else if(s[i] >= 120 && s[i] <= 90)
                    s[i] -= 55;
            }
        }
    printf("암호화된 문자열은 %s 입니다\n",s);}

    else if(choose == 2){
        for(i=0;i<strlen(s);i++){
            if(isalnum(s[i]) != 0){
                if(s[i] >= 68 && s[i] <= 90)
                    s[i] += 29;
                else if(s[i] >= 65 && s[i] <= 67)
                    s[i] += 55;
            }
        }
    printf("복호화된 문자열은 %s입니다\n",s);
    }
    return 0;
}