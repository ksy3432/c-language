#include<stdio.h>
//#include "forever.h"
#include "print_int.c"
#include "swap.c"
#include "str_eq.c"
#include "divide.c"
//#include "array_sort.c"
#define SIZE 10

int main(void){
   int x,y;
   //int array[SIZE] = {1,2,3,4,5,6,7,8,9,10};
   char s[SIZE] = {"default"};
   char t[SIZE] = {"default"};
   int i;

   x = 10;
   y = 2;

   print_int(x);
   printf("뒤바뀐 값은 %d입니다\n",swap(x,y));
   printf("x/y = %d\n",divide(x,y));
   printf("초기화된 배열\n");

   /*for(i=0;i<SIZE;i++){
       printf("%d",array_sort(array,SIZE,0)[i]);}*/
    
    
   if(str_eq(s,t) == 1)
       printf("success\n");
   else
       printf("fail\n");

    return 0;
}