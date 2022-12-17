//반환해야 하는 값이 2개 이상인 함수를 포인터를 이용하여 구현하기
#include<stdio.h>

int get_line_parameter(int x1,int y1,int x2,int y2,float *slope,float *yintercept){
    if(x1 == x2)
       return -1;
    else{
        *slope = (float)(y2 - y1)/(float)(x2 - x1);
        *yintercept = y1 - (*slope)*x1;
        return 0;
    }
}

int main(void){
    float s,y;
    int a1,b1,a2,b2;
   
   printf("x1의 값을 입력하시오 :");
   scanf("%d",&a1);
   printf("y1의 값을 입력하시오 :");
   scanf("%d",&b1);
   printf("x2의 값을 입력하시오 :");
   scanf("%d",&a2);
   printf("y2의 값을 입력하시오 :");
   scanf("%d",&b2);

    if(get_line_parameter(a1,b1,a2,b2,&s,&y) == -1)
       printf("ERROR!");
    else
       printf("기울기는 %f, y절편은 %f\n",s,y);
    
    return 0;
}