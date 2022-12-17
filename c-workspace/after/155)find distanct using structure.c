//사용자로부터 서로 다른 두 점의 좌표를 입력받아 거리를 구하는 프로그램을 구조체를 이용하여 구현하기
#include<stdio.h>
#include<math.h>

struct point{
    int x;
    int y;
};

int main(void){
    struct point p1,p2;
    int xdiff,ydiff;
    double dist;

    printf("첫번째 점의 좌표를 입력하시오 : ");
    scanf("%d %d",&p1.x,&p1.y);

    printf("두번째 점의 좌표를 입력하시오 : ");
    scanf("%d %d",&p2.x,&p2.y);

    xdiff = p2.x - p1.x;
    ydiff = p2.y - p1.y;

    dist = sqrt(xdiff*xdiff + ydiff*ydiff);

    printf("주어진 두 점 사이의 거리는 %f입니다\n",dist);
   
    return 0;
}