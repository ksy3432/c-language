#include<stdio.h>
#include<string.h>
#define SIZE 1000000

int main(void){
    char s[SIZE];
    int i,count=0,wc;

    gets(s);

    if(s[0] == ' ')
        count--;

    for(i=0;i<strlen(s);i++){
       if(s[i] == ' ')    
          count++;
    }

    if(s[strlen(s)-1] == ' ')
        --count;

    wc = count+1;

    printf("%d\n",wc);

    return 0;
}