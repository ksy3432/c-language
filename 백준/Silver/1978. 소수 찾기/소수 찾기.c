#include<stdio.h>

int main(void){
    int n,nums,count=0,i;

    scanf("%d",&nums);
    
    while(nums--){
        scanf("%d",&n);

        for(i=2;i<n;i++){
            if(n % i == 0)
               break;
        }
        if(i == n)
            count++;
    }

    printf("%d\n",count);

    return 0;
}