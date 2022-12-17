//����ڷκ��� �� �ڸ� ������ �Է¹޾� �� �ڸ����� ����� �ٲٴ� ���α׷� 
#include<stdio.h>
#include<string.h>
int main(void){
	int a,b,c,number;
	char x[5],y[5],z[5];
	
	
	printf("�� �ڸ� ������ �Է��Ͻÿ� :");
	//scanf("%d",&number);
	scanf("%d\n",number);
	
	a = number/100;
	b = number/10 - 10*a;
	c = number%10;
	
	/*if(a == 0){
	 x = 'zero';}
	else if(a == 1){
	 x = 'one';}
	else if(a == 2){
	 x = 'two';}
	else if(a == 3){
	 x = 'three';}
	else if(a == 4){
	 x = 'four';}
	else if(a == 5){
	 x = 'five';}
	else if(a == 6){
	 x = 'six';}
	else if(a == 7){
	 x = 'seven';}
	else if(a == 8){
	 x = 'eight';}
	else if(a == 9){
	 x = 'nine';}
	 
	if(b == 0){
	 y = 'zero';}
	else if(b == 1){
	 y = 'one';}
	else if(b == 2){
	 y = 'two';}
	else if(b == 3){
	 y = 'three';}
	else if(b == 4){
	 y = 'four';}
	else if(b == 5){
	 y = 'five';}
	else if(b == 6){
	 y = 'six';}
	else if(b == 7){
	 y = 'seven';}
	else if(b == 8){
	 y = 'eight';}
	else if(b == 9){
	 y = 'nine';}
	 
	if(c == 0){
	 z = 'zero';}
	else if(c == 1){
	 z = 'one';}
	else if(c == 2){
	 z = 'two';}
	else if(c == 3){
	 z = 'three';}
	else if(c == 4){
	 z = 'four';}
	else if(c == 5){
	 z = 'five';}
	else if(c == 6){
	 z = 'six';}
	else if(c == 7){
	 z = 'seven';}
	else if(c == 8){
	 z = 'eight';}
	else if(c == 9){
	 z = 'nine';}*/

	if(strstr(c) == 1){}
	else{}

	//대충이런느낌으로 나중에 해봐야지
	 
	printf("%d -> %s%s%s",number,x,y,z);
	
	return 0;
	

}
