//이분법을 이용하여 근을 구하기
#include<stdio.h>

double get_root(double (*pf)(double), double a, double b, int *i);
double func(double x);

int main(void){
    double a,b;
    int i = 0;
    
    a = -12.0;
    b = 12.0; 

    printf("근의 값은 %.2f입니다\n",get_root(func,a,b,i));
    printf("계산한 횟수는 %d입니다\n",i);

    return 0;
}

double get_root(double (*pf)(double), double a, double b, int *i){
    double m;
    double xdiff = 2.0;

    if(pf(a) < 0 || pf(b) < 0){
        m = (a+b)/2;
        while(1){
            if(xdiff > m && xdiff < b){
                m = (m+b)/2;
                i++;
            }
            else if(xdiff < m && xdiff > a){
                m = (m+a)/2;
                i++;
            }
            else
                break;
        }
    }
    return m;
}

double func(double x){
    return (x*x - 4*x + 4);
}

/*
int main(void){
    double a,b;
    int *i = 0;
    
    a = -12.0;
    b = 12.0; 

    printf("근의 값은 %.2f입니다\n",get_root(func,a,b,i));
    printf("계산한 횟수는 %d입니다\n",i);

    return 0;
}
*/