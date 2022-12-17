//파일 열고 닫기
#include<stdio.h>

int main(void){
    FILE *fp = NULL; //파일을 생성하고 초기화

    fp = fopen("sample.txt","w");

    if(fp == NULL)
       printf("파일 열기 실패\n");
    else
       printf("파일 열기 성공\n");

    fclose(fp);

    return 0;
}