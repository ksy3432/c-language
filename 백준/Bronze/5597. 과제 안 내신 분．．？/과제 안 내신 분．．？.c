#include<stdio.h>
#define num 30

int main(void){
    int n,i,min=0,max=0,s[30],find[num],ori[num],m=0;

    for(i=0;i<num-2;i++){
        scanf("%d",&s[i]);
    }

    for(i=0;i<num;i++){
        ori[i] = i+1;
    }

    for(i=0;i<num-2;i++){
        for(n=0;n<num;n++){
            if(s[i] == ori[n]){
               ori[n] = 0;
            }
            else
              continue;
        }
    }

    for(i=0;i<num;i++)
       if(ori[i] != 0){
        find[m] = ori[i];
        m++;
       }

    for(i=0;i<2;i++){
        if(find[0] > find[1]){
            max = find[0];
            max = find[1];
        }
        else{
            max = find[1];
            min = find[0];
        }
    }

    printf("%d\n%d",min,max);   

    return 0;
}