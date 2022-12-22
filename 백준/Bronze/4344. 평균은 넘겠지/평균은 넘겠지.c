#include<stdio.h>

int main(void){
    int c,n,i,m,l;
    scanf("%d",&c);
    int score[1000],per=0,sum=0;
    float avg=0,standard=0;
    

    for(i=0;i<c;i++){
           scanf("%d",&n);
           for(m=0;m<n;m++){
                scanf("%d",&score[m]);
                sum += score[m];
            }   

            standard = sum/n;
                            
            for(l=0;l<n;l++){
                if(score[l] > (int)standard)
                      per++;
            }

            avg = ((float)per/(float)n)*100; 

            printf("%2.3f%\n",avg);

            per = 0;
            sum = 0;

    }

    return 0;
}