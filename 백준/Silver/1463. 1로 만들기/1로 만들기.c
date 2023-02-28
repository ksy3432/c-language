#include <stdio.h>
 
int min(int a, int b);

int min(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}
 
int main(void){
    int n;
    scanf("%d", &n);
 
    int s[n+1]; 
    s[0]=0, s[1]=0;
 
    for(int i=2; i<=n; i++){
        int res = s[i-1] + 1;
        if(i%3==0){
            res = min(res, s[i/3]+1);
        }
        if(i%2==0){
            res = min(res, s[i/2]+1);
        }
        s[i] = res;
    }
 
    printf("%d\n", s[n]);
}
 