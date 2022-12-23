#include<stdio.h>

int main(void){
    int n,i,sum=0;

    scanf("%d",&n); //숫자의 개수 n개 입력
    char s[n];
    int x[n];

    scanf("%s",s);

    for(i=0;i<n;i++){
      if(s[i] != '\0')
        x[i] = (int)s[i] - 48;
    } //정수로 변환하여 넣기

    for(int m=0;m<n;m++){
        sum += x[m];
    } //sum에 변환한 정수의 합 저장

    printf("%d\n",sum);

    return 0;
}