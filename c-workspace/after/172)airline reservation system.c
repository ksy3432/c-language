//항공 예약 시스템 구현
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10

typedef struct guest
{
    int seat_number;
    int check;
    char name[SIZE];
} GUEST;

typedef struct menu
{
    GUEST guest[SIZE];
} MENU;

//char reservation(MENU m,char s[SIZE]);
void watch_seat(MENU m);
void watch_member(MENU m);
void watch_menu(void);

/*char reservation(MENU m,char s[SIZE]){
    int i;
	
    for(i=0;i<10;i++){
        if(m.guest[i].check == 1){
           strcpy(s,"예약됨");
		}
        else if(m.guest[i].check == 2){
           strcpy(s,"예약 안됨");
		}
    }

    return s;
}  */

void watch_seat(MENU m){
    int i;
	
	/*for(i=0;i<10;i++){
		if(m.guest[i].check == 1){
			
		}
	}*/

    printf("----------------------------------\n");
    printf("               좌석 현황\n\n");

    for(i=0;i<10;i++){
		if(m.guest[i].check == 1){
            printf("%d번 좌석 : 예약됨\n",i+1);
		}
		else{
			printf("%d번 좌석 : 예약 안됨\n",i+1);
		}
    }
    
    printf("----------------------------------\n");

}

void watch_member(MENU m){
    int i;

    printf("----------------------------------\n");
    printf("              손님 명단\n\n");

    for(i=0;i<10;i++){
        printf("%d.%s\n",i+1,m.guest[i].name);
    }

    printf("----------------------------------\n");
}

void watch_menu(void){
	int i;
	
	printf("----------------------------------\n");
	printf("           메뉴\n\n");
	printf("1.예약하기\n");
	printf("2.예약 취소\n");
	printf("3.예약 현황\n");
	printf("4.종료\n");
	printf("-----------------------------------\n");
}

int main(void){
    MENU m;
    int i,choose,number;
    GUEST g ={1,1,"kim"};

    m.guest[0].seat_number = g.seat_number;
    m.guest[0].check = g.check;
    strcpy(m.guest[0].name,g.name);
	
	for(i=1;i<10;i++){
		m.guest[i].check = 2;
	}
	
    while(1){
		watch_menu();
		printf("원하는 메뉴를 선택하시오 : ");
		scanf("%d%*c",&choose);
		
		for(i=1;i<10;i++){
			memset(m.guest[i].name,0,SIZE);
		}
		
		if(choose == 1){
			watch_member(m);
			printf("예약할 순번을 입력하시오: ");
			scanf("%d",&number);
			
			watch_seat(m);
			printf("예약할 좌석의 번호를 입력하시오 : ");
			scanf("%d",&m.guest[number-1].seat_number);
			printf("예약을 하려면 1을 하지 않으려면 2를 입력하시오 : ");
			scanf("%d",&m.guest[number-1].check);
			printf("예약할 이름을 입력하시오 : ");
			scanf("%s",m.guest[number-1].name);
			
			continue;
		}
		
		else if(choose == 2){
			watch_seat(m);
			printf("취소할 좌석의 번호를 입력하시오 : ");
			scanf("%d",&number);
			
			m.guest[number-1].seat_number = 0;
			m.guest[number-1].check = 0;
			memset(m.guest[number-1].name,0,SIZE);
			
			continue;
		}
		
		else if(choose == 3){
			watch_seat(m);
			
			continue;
		}
		
		else if(choose == 4){
			printf("프로그램을 종료합니다\n");
			break;
		}
	}
	
	return 0;
    
}
/ 