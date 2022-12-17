//정수,제곱,세제곱을 입력받아 저장하고 계산하여 필요한 수를 출력하는 프로그램
#include<stdio.h>
#include<math.h>


int main(void){
    int NUMBER[3][10] = {{1,2,3,4,5,6,7,8,9,10},{1,4,9,16,25,36,49,64,81,100},{1,8,27,64,125,216,343,512,729,1000}};
    int k,i,y;
    double n,m,l,u;
    
    while(1){  
        printf("세제곱값을 입력하시오(멈추려면 음수를 입력하시오):\n");
        scanf("%lf",&n);
            if(n>0){
               m = pow(n,1.0/3.0);
               l = m;
               i = round(m);
               u = l - i;
               y = u * 1000;


                    if(y == 0){
                        k = NUMBER[0][i-1];
                        printf("%d의 세제곱근은 %d입니다\n",(int)n,k);}
                    
                    else{
                       printf("정수인 세제곱근의 값이 존재하지 않습니다.다시 입력해주세요\n");
                       continue;}
            }
                        
            else{
               printf("프로그램을 종료합니다\n");
               break;
            }
    }

    return 0;
    }

