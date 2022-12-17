//문자열 안에 존재하는 다른 문자열을 반환하는 프로그램
#include<stdio.h>
#include<ctype.h>
#define SIZE 50

int str_insert(char *s1,char *s2,int pos);

int main(void){
    char s1[SIZE];
    char s2[SIZE];

    printf("기존의 문자열을 입력하시오 :");
    scanf("%s",s1);
    printf("\n덧붙일 문자열을 입력하시오: ");
    scanf("%s",s2);

    printf("원래의 문자열은 %s입니다\n",s1);

    if(str_insert(s1,s2,4) == 0)
       printf("변형된 문자열은 %s입니다\n",s1);
    else
       printf("문자열 변형에 실패하였습니다\n");

    return 0;
}

int str_insert(char *s1,char *s2,int pos){
    int i,count;
    count = 0;

    for(i=pos;i<SIZE;i++){
        if(isalnum(*(s1+i-1)) != 0){
            *(s1+i-1) = *(s2+i-1);
            count = 1;
        }
        else{
            count-1;
            break;
        }
    }

   if(count > 0)
        return 0;
    else
        return 1;

}
