//array(char array[SIZE],SIZE,char instead)
#include "array_sort.h"
#define SIZE 10

int array_sort(int array1[SIZE],int SIZE,int instead){
    int i;

    for(i=0;i<SIZE;i++){
    array1[i] = instead;
    }

    return array1[SIZE];
}