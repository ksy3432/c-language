#include <stdio.h>

struct student {
 int number;
 char *name[10];  //이름을 입력 받기 위한 배열로 만들어 주어야 함. char 하나로는 하나의 문자 밖에 받지 못함.
 double grade;
};

int main(void)
{
 struct student s;

 printf("학번 : ");
 scanf("%d", &s.number);
 
 printf("이름 : ");
 scanf("%s", s.name); //포인터로 인해 &기호를 생략해야함
 
 printf("학점 : ");
 scanf("%ld", &s.grade);

 printf("%d\n",s.number);
 printf("%s\n",s.name);
 printf("%ld\n",s.grade);
 
}


