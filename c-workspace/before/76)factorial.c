//재귀함수를 이용한 팩토리얼
long factorial(int n){
	printf("factorial(%d)",n);
	if(n<=1) return 1;
	else return n*factorial(n-1);
} 

int main(void){
 int n;
 printf("정수를 입력하시오 : \n");
 scanf("%d",n);
 
 printf("%d",factorial(n));
 
 return 0;
 }
