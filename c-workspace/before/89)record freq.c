//입력된 데이터의 빈도를 계산하는 프로그램
int main(void){
	int score,i;
	int freq[101];
	
	for(i=0;i<101;i++)
	   freq[i] = 0;
	   
	while(1){
		printf("숫자를 입력하시오(-1을 입력시 종료) :");
		scanf("%d",&score);

		if(score < 0)
		   break;
		   freq[score]++;
	}
	
	printf("숫자          빈도\n");
	
	for(i=0;i<101;i++)
	   printf("%3d            %3d\n",i,freq[i]);
	   
	return 0;
} 
