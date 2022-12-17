#include<stdio.h>
#include<string.h>

int main(void){
    char str[10] = "HELLO";
    int i;

    strcpy(str,"WORLD");
    for(i=0;i<10;i++)
       printf("%c",str[i]);

    return 0;
}