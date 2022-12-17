//재고 관리 시스템
#include<stdio.h>
#define place_number 5
int main(void){
    int NUMBER[place_number] = {1,2,3,4,5};
    int n;
    int k;

    while(1){
        printf("상품 번호를 입력하시오(1~10)(끝내고 싶다면 100을 입력하시오) :");
        scanf("%d",&n);
         if(n==1 || n ==2)
                k = NUMBER[0];
         if(n==3 || n==4);
                k = NUMBER[1];
         if(n==5 || n==6)
                k = NUMBER[2];
         if(n==7 || n==8)
                k = NUMBER[3];
         if(n==9 || n==10)
                k = NUMBER[4];
        printf("상품번호가 %d인 상품의 장소번호는 %d입니다\n",n,k);

        if(n==100)
          break;
 
    }

    return 0;
}