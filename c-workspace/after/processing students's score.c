//학생들의 성적 처리 시스템
#include<stdio.h>

typedef struct grade
{
    int mid;
    int final;
    int quez;
} GRADE;

typedef struct student
{
    int number;
    char name[10];
    GRADE score;
} STU;

/*typedef struct calculation
{
  int avg;
  int max;
  int min;
  int total;
  STU student;  
} CALC;*/


int grade(STU s);
int avg(STU s1,STU s2,STU s3,STU s4,STU s5,STU s6,STU s7,STU s8,STU s9, STU s10);
int max(STU s1,STU s2,STU s3,STU s4,STU s5,STU s6,STU s7,STU s8,STU s9, STU s10);
int min(STU s1,STU s2,STU s3,STU s4,STU s5,STU s6,STU s7,STU s8,STU s9, STU s10);
void credit(STU s1,STU s2,STU s3,STU s4,STU s5,STU s6,STU s7,STU s8,STU s9, STU s10);

int grade(STU s){
    int result;

    result = s.score.mid + s.score.final + s.score.quez;
   
    return result;
}

int avg(STU s1,STU s2,STU s3,STU s4,STU s5,STU s6,STU s7,STU s8,STU s9, STU s10){
    int result;

    result = (grade(s1) + grade(s2) + grade(s3) + grade(s4) + grade(s5) + grade(s6) + grade(s7) + grade(s8) + grade(s9) + grade(s10))/10;

    return result;
}

int max(STU s1,STU s2,STU s3,STU s4,STU s5,STU s6,STU s7,STU s8,STU s9, STU s10){
    int i,result;
    int s[10] = {grade(s1),grade(s2),grade(s3),grade(s4),grade(s5),grade(s6),grade(s7),grade(s8),grade(s9),grade(s10)};

    for(i=0;i<9;i++){
        if(s[i] > s[i+1])
           result = s[i];
        else
           result = s[i+1];
    }
    
    return result;
}

int min(STU s1,STU s2,STU s3,STU s4,STU s5,STU s6,STU s7,STU s8,STU s9, STU s10){
    int i,result;
    int s[10] = {grade(s1),grade(s2),grade(s3),grade(s4),grade(s5),grade(s6),grade(s7),grade(s8),grade(s9),grade(s10)};

    for(i=0;i<9;i++){
        if(s[i] < s[i+1])
           result = s[i];
        else
           result = s[i+1];
    }
    
    return result;
}

void credit(STU s1,STU s2,STU s3,STU s4,STU s5,STU s6,STU s7,STU s8,STU s9, STU s10){
    int s[10] = {grade(s1),grade(s2),grade(s3),grade(s4),grade(s5),grade(s6),grade(s7),grade(s8),grade(s9),grade(s10)};
    int i,temp;

    for(i=0;i<10;i++){
       if(s[i] > s[i+1]){
                temp = s[i];   
                s[i]= s[i+1];
                s[i+1] = temp;
            }
    }

    for(i=0;i<10;i++){
        if(i >= 0 && i < 3)
           printf("학생의 학점은 A입니다\n");
        else if(i >= 3 && i<7)
           printf("학생의 학점은 B입니다\n");
        else
           printf("학생의 학점은 C입니다\n");
    }

}

int main(void){
    STU s1 = {1,"k",{45,36,78}};
    STU s2 = {2,"i",{56,34,86}};
    STU s3 = {3,"m",{36,76,55}};
    STU s4 = {4,"s",{64,84,98}};
    STU s5 = {5,"e",{74,75,45}};
    STU s6 = {6,"a",{74,88,67}};
    STU s7 = {7,"y",{93,67,54}};
    STU s8 = {8,"e",{74,45,78}};
    STU s9 = {9,"o",{63,88,55}};
    STU s10 = {10,"n",{85,96,64}};

    printf("가장 총점이 높은 학생의 점수는 %d입니다\n",max(s1,s2,s3,s4,s5,s6,s7,s8,s9,s10));
    printf("가장 총점이 낮은 학생의 점수는 %d입니다\n",min(s1,s2,s3,s4,s5,s6,s7,s8,s9,s10));
    printf("전체 학생의 총점의 평균은 %d입니다\n",avg(s1,s2,s3,s4,s5,s6,s7,s8,s9,s10));
    credit(s1,s2,s3,s4,s5,s6,s7,s8,s9,s10);

    return 0;

}


