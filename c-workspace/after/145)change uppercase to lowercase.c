//문자열을 사용자로부터 받아서 대문자와 소문자를 서로 바꾸기
#include<stdio.h>
#include<ctype.h>
#include<conio.h>

int main(void){
    int enter;

    while(1){
        printf("문자를 하나 입력하시오 : ");
        enter = getchar();

        if(enter == 'q')
            break;
        else{
            if(isupper(enter) != 0)
                putchar(tolower(enter));
            else if(islower(enter) != 0)
                putchar(toupper(enter));
        }
    }
    
    return 0;
}