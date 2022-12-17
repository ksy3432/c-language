//비트 매크로
#include<stdio.h>
#define SET_BITS(w,n,v) (((unsigned int)(w) & ~((v)<<(n))))
#define GET_BITS(w,n) (((unsigned int)(w) >> (n))&(n))
#define SIZE 10

int main(void){
    int w[SIZE]= {1,2,3,4,5,6,7,8,9,10};
    int n = 2;
    int v = 17;
    int i;

    //SET_BITS(w,n,v);
    printf("%d\n",SET_BITS(w,n,v));

    for(i=0;i<SIZE;i++)
       printf(" %d,",w[i]);

    printf("\n%d",GET_BITS(w,n));

    return 0;
}
