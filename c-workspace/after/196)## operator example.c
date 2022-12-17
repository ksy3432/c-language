//##연산자의 활용
#include<stdio.h>
#define MAKE_NAME(n) v##n
#define PRINT(n) printf("v"#n "= %d\n", v##n);

int main(void){
    int MAKE_NAME(1) = 10;
    int MAKE_NAME(2) = 20;

    PRINT(1);
    PRINT(2);

    return 0;
}