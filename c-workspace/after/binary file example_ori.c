//하나의 파일 내용을 다른 파일 뒤에 추가하는 프로그램
#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

struct song{
    char title[50];
    char writer[20];
    int like;
};

int main(void){
    FILE *fp1,*fp2;
    char file1[100],file2[100];
    struct song a[SIZE] = {
        {"merry christmas mr.lawrence","Ryuichi sakamoto",5},
        {"the song of soul","July",5}
    };
    struct song b[SIZE] = {
        {"Opus","Ryuichi sakamoto",4},
        {"Rain","Ryuichi sakamoto",3},
        {"Energy Flow","Ryuichi sakamoto",4}
    };
    
    char buffer[1024];
    int i;

    //파일 입력하기
    printf("원본 파일의 이름을 입력하시오 : \n");
    scanf("%s",file1);
    printf("이어붙일 파일의 이름을 입력하시오 : \n");
    scanf("%s",file2);

    //파일을 쓰기 모드로 열기
    if((fp1 = fopen(file1,"wb")) == NULL){
        fprintf(stderr,"입력을 위한 파일을 열 수 없습니다\n");
        exit(1);
    }
     if((fp2 = fopen(file2,"wb")) == NULL){
        fprintf(stderr,"출력을 위한 파일을 열 수 없습니다\n");
        exit(1);
    }
    
    //파일에 내용을 넣기
    fwrite(a,sizeof(struct song),SIZE,fp1);
    fwrite(b,sizeof(struct song),SIZE,fp2);

    //파일 닫기
    fclose(fp1);
    fclose(fp2);


    //파일을 쓰기 모드로 열기
    if((fp1 = fopen(file1," rb")) == NULL){
        fprintf(stderr,"출력을 위한 파일을 열 수 없습니다\n");
        exit(1);
    }

    //파일 추가 모드로 열기
    if((fp2 = fopen(file2,"ab")) == NULL){
        fprintf(stderr,"출력을 위한 파일을 열 수 없습니다\n");
        exit(1);
    }

    //첫번째 파일을 두번째 파일의 끝에 추가한다
    while((i = fread(&a,sizeof(struct song),1,fp1)) > 0){
        fwrite(&b,sizeof(struct song),1,fp2);
    }

    //파일 닫기
    fclose(fp1);
    fclose(fp2);

    return 0;
}