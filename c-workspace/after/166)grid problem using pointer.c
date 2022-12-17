#include<stdio.h>

typedef struct point
{
    int x;
    int y;
} POINT;

void quadrant(POINT p){
    if(p.x>0){
        if(p.y>0)
          printf("이 점은 제1사분면 위에 존재합니다\n");
        else
          printf("이 점은 제4사분면 위에 존재합니다\n");
       }

    else{
        if(p.y>0)
          printf("이 점은 제2사분면 위에 존재합니다\n");
        else
          printf("이 점은 제3사분면 위에 존재합니다\n");
        }
}

int equal(POINT p1, POINT p2){
    if(p1.x == p2.x && p1.y == p2.y)
       return 1;
    else
       return 0;
}

int main(void){
    POINT P1 = {3,6};
    POINT P2 = {3,-6};
    POINT P3 = {-3,6};
    POINT P4 = {-3,-6}; 
    POINT P5 = {3,6};

    quadrant(P1);
    quadrant(P2);
    quadrant(P3);
    quadrant(P4);

    if(equal(P1,P2) == 1)
       printf("두 점은 같은 위치에 존재합니다\n");
    else 
       printf("두 점은 서로 다른 위치에 존재합니다\n");

    if(equal(P1,P5) == 1)
       printf("두 점은 같은 위치에 존재합니다\n");
    else 
       printf("두 점은 서로 다른 위치에 존재합니다\n");

    return 0;

}