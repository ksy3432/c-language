//탐색 정렬
#include<stdio.h>
#define SIZE 10

int seq_search(int list[],int key);

int main(void){
    int key;
    int grade[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    printf("탐색할 값을 입력하시오 :");
    scanf("%d",&key);
    printf("탐색 결과 : %d\n",seq_search(grade,key));

    return 0;
}

int seq_search(int list[],int key){
    int i;

    for(i=0;i<SIZE;i++){
        if(key == list[i])
           return i;
    }

    return 0;
}
