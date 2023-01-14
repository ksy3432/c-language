#include<stdio.h>

int main(void){
    int a,b,n=1,c;

    scanf("%d %d %d",&a,&b,&c);
    
    if((c-b) > 0){
      n = a/(c-b);
      printf("%d\n",n+1);
    }
    else
      printf("-1\n");

    return 0;

}