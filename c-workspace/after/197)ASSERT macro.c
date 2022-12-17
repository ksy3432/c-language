#include<stdio.h>

#define DEBUG

#ifdef DEBUG
#define ASSERT(exp) { if (!(exp)) \
    {printf("가정(" #exp ")이 소스파일 %s %d번째 줄에서 실패.\n"\
    ,__FILE__,__LINE__),exit(1);}}
#else
#define ASSERT(exp)
#endif

int main(void){
    int sum;

    ASSERT(sum == 0);

    return 0;
}