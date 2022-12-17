//영상 처리 연산을 수행하는 프로그램을 이중포인터를 이용하여 구현하기
//영상 처리 연산 수행하기
#include<stdio.h>
#include<string.h>
#include<math.h>
#define ROWS 3
#define COLS 3

char binarization(char *s[ROWS][COLS],int value);
char reversal(char *s[ROWS][COLS]);
char sliding(char *s[ROWS][COLS],int value,char symbol);
char stretching(char *s[ROWS][COLS],int value,char symbol);
void show_menu(void);

void show_menu(void){
	printf("-------------------------\n");
	printf("          메뉴\n");
	printf("(a)이진화\n");
	printf("(b)반전\n");
	printf("(c)슬라이딩\n");
	printf("(d)스트레칭\n");
	printf("-------------------------\n");
}

int main(void){
	unsigned char *image[ROWS][COLS] = {
		{"123", "62", "91"},
		{"31", "13", "57"},
		{"201", "152", "32"}
	};
	char choose;
	int i,n;
	
	show_menu();
	
	printf("메뉴를 선택하시오 :");
	scanf("%s",&choose);
	
	while(1){
	    if(choose == 'a'){
			printf("이진화 된 값\n");
			for(i=0;i<ROWS;i++){
				for(n=0;n<COLS;n++){
				printf(" %s",binarization(&*image,50));
				}
				printf("\n");
			}
			break;
		}
		else if(choose == 'b'){
			printf("반전된 값\n");
			for(i=0;i<ROWS;i++){
				for(n=0;n<COLS;n++){
					printf(" %s",reversal(&*image));
				}
				printf("\n");
			}
			break;
		}
		else if(choose == 'c'){
			printf("슬라이딩 된 값\n");
			for(i=0;i<ROWS;i++){
				for(n=0;n<COLS;n++){
					printf(" %s",sliding(&*image,50,'+'));
				}
				printf("\n");
			}
			break;
		}
		else if(choose == 'd'){
			printf("스트레칭 된 값\n");
			for(i=0;i<ROWS;i++){
				for(n=0;n<COLS;n++){
					printf(" %s",stretching(&*image,3,'*'));
				}
				printf("\n");
			}
			break;
		}
		else{
			printf("다시 입력하시오\n");
		}
	}
	return 0;		
}


char binarization(char *s[ROWS][COLS],int value){
	char *p;
	int i,n;
	
	for(i=0;i<ROWS;i++){
		for(n=0;n<COLS;n++){
			p = &*s[i][n];
			if(*p >= value){
				strcpy(*p,"255");
			}
			else{
				strcpy(*p,"0");
			}
		}
	}
}

char stretching(char *s[ROWS][COLS],int value,char symbol){
	char *p,*endp,each_result[ROWS][COLS];
	int i,n,result;
		
	for(i=0;i<ROWS;i++){
		for(n=0;n<COLS;n++){
			*p = &*s[i][n];
			*endp = &*s[i][n];
		    if(symbol == '+'){
				result = atoi(*p) + value;
				if(result > 255)
					result -= 255;
				each_result[i][n] = itoa(result,*endp,10);
                //strcpy(endp,each_result);
			}
			if(symbol == '-'){
				result = 255 - atoi(*p);
				each_result[i][n] = itoa(result,*endp,10);
				//strcpy(endp,each_result);
			}
		}
		strcpy(endp,each_result);
	}
}

char sliding(char *s[ROWS][COLS],int value,char symbol){
	char *p,*endp,each_result[ROWS][COLS];
	int i,n,result;
	
	for(i=0;i<ROWS;i++){
		for(n=0;n<COLS;n++){
			p = &*s[i][n];
			endp = &*s[i][n];
			if(symbol == '*'){
				result = atoi(*p) * value;
				if(result > 255)
					result /= value-1;
				each_result[i][n] = itoa(result,endp,10);
			}
			if(symbol == '/'){
				result = atoi(p) / value;
				if(result < 1){
					result *= (1/result);
				}
				each_result[i][n] = itoa(result,*endp,10);
				//strcpy(endp,each_result);
				//itoa(result,endp,10);
			}
		}
	}
	strcpy(*endp,each_result);
}

char reaversal(char *s[ROWS][COLS]){
	char **p,*endp,each_result[ROWS][COLS];
	int i,n,result;
	
	for(i=0;i<ROWS;i++){
		for(n=0;n<COLS;n++){
			**p = &p[i][n];
			result = 255 - atoi(*p);
			each_result[i][n] = itoa(result,*endp,10);
			//strcpy(endp,each_result);
		}
	}
	strcpy(*endp,each_result);
}
