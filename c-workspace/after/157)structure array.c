//구조체 배열 예제  
//왜인지는 몰라도 VS에서는 한글 입력을 제대로 받지 못한다.다른 콘솔로 실행하니 잘 작동됨
#include<stdio.h>
#include<string.h>
#define SIZE 4

struct student
{   int number;
    char *name[10];
    double height;
};

int main(void){
    struct student list[SIZE];
    int i;

    for(i=0;i<SIZE;i++){
        printf("학번을 입력하시오 : ");
        scanf("%d",&list[i].number);
        printf("이름을 입력하시오 : ");
        scanf("%s",list[i].name);
        printf("신장을 입력하시오 : ");
        scanf("%lf",&list[i].height);
    }
    
    for(i=0;i<SIZE;i++){
        printf("학번: %d ,이름: %s ,신장: %f\n",list[i].number,list[i].name,list[i].height);
    }

    return 0;
}
