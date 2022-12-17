//학생 성적 프로그램
#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp1;
    char file1[150];
    char name[10],sub[10];
    float total,grade,count = 0.0;

    //파일 이름 정하기
    printf("파일 이름을 입력하시오: ");
    scanf("%s",file1);

    //편집 모드로 파일 열기
    if((fp1 = fopen(file1,"w")) == NULL){
        fprintf(stderr,"%s 파일을 열 수 없습니다\n",file1);
        exit(1);
    }

    //성적 입력
    while(1){
        printf("성적을 입력하시오(음수면 종료) : \n");
        scanf("%f",&grade);
        if(grade<0) break;

        printf("이름,과목을 입력하시오 : \n");
        scanf("%s %s",name,sub);
        fprintf(fp1,"%s %s %f \n",name,sub,grade);    }

    //파일 닫기
    fclose(fp1);

    //파일 읽기모드로 열기
    if((fp1 = fopen(file1,"r")) == NULL){
        fprintf(stderr,"%s 파일을 열 수 없습니다\n",file1);
        exit(1);
    }

    //평균 계산하고 출력하기
    while(!feof(fp1)){
        fscanf(fp1,"%s %s %f\n",name,sub,&grade);
        total += grade;
        count++;
    }

    printf("평균 성적은 %.1f입니다\n",total/count);
    //파일 닫기
    fclose(fp1);

    return 0;
}
