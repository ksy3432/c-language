//음악 플레이어 실행
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE1 30
#define SIZE2 10

typedef struct music{
	char title[SIZE1];
	char singer[SIZE1];
	char address[SIZE1];
	char kind[SIZE2];
} MUSIC;

typedef struct album{
	MUSIC music[SIZE2];
} ALBUM;

typedef struct menu{
    ALBUM music_list;	
} MENU;

int main(void){
	MENU m;
	MUSIC music ={"Can't Take My Eyes Off You","Notting Hill","c:\\mp3\\oldpop","팝"};
	int i,choose,number;
	char keyword[SIZE2];
	
	strcpy(m.music_list.music[0].title,music.title);
	strcpy(m.music_list.music[0].singer,music.singer);
	strcpy(m.music_list.music[0].address,music.address);
	strcpy(m.music_list.music[0].kind,music.kind);

    for(i=1;i<10;i++)
       memset(m.music_list.music[i].title,0,SIZE1);

	
	while(1){
		printf("----------------\n");
        printf("    메뉴\n");
        printf("\n");
		printf("1.음악 추가\n");
		printf("2.음악 삭제\n");
		printf("3.음악 출력\n");
		printf("4.음악 검색\n");
		printf("5.종료\n");
		printf("----------------\n");
	
		printf("메뉴를 선택하시오 : ");
		scanf("%d%*c",&choose);
		
		if(choose == 1){
            printf("------------------------------------------------\n");
			printf("음악 목록\n");

            for(i=0;i<10;i++){
				printf("%d.%s\n",i+1,m.music_list.music[i].title);
			}

            printf("------------------------------------------------\n");			
            printf("추가할 음악의 번호를 입력하시오 : ");
            scanf("%d%*c",&number);

			printf("제목 :");
			gets(m.music_list.music[number-1].title);
			printf("가수 : ");
			gets(m.music_list.music[number-1].singer);
			printf("저장 주소 : ");
			gets(m.music_list.music[number-1].address);
		    printf("종류(팝,클래식,영화 음악) : ");
			gets(m.music_list.music[number-1].kind);	
			
			continue;
		}
		
		else if(choose == 2){	
            printf("------------------------------------------------\n");
			printf("음악 목록\n");		

			for(i=0;i<10;i++){
				printf("%d.%s\n",i+1,m.music_list.music[i].title);
			}

            printf("------------------------------------------------\n");
			
			printf("삭제할 음악의 번호를 입력하시오 : ");
			scanf("%d",&number);
			
			memset(m.music_list.music[number-1].title,0,SIZE2);
			memset(m.music_list.music[number-1].singer,0,SIZE2);
			memset(m.music_list.music[number-1].address,0,SIZE2);
			memset(m.music_list.music[number-1].kind,0,SIZE1);
			
			continue;

		}
		
		else if(choose == 3){
            printf("------------------------------------------------\n");
			printf("음악 목록\n");

			for(i=0;i<10;i++){
				printf("%d.%s\n",i+1,m.music_list.music[i].title);
			}

            printf("------------------------------------------------\n");
			
			printf("출력할 음악의 번호를 입력하시오 : ");
			scanf("%d%*c",&number);
			
			printf("-------------------------------------------------\n");
			printf("제목 : %s\n",m.music_list.music[number-1].title);
			printf("가수 : %s\n",m.music_list.music[number-1].singer);
			printf("저장 위치 : %s\n",m.music_list.music[number-1].address);
			printf("종류(팝,클래식,영화 음악) : %s\n",m.music_list.music[number-1].kind);
			printf("-------------------------------------------------\n");
		}
		
		else if(choose == 4){
            printf("------------------------------------------------\n");
			printf("음악 목록\n");

			for(i=0;i<10;i++){
				printf("%d.%s\n",i+1,m.music_list.music[i].title);
        	}

            printf("------------------------------------------------\n");
			
			printf("음악의 키워드를 입력하시오 : ");
			scanf("%s",&keyword);
			//키워드 관련 기능 추가
			
			for(i=0;i<10;i++){
				if(strcmp(m.music_list.music[i].title,keyword) == 0 || strcmp(m.music_list.music[i].singer,keyword) == 0 || strcmp(m.music_list.music[i].address,keyword) == 0 || strcmp(m.music_list.music[i].kind,keyword) == 0){
                    printf("------------------------------------------------\n");
                    printf("제목 : %s\n",m.music_list.music[i].title);
			        printf("가수 : %s\n",m.music_list.music[i].singer);
			        printf("저장 위치 : %s\n",m.music_list.music[i].address);
			        printf("종류(팝,클래식,영화 음악) : %s\n",m.music_list.music[i].kind);
                    printf("------------------------------------------------\n");

				}
			}
			continue;
		}
		
		else if(choose == 5){
            printf("프로그램을 종료합니다\n");
			break;
		}
	}
	
	return 0;
}