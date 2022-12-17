//사칙연산을 이중포인터를 이용하여 구현하기
#include<stdio.h>

void print_menu(void);
double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double div(double x, double y);

void print_menu(void){
    printf("===============================\n");
    printf("0.덧셈\n");
    printf("1.뺄셈\n");
    printf("2.곱셈\n");
    printf("3.나눗셈\n");
    printf("===============================\n");
}

double add(double x, double y){
    return x + y;
}

double sub(double x, double y){
    return x - y;
}

double mul(double x, double y){
    return x * y;
}

double div(double x, double y){
    return x / y;
}

int main(void){
    double x,y,result;
    double (*pf[4])(double, double) = {add , sub , mul , div};
    int symbol;

    print_menu();

    printf("메뉴를 선택하시오 :");
    scanf("%d",&symbol);

    printf("두 수를 입력하시오 :");
    scanf("%lf,%lf", &x, &y);

    if(symbol == 0){
        result = pf[0](x,y);
    }

    else if(symbol == 1){
        result = pf[1](x,y);
    }
    
    else if(symbol == 2){
        result = pf[2](x,y);
    }

    else if(symbol == 3){
        result = pf[3](x,y);
    }

    printf("연산 결과는 %.2f입니다\n",result);

    return 0;
}

