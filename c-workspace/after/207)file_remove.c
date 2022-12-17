//파일 삭제
#include<stdio.h>

int main(void){
    if(remove("sample.txt") == -1)
       printf("sample.txt를 삭제할 수 없습니다\n");
    else
       printf("sample.txt를 삭제했습니다\n");

    return 0;
}