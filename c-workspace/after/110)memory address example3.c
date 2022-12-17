#include<stdio.h>
int main(void){
    char c = 'A';
    int i = 10000;
    double d = 6.78;

    char *pc = &c;
    int *pi = &i;
    double *pd = &d;

    (*pc)++;
    *pi = *pi + 1;
    *pd += 1;

    printf("c = %c\n",c);
    printf("i = %d\n",i);
    printf("d = %f\n",d);

    return 0;
}