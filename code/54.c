//사용자가 입력한 정수의 자릿수를 반대로 바꾸는 프로그램 
#include<stdio.h>
int main(void){
	int n,i,count,m,k;
	
	printf("정수를 입력하시오 :");
	scanf("%d",&n);
	printf("입력한 정수가 몇 자리 수인지 입력하시오 :");
	scanf("%d",&m);
	
	for(i=0; i<=m ;i++){
	    
		if(i == 0)
	      {
		  count = n % 10;
		  printf("%d\n",count);
		  i++;}
		
		else if(i != 0)
		  {
		  count = n / (10 * k) % 10; //i를 10의 i제곱으로 표현해야 하는데 잘 모르겠음 
		  printf("%d\n",count);
		  i++;}
		  
		  //암튼 출력하면 됨 
        
    }
    
    return 0;
	}

	
