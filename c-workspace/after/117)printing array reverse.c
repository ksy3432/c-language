#include<stdio.h>
void print_reverse(int s[],int n);
int main(void){
    int a[] = {10,20,30,40,50};

    print_reverse(a,5);

    return 0;
}

void print_reverse(int s[], int n){
    int *p = s + n - 1;

    while(p >= s)
        printf("%d\n",*p--);
}