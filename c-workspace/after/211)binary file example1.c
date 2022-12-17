//학생들의 정보를 이진파일에 저장하고 다시 읽어서 출력하는 프로그램
#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

struct student{
    int number;
    char name[20];
    double grade; 
};


int main(void){
   struct student table[SIZE] = {
    {1, "kim", 2.45},
    {2, "james", 3.23},
    {3, "wan", 2.34}
   };
   struct student s;
   FILE *fp = NULL;
   int i;

   //이진파일을 쓰기모드로 연다
   if((fp = fopen("student.dat","wb")) == NULL){
    fprintf(stderr,"출력을 위한 파일을 열 수 없습니다\n");
    exit(1);
   }

   //정보 입력하기
   fwrite(table,sizeof(struct student),SIZE,fp);

   //파일 닫기
   fclose(fp);

   //파일 읽기 모드로 열기
   if((fp = fopen("student.dat","rb")) == NULL){
    fprintf(stderr,"입력을 위한 파일을 열 수 없습니다\n");
    exit(1);
   }

   //파일에서 정보 읽기
   for(i=0;i<SIZE;i++){
    fread(&s,sizeof(struct student),i,fp);
    printf("학번 = %d, 이름 = %s , 학점 = %f \n",s.number,s.name,s.grade);
   }
   //파일 닫기
   fclose(fp);

   return 0;

}