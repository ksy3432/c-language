//주사위의 면 개수 구하기
#include<stdio.h>
#include<stdlib.h>

int random(int k);
int rand_0(int n);
int rand_1(int n); 
int rand_2(int n);
int rand_3(int n);
int rand_4(int n);
int rand_5(int n);

int count = 0;
int i,k;

int main(void){
	random(3);
}

int random(int k){
	i = rand() % 6;
	
	if(i==0)
	  rand_0(i);
	else if(i==1)
	  rand_1(i);
	else if(i==2)
	  rand_2(i);
	else if(i==3)
	  rand_3(i);
	else if(i==4)
	  rand_4(i);
	else if(i==5)
	  rand_5(i);
	  
	return 0;
}

int rand_0(int n){
	if(n>=0)
	  printf("나온 주사위의 면은 %d입니다\n",i);
	  static count;
	  count++;
	  printf("%d면은 %d번 나왔습니다\n",i,count);
	  k--;
	  return random(k-1);
}

int rand_1(int n){
	if(n>=0)
	  printf("나온 주사위의 면은 %d입니다\n",i);
	  static count;
	  count++;
	  printf("%d면은 %d번 나왔습니다\n",i,count);
	  k--;
	  return random(k-1);
}

int rand_2(int n){
	if(n>=0)
	  printf("나온 주사위의 면은 %d입니다\n",i);
	  static count;
	  count++;
	  printf("%d면은 %d번 나왔습니다\n",i,count);
	  k--;
	  return random(k-1);
}

int rand_3(int n){
	if(n>=0)
	  printf("나온 주사위의 면은 %d입니다\n",i);
	  static count;
	  count++;
	  printf("%d면은 %d번 나왔습니다\n",i,count);
	  k--;
	  return random(k-1);
}

int rand_4(int n){
	if(n>=0)
	  printf("나온 주사위의 면은 %d입니다\n",i);
	  static count;
	  count++;
	  printf("%d면은 %d번 나왔습니다\n",i,count);
	  k--;
	  return random(k-1);
}

int rand_5(int n){
	if(n>=0)
	  printf("나온 주사위의 면은 %d입니다\n",i);
	  static count;
	  count++;
	  printf("%d면은 %d번 나왔습니다\n",i,count);
	  k--;
	  return random(k-1);
}
