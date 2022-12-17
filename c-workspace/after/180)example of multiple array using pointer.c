//2차원 배열의 평균으로 살펴본 포인터를 이용한 다차원 배열 운행
#include<stdio.h>
#define ROWS 4
#define COLS 3

double get_row_avg(int m[][COLS],int r);
double get_total_avg(int m[][COLS]);

double get_row_avg(int m[][COLS],int r){
    int *p,*endp;
    double sum = 0.0;

    p = &m[r][0];
    endp = &m[r][COLS-1];

    while(p <= endp)
       sum += *p++;

    sum /= COLS;

    return sum;
}

double get_total_avg(int m[][COLS]){
    int *p,*endp;
    double sum = 0.0;

    p = &m[0][0];
    endp = &m[ROWS-1][COLS-1];

    while(p <= endp)
       sum += *p++;

    sum /= ROWS * COLS;

    return sum;
}

int main(void){
    int m[ROWS][COLS] = {{10,20,30},{40,50,60},{70,80,90},{100,110,120}};
    int i;
    
    for(i=0;i<4;i++){
        printf("%d열의 평균은 %f입니다\n",i+1,get_row_avg(m,i));
    }

    printf("전체 원소들의 평균은 %f입니다\n",get_total_avg(m));

    return 0;
    
    }
