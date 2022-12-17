//입력된 텍스트의 단어 줄,글자 수를 세는 프로그램
#include<stdio.h>
#include<ctype.h>
#define SIZE 50
#define POINT_S 2

int get_array_number(char *s[POINT_S][POINT_S],char symbol[3]);

int main(void){
    char *s[POINT_S][POINT_S] = {
        {"In the palace of the night the morning never comes and I can never open the last door","If you want to chase the darkness you must become a flame yourself"},
        {"Fail early fail often but always fail forward","If you live for having it all what you have is never enough"}
    };
    char symbol[3];

    while(1){
        printf("입력된 텍스트의 단어 수를 세려면 '-w'를 줄 수를 세려면 '-l'을 글자 수를 세려면 '-c'를 입력하시오 : ");
        scanf("%s",symbol);

        if(symbol == "-w"){
            printf("이 텍스트의 단어의 개수는 %d입니다\n",get_array_number(s,symbol));
            break;
        }

        else if(symbol == "-l"){
            printf("이 텍스트의 줄 수는 %d입니다\n",get_array_number(s,symbol));
            break;
        }

        else if(symbol == "-c"){
            printf("이 텍스트의 글자 수는 %d입니다\n",get_array_number(s,symbol));
            break;
        }

        else{
            printf("다시 입력하시오\n");
        }
    }

    return 0;
}

int get_array_number(char *s[POINT_S][POINT_S],char symbol[3]){
    char *p;
    int i,n,count;

    p = &*s[i][n];

    if(symbol == "-w"){
        for(i=0;i<SIZE;i++){
            for(n=0;n<SIZE;n++){
            if(isspace(*p) != 0){
                count++;
                }
            } 
        }
    }

    else if(symbol == "-l"){
        count = (POINT_S)*2;
        }

    else if(symbol == "-c"){
        for(i=0;i<SIZE;i++){
           for(n=0;n<SIZE;n++){
              if(isalnum(*p) != 0){
                  count++;
              }
           }
        }
    }
    return count;
}
