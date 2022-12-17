//문자열의 일부를 제거하는 프로그램
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 30
 
void remove_string(char *s,int start,int n);
 
int main(void){
    char s[SIZE];
 
    printf("변형할 배열을 입력하시오: ");
    gets(s);
 
    printf("\n기존의 배열은 %s 입니다\n",s);
    remove_string(s,7,8);
    printf("변형된 배열은 %s 입니다\n",s);
 
    return 0;
}
 
void remove_string(char *s,int start,int n){
    int i = start;
 
/*    while(1)
        if(i<n){
           strcpy(s+i-1,s+i+n); 
           i++;}
        else
           break;   */

    for(i=start;i<(start+n);i++)
        strcpy(s+i-1,s+i+n);
  }