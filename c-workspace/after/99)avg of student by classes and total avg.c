//학생들의 반별 평균과 전체 평균 구하기
#include<stdio.h>
#define CLASSES 3
#define STUDENTS 5

int main(void){
    int s[CLASSES][STUDENTS] = {{0,1,2,3,4},{10,11,12,13,14},{20,21,22,23,24}};
    int total = 0;
    int clas,student,subtotal;

    for(clas=0;clas<CLASSES;clas++){
      subtotal = 0;
      for(student=0;student<STUDENTS;student++)
         subtotal += s[clas][student];
      printf("학급 %d 학생들의 평균 성적은 %d 입니다.\n",clas,subtotal / STUDENTS);
      total += subtotal;
    }
    printf("학생들의 전체 성적의 평균은 %d 입니다\n",total/(CLASSES * STUDENTS));

    return 0;

}