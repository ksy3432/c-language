//swap(int x,int y) 함수 실행
#include "swap.h"

int swap(int x,int y){
    int dept;

    dept = x;
    x = y;
    y = dept;

    return y;
}