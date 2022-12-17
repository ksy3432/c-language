//사각형의 두 꼭짓점을 이용하여 둘레와 넓이 알아내기
#include<stdio.h>
#include<stdlib.h>
struct point{
    int x;
    int y;
};

int main(void){
    struct point p1,p2;
    int length,width,area,round;

    printf("사각형의 꼭짓점의 좌표를 입력하시오:");
    scanf("%d %d",&p1.x,&p1.y);
    printf("사각형의 꼭짓점의 좌표를 입력하시오:");
    scanf("%d %d",&p2.x,&p2.y);

    length = abs(p2.x - p1.x);
    width = abs(p1.y - p2.y);

    area = length * width;
    round = 2*(length + width);

    printf("사각형의 넓이는 %d이고 둘레는 %d입니다\n",area,round);

    return 0;
}
