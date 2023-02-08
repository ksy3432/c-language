#include<stdio.h>

int main(void){
    int a,b,n;
    int x;

    scanf("%d %d %d",&a,&b,&n);
    
    for(int i=0;i<n;i++){
        a %= b;
        a *= 10;
        x = a/b;
    }

    printf("%d",x);
    
    return 0;
}