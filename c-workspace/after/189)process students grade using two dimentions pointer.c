//이중포인터를 이용하여 학생들의 성적을 처리하는 프로그램 구현하기
#include<stdio.h>
#define ROWS 3
#define COLS 3

double get_average(int list[],int n);

double get_average(int list[],int n){
    int *p,*endp;
    double sum = 0.0;

    p = &list[0];
    endp = &list[ROWS - 1];

   while(p <= endp){
       sum += *p++;
       sum /= ROWS;
   }

    return sum;
}

int main(void){
    int score[ROWS][COLS] = {
        {88,76,64},
        {91,36,71},
        {74,63,95}
    };

    int each_score[ROWS];

    int i,m;

    while(1){
    for(i=0;i<ROWS;i++){
        for(m=0;m<ROWS;m++)
            each_score[m] = score[i][m]; 

        printf("%d번째 학생의 평균 성적은 %f입니다\n",i+1,get_average(each_score,i));
        }
    break;
    }
    return 0;
}