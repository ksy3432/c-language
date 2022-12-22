#include<stdio.h>

int main(void){
    int a[10000];
    int i,on,tw,th,fo,new[10000],n,m;

    for(i=0;i<10000;i++){
        a[i] = i+1;
    } //1~10000까지의 수 집어넣기

    for(i=0;i<10000;i++)
        new[i] = 0;

        for(i=0;i<10000;i++){
            on = a[i]/1000;
            tw = (a[i]/100)%10;
            th = (a[i]%100)/10;
            fo = a[i]%10;
            new[i] = a[i]+on+tw+th+fo;

            for(n=0;n<10000;n++){
                if(a[i] == new[n]){
                    a[i] = 0;
                if(new[i]>10000){
                    a[i] = 0;
                    }
                }
            }        
    }

        for(i=0;i<10000;i++){
            if(a[i] != 0)
               printf("%d\n",a[i]);
            }

    return 0;

}