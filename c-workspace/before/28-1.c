//사용자로부터 정수 3개를 입력받아 가장 작은 값을 정하는 프로그램 
int main(void){
	int x,y,z,n;
	
	printf("정수를 세 개 입력하시오 : ");
	scanf("%d,%d,%d",&x,&y,&z);
	
	n = (x>y)?(y>z)?z:y:(x<y)?(x>z)?z:x
	
	printf("가장 작은 정수는 %d입니다",n);
	
	return 0;
}
