//문자를 인수로 받아서 저장한 문자열을 모두 출력하는 프로그램을 이중포인터를 이용하여 구현하기
#include<stdio.h>
#include<string.h>
#define SIZE 10

void pr_str_array(char **dp,int n);

int main(void){
    char *s[SIZE] = {"1","2","3","4","5","6","7","8","9","10"};
    int i;

    pr_str_array(&s,SIZE);

    printf("----------------------------------\n");

    for(i=0;i<SIZE;i++)
        printf("%s\n",*s[i]);

    printf("----------------------------------\n");

    return 0;
}

void pr_str_array(char **dp,int n){
    int i;
    char ch[SIZE];

    for(i=0;i<n;i++){
        printf("%d번째 문자열을 입력하시오 :",i+1);
        scanf("%s",&ch[i]);
    }
    
    strcpy(*dp,ch);
}
