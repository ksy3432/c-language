//직선 구조체를 이용하여 두 점의 기울기와 절편,중점 구하기
#include<stdio.h>

typedef struct point
{
    int x;
    int y;
} POINT;

typedef struct increment{
    float xdiff;
    float ydiff;
    float lean;
    float absolute_value;
} INC;

typedef struct line
{
    POINT a;
    POINT b;
} LINE;



POINT midpoint(LINE l);
INC inclination(LINE l);
LINE l ={{3,6},{11,22}};



INC inclination(LINE l){
    INC inc;

    inc.xdiff = ((float)l.b.x - (float)l.a.x); //xdiff
    inc.ydiff = ((float)l.b.y - (float)l.a.y); //ydiff
    inc.lean = (float)inc.xdiff/(float)inc.ydiff;
    inc.absolute_value = (float)l.a.y - ((float)l.a.x * (float)inc.lean);

    return (inc);
}

POINT midpoint(LINE l){
    POINT m;

    m.x = (l.a.x + l.b.x)/2;
    m.y = (l.a.y + l.b.y)/2;

    return (m);
}

int main(void){
    /*LINE l;
    POINT m;
    l.a.x = 3;
    l.a.y = 6;
    l.b.x = 11;
    l.b.y = 22;*/


    printf("기울기는 %.1f이고 y절편은 %.1f입니다\n",inclination(l).lean,inclination(l).ydiff);
    printf("중점의 좌표는 (%.1f,%.1f)입니다\n",midpoint(l).x,midpoint(l).y);

    return 0;
}

