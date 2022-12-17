//2차 문자배열 예제
#include<stdio.h>
#include<string.h>

int main(void){
    int i;
    char buffer[10];
    char menu[5][10] = {
        "init",
        "open",
        "close",
        "read",
        "write"
    };

    printf("메뉴를 입력하시오\n");
    scanf("%s",buffer);

    for(i=0;i<5;i++){
       if(strcmp(buffer,menu[i]) == 0)
           printf("%d번째 메뉴를 입력했습니다\n",i+1);
    }
    return 0;
}