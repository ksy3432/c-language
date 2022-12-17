//포인터의 배열을 인수로 받아서, 문자열을 알파벳순으로 정렬하는 프로그램
#include<stdio.h>
#include<string.h>

void sort_strings(char *s[],int size);

int main(void){
    int i,n;
    char *s[] = {"mycopy","src","dst"};

    n = sizeof(s);

    printf("-----------원본------------\n");
    
    for(i=0;i<n;i++){
            printf("%s\n",s[i]);
    }

    printf("---------------------------\n");


    printf("------------수정------------\n");

    sort_strings(s,n);

    printf("----------------------\n");

    for(i=0;i<n;i++){
            printf("%s\n",s[i]);
    }

    printf("----------------------\n");

    return 0;
}

void sort_strings(char *s[],int size){
    int i,j;
    char tmp[7];
    
    for(i=0;i<3;i++){
            if(s[i] > s[i+1]){
                for()  //'\0'이 감지되기 전까지 문자열을 통째로 옮긴다
            }
    }


}