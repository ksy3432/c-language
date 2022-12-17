//텍스트 파일에서 특정 문자열 검색하기
#include<stdio.h>
#include<string.h>

int main(void){
    FILE *fp1;
    char buffer[128];
    char keyword[128];
    char file1[256];
    int count_line = 0;

    printf("파일의 이름을 입력하시오 : ");
    scanf("%s",file1);

    printf("파일에서 찾을 단어를 입력하시오 : ");
    scanf("%s",keyword);

    if((fp1 = fopen(file1,"r")) == NULL){
        fprintf(stderr,"%s 파일을 열 수 없습니다\n",file1);
        exit(1);
    }

    while(fgets(buffer,100,fp1) != NULL){
        count_line++;
        if(strstr(buffer,keyword)){
            printf("%s : %d번째 줄에서 %s가 발견되었습니다\n",file1,count_line,keyword);
        }
    }

    fclose(fp1);

    return 0;
}