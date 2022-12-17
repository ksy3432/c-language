//strtok()의 사용예제
#include<stdio.h>
#include<string.h>

char s[] = "Man is immortal , because he has a soul";
char sep[] = " ,\t\n";
char *token;

int main(void){
    token = strtok( s,sep );

    while(token != NULL){
        printf( "토큰 : %s\n" , token);
        token = strtok( NULL , sep );
    }
}