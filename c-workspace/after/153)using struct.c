//struct 구조체 선언
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
     int number;
     char name[10];
     double height;
};

int main(void){
    struct student s;

    s.number = 202135931;
    strcpy(s.name,"홍길동");
    s.height = 180.2;

    printf("학번:%d\n",s.number);
    printf("이름:%s\n",s.name);
    printf("신장:%f\n",s.height);

    return 0;
}