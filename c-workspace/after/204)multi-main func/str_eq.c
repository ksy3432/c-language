#include "str_eq.h"
#include<string.h>
#define SIZE 10


int str_eq(char s[SIZE],char t[SIZE]);

int str_eq(char s[SIZE],char t[SIZE]){
    int i,result;

   if(strcmp(s,t) == 0)
      result = 1;
   else
      result = 0;
    
   return result;
}


