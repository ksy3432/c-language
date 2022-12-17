//음악 플레이어 구현하기
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE1 30
#define SIZE2 10

typedef struct music{
	char title[SIZE1];
	char singer[SIZE1];
	char adress[SIZE1];
	char kind[SIZE2];
} MUSIC;

typedef struct album{
	int music_number[SIZE1];            //music_number 랑 music_title 추가!
	MUSIC music_list[SIZE2];
} ALBUM;

typedef struct music_name{
	char music_title[SIZE1];
} NAME;

ALBUM add(ALBUM a,int music_num);     //음악 추가
void delete(ALBUM a,int music_num);   //음악 삭제
void print(ALBUM a,int music_num);    //음악 출력
void search(char n, NAME name);      //음악 검색
void terminate(void);   //종료
void watch_album(NAME n);
void list_f5(ALBUM a,NAME n);

ALBUM add(ALBUM a,int music_num){
	char ch1[SIZE1],ch2[SIZE1],ch3[SIZE1],ch4[SIZE1];
	
	printf("%d.",a.music_number[music_num]);
	printf("제목 : ");
	gets(ch1);
	strcpy(a.music_list[music_num].title,ch1);  //a.music_list[music_num].title = ch1;
	printf("가수 : ");
	gets(ch2);
	strcpy(a.music_list[music_num].singer,ch2);  //a.music_list[music_num].singer = ch2;
	printf("저장 경로 : ");
	gets(ch3);
	strcpy(a.music_list[music_num].adress,ch3);    //a.music_list[music_num].adress = ch3;
	printf("종류(가요,팝,클래식,영화음악) : ");
	gets(ch4);
	strcpy(a.music_list[music_num].kind,ch4);      //a.music_list[music_num].kind = ch4;

	return a;
}

void delete(ALBUM a,int music_number){
	memset(a.music_list[music_number].title,0,SIZE1);
	memset(a.music_list[music_number].singer,0,SIZE1);
	memset(a.music_list[music_number].adress,0,SIZE1);
	memset(a.music_list[music_number].kind,0,SIZE2);
	
}

void print(ALBUM a,int music_number){
   printf("제목 : %s\n",a.music_list[music_number].title);
   printf("가수 : %s\n",a.music_list[music_number].singer);
   printf("저장 장소 : %s\n",a.music_list[music_number].adress);
   printf("종류(가요,팝,클래식,영화음악) : %s\n",a.music_list[music_number].kind);
}

void search(char n,NAME name){
    int i;
	
    for(i=0;i<10;i++){
        if(name.music_title[i] == n){
            printf("제목 : %s\n",name.music_title[i]);
            printf("가수 : %s\n",name.music_title[i]);
            printf("저장 장소 : %s\n",name.music_title[i]);
            printf("종류(가요,팝,클래식,영화음악) : %s\n",name.music_title[i]);
        }
    }

}

void terminate(void){
    exit(0);
}

void watch_album(NAME n){
    int i;
    
    for(i=0;i<10;i++){
		printf("------------------------\n");
        printf("%d.%s\n",i+1,n.music_title[i]);
    }
}

void list_f5(ALBUM a,NAME n){
	int i;
	
	for(i=0;i<10;i++)
		strcpy(n.music_title,a.music_list[i].title);
}


int main(void){
    MUSIC m = {"Can't Take My Eyes Off You","Notting Hill","c:\\mp3\\oldpop","팝"};
    ALBUM a;
    int number,i;
    NAME name;
	char name1;

    strcpy(a.music_list[0].title,m.title);
    strcpy(a.music_list[0].singer,m.singer);
    strcpy(a.music_list[0].adress,m.adress);
    strcpy(a.music_list[0].kind,m.kind);
	
	list_f5(a,name);
	

  /*  printf("======================\n");          //메뉴 띄우기
    printf("1.음악 추가\n");
    printf("2.음악 삭제\n");
    printf("3.음악 출력\n");
    printf("4.음악 검색\n");
    printf("5.음악 플레이어 종료\n");
    printf("======================\n"); */
    
    while(1){
        printf("======================\n");          //메뉴 띄우기
        printf("1.음악 추가\n");
        printf("2.음악 삭제\n");
        printf("3.음악 출력\n");
        printf("4.음악 검색\n");
        printf("5.음악 플레이어 종료\n");
        printf("======================\n");

        printf("원하는 메뉴를 선택하시오 : ");                                        //선택한 것에 따라 달라진 선택지를 띄우기(1~4 a띄우기,5는 종료)
        scanf("%d%*c",&number);

        if(number == 1){
            watch_album(name);
            add(a,number);
			list_f5(a,name);
            continue;
        }
        else if(number == 2){
            watch_album(name);
            delete(a,number);
			list_f5(a,name);			
            continue;
        }
        else if(number == 3){
            watch_album(name);
            print(a,number);
			list_f5(a,name);
            continue;
        }
        else if(number == 4){
            watch_album(name);
            printf("찾는 노래의 제목을 입력하시오 :");
            gets(name1);
			list_f5(a,name);
            search(name1,name);
            continue;
        }
        else{
            terminate();
            break;
        }
    }

    return 0;

}