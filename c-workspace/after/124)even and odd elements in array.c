//배열에서 짝수번째 원소의 합과 홀수번째 원소의 합을 구하는 함수
#include<stdio.h>
void get_sum(int A[],int n,int *p_even_sum,int *p_odd_sum);

int main(void){
    int S[10] = {2,3,7,11,53,62,18,7,21,33};
    int even_sum,odd_sum;

    get_sum(S,10,&even_sum,&odd_sum);

    printf("짝수인 원소들의 합은 %d입니다\n",even_sum);
    printf("홀수인 원소들의 합은 %d입니다\n",odd_sum);

    return 0;
}

void get_sum(int A[],int n,int *p_even_sum,int *p_odd_sum){
    int i,k;
    *p_even_sum = 0;
    *p_odd_sum = 0;

    for(k=0;k<n;k++){
       if(k == 0 || k%2 == 0){
         *p_even_sum += *(A + k);}
       else if (k%2 != 0){
         *p_odd_sum += *(A + k);
       }

} }