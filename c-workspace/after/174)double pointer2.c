//이중 포인터 프로그램
#include<stdio.h>

void set_proverb(char **q);

int main(void){
    char *s = NULL;

    set_proverb(&s);
    printf("selected proverb = %s\n",s);

    return 0;
}

void set_proverb(char **q){
    static char *str1 = "A friend in need is a friend indeed";
    static char *str2 = "A little knowledge is dangerous thing";

    *q = str1;
}
