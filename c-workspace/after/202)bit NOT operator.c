//비트 부정 연산자
#include<stdio.h>

int main(void){
    int x = 9;
    int y = ~x;
    int z = x & y;

    printf("%08x(%d) \n",z,z);

    return 0;
}