//속담 확장
#include<stdio.h>

void set_proverb(char **q,int choice);

int main(void){
    char *s = NULL;
    int choice;
    
    printf("알고 싶은 속담의 번호를 입력하시오(1~10) :");
    scanf("%d",&choice);

    set_proverb(&s,choice);
    printf("selected prover = %s\n",s);

    return 0;
}

/*
int choose(int choice){
    printf("알고 싶은 속담의 번호를 입력하시오(1~10) :");
    scanf("%d",&choice);

    return choice;
}*/

void set_proverb(char **q, int choice){
    /*static char *str1 = "A friend in need is a friend indeed";
    static char *str2 = "A  little knowledge is dangerous thing";
    static char *str3 = "Love begets love";
    static char *str4 = "pride will have a fall";
    static char *str5 = "power is dangerous unless you have humility";
    static char *str6 = "Manner makes man";
    static char *str7 = "No news is good news";
    static char *str8 = "If there is no wind, row";
    static char *str9 = "There is no place like home";
    static char *str10 = "promise little, do much";*/

    static char *str[10] = {"A friend in need is a friend indeed"
                            ,"A  little knowledge is dangerous thing"
                            ,"Love begets love"
                            ,"pride will have a fall"
                            ,"power is dangerous unless you have humility"
                            ,"Manner makes man"
                            ,"No news is good news"
                            ,"If there is no wind, row"
                            ,"There is no place like home"
                            ,"promise little, do much"};


/*
    switch(choice <= 1 && choice >= 10){
    case 1 :
       *q = str[0];
        break;

    case 2 : 
       *q = str[1];
        break;
    
    case 3 :
       *q = str[2];
        break;

    case 4 :
       *q = str[3];
        break;

    case 5 :
       *q = str[4];
        break;

    case 6 :
       *q = str[5];
        break;

    case 7 :
       *q = str[6];
        break;

    case 8 :
       *q = str[7];
        break;

    case 9 :
       *q = str[8];
        break;

    case 10 :
       *q = str[9];
        break;                            
    
    default:
        printf("다시 입력하시오");
        break;
    }*/

    while(choice >= 1 && choice <= 10){
        if(choice == 1){
              *q = str[0];
              break;
        }

        else if(choice == 2){
              *q = str[1];
              break;
        }

        else if(choice == 3){
              *q = str[2];
              break;
        }

        else if(choice == 4){
              *q = str[3];
              break;
        }

        else if(choice == 5){
              *q = str[4];
              break;
        }

        else if(choice == 6){
              *q = str[5];
              break;
        }

        else if(choice == 7){
              *q = str[6];
              break;
        }

        else if(choice == 8){
              *q = str[7];
              break;
        }

        else if(choice == 9){
              *q = str[8];
              break;
        }

        else if(choice == 10){
              *q = str[9];
              break;
        }

        else{
            printf("다시 입력하시오");
            break;
        }
    }

}



/*
"A friend in need is a friend indeed"
,"A  little knowledge is dangerous thing"
,"Love begets love"
,"pride will have a fall"
,"power is dangerous unless you have humility"
,"Manner makes man"
,"No news is good news"
,"If there is no wind, row"
,"There is no place like home"
,"promise little, do much"*/