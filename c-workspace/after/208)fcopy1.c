//형식화된 입출력 예제
#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp1,*fp2;
    char file1[100],file2[100];
    char buffer[100];

    printf("원본 파일의 이름을 입력하시오 : ");
    scanf("%s",file1);

    printf("복사본 파일의 이름을 입력하시오 : ");
    scanf("%s",file2);

    if((fp1 = fopen(file1,"r")) == NULL){
      fprintf(stderr,"원본 파일 %s를 열 수 없습니다\n");
      exit(1);
    }

    if((fp1 = fopen(file2,"w")) == NULL){
      fprintf(stderr,"복사본 파일 %s를 열 수 없습니다\n");
      exit(1);
    }

    while(fgets(buffer,100,fp1) != NULL)
       fputs(buffer,fp2);

    fclose(fp1);
    fclose(fp2);

    return 0;
}