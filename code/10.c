#include<stdio.h>
int main(void){
	int input_money;
	int price;
	int vat;
	int output_money;
	
	printf("¹ÞÀº µ· : ");
	scanf("%d",&input_money);
	
	printf("»óÇ°ÀÇ ÃÑ¾× : \n");
	scanf("%d",&price);
	
	vat = price*0.1;
	printf("ºÎ°¡¼¼ : %d\n",vat);
	
	output_money = input_money - price;
	printf("ÀÜµ· : %d",output_money);
	
	return 0;
	
	 
} 
