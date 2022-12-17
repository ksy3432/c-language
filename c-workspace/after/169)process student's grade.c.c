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
    int each_total;
} STU;

typedef struct calculation
{
  int avg;
  int max;
  int min;
  int total;
  STU student[10];
  //int each_total_1,each_total_2,each_total_3,each_total_4,each_total_5,each_total_6,each_total_7,each_total_8,each_total_9,each_total_10;  
} CALC;


void grade(STU s1,STU s2,STU s3,STU s4,STU s5,STU s6,STU s7,STU s8,STU s9, STU s10,CALC result);

void grade(STU s1,STU s2,STU s3,STU s4,STU s5,STU s6,STU s7,STU s8,STU s9, STU s10,CALC result){
    //int each_total_1,each_total_2,each_total_3,each_total_4,each_total_5,each_total_6,each_total_7,each_total_8,each_total_9,each_total_10;
    int i,k,j,temp;

    s1.each_total = s1.score.mid + s1.score.final + s1.score.quez;
    s2.each_total = s2.score.mid + s2.score.final + s2.score.quez;
    s3.each_total = s3.score.mid + s3.score.final + s3.score.quez;
    s4.each_total = s4.score.mid + s4.score.final + s4.score.quez;
    s5.each_total = s5.score.mid + s5.score.final + s5.score.quez;
    s6.each_total = s6.score.mid + s6.score.final + s6.score.quez;
    s7.each_total = s7.score.mid + s7.score.final + s7.score.quez;
    s8.each_total = s8.score.mid + s8.score.final + s8.score.quez;
    s9.each_total = s9.score.mid + s9.score.final + s9.score.quez;
    s10.each_total = s10.score.mid + s10.score.final + s10.score.quez;

    result.total = (s1.each_total + s2.each_total + s3.each_total + s4.each_total + s5.each_total + s6.each_total + s7.each_total + s8.each_total + s9.each_total + s10.each_total); 
       
    int s[10] = {s1.each_total,s2.each_total,s3.each_total,s4.each_total,s5.each_total,s6.each_total,s7.each_total,s8.each_total,s9.each_total,s10.each_total};

    result.avg = result.total/10;

     for(j=0;j<10;j++){
        for(k=0;k<9;k++){
            if(s[k] < s[k+1]) {             
                temp = s[k];   
                s[k] = s[k+1];
                s[k+1] = temp;
            }
        }
     }

    result.max = s[0];
    result.min = s[9];

    printf("------------------------------------------------------------------\n");

    for(i=0;i<10;i++){

        if(s1.each_total == s[i]){   
            if(i >= 0 && i < 3)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s1.number,s1.name,s1.each_total);
            else if(i >= 3 && i<7)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s1.number,s1.name,s1.each_total);
            else
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s1.number,s1.name,s1.each_total);
        }

        
        else if(s2.each_total == s[i]){   
            if(i >= 0 && i < 3)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s2.number,s2.name,s2.each_total);
            else if(i >= 3 && i<7)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s2.number,s2.name,s2.each_total);
            else
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s2.number,s2.name,s2.each_total);
        }

        else if(s3.each_total == s[i]){   
            if(i >= 0 && i < 3)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s3.number,s3.name,s3.each_total);
            else if(i >= 3 && i<7)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s3.number,s3.name,s3.each_total);
            else
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s3.number,s3.name,s3.each_total);
        }

        else if(s4.each_total == s[i]){   
            if(i >= 0 && i < 3)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s4.number,s4.name,s4.each_total);
            else if(i >= 3 && i<7)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s4.number,s4.name,s4.each_total);
            else
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s4.number,s4.name,s4.each_total);
        }

        
        else if(s5.each_total == s[i]){   
            if(i >= 0 && i < 3)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s5.number,s5.name,s5.each_total);
            else if(i >= 3 && i<7)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s5.number,s5.name,s5.each_total);
            else
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s5.number,s5.name,s5.each_total);
        }
        
        
        else if(s6.each_total == s[i]){   
            if(i >= 0 && i < 3)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s6.number,s6.name,s6.each_total);
            else if(i >= 3 && i<7)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s6.number,s6.name,s6.each_total);
            else
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s6.number,s6.name,s6.each_total);
        }

        
        else if(s7.each_total == s[i]){   
            if(i >= 0 && i < 3)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s7.number,s7.name,s7.each_total);
            else if(i >= 3 && i<7)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s7.number,s7.name,s7.each_total);
            else
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s7.number,s7.name,s7.each_total); 
        }

        
        else if(s8.each_total == s[i]){   
            if(i >= 0 && i < 3)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s8.number,s8.name,s8.each_total);
            else if(i >= 3 && i<7)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s8.number,s8.name,s8.each_total);
            else
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s8.number,s8.name,s8.each_total);
        }

        
        else if(s9.each_total == s[i]){   
            if(i >= 0 && i < 3)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s9.number,s9.name,s9.each_total);
            else if(i >= 3 && i<7)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s9.number,s9.name,s9.each_total);
            else
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s9.number,s9.name,s9.each_total);
        }

        
        else if(s10.each_total == s[i]){   
            if(i >= 0 && i < 3)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s10.number,s10.name,s10.each_total);
            else if(i >= 3 && i<7)
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s10.number,s10.name,s10.each_total);
            else
                printf("%d위 / 출석 번호 : %d / 이름: %s / 학점 : A / 총점 : %d\n",i+1,s10.number,s10.name,s10.each_total);
        }
    }

    printf("------------------------------------------------------------------\n");

    printf("가장 총점이 높은 학생은 %s(%d점)이고 가장 총점이 낮은 학생은 %s(%d점)입니다\n",s2.name,result.max,s1.name,result.min);
    printf("학생들의 평균 총점은 %d입니다\n",result.avg);
}


int main(void){
    CALC calc;
    int i;
    STU s1 = {1,"kail",{45,36,78}};
    STU s2 = {2,"irina",{56,34,86}};
    STU s3 = {3,"mari",{36,76,55}};
    STU s4 = {4,"seyeon",{64,84,98}};
    STU s5 = {5,"evan",{74,75,45}};
    STU s6 = {6,"azul",{74,88,67}};
    STU s7 = {7,"yan",{93,67,54}};
    STU s8 = {8,"eran",{74,45,78}};
    STU s9 = {9,"olivia",{63,88,55}};
    STU s10 = {10,"noa",{85,96,64}};

    calc.student[0] = s1;
    calc.student[1] = s2;
    calc.student[2] = s3;
    calc.student[3] = s4;
    calc.student[4] = s5;
    calc.student[5] = s6;
    calc.student[6] = s7;
    calc.student[7] = s8;
    calc.student[8] = s9;
    calc.student[9] = s10;

    grade(calc.student[0],calc.student[1],calc.student[2],calc.student[3],calc.student[4],calc.student[5],calc.student[6],calc.student[7],calc.student[8],calc.student[9],calc);

    return 0;

}

