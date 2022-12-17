//틱택토 게임
#include<stdio.h>
int main(void){
    int board[3][3] = {{0,0,0},
                       {0,0,0},
                       {0,0,0}};
    int player1,player2,m,n;

    for(;;){
        printf("(플레이어1) 1~9까지 입력하시오 : ");
        scanf("%d",&player1);
        for(m=0;m<3;m++){
            for(n=0;n<3;n++){
                 printf(" %d",board[m][n]);}
            printf("\n");}
        printf("(플레이어2) 1~9까지 입력하시오 : ");
        scanf("%d",&player2);

        if(player1 > 0 && player1 != player2){
            if(player1 == 1)
              board[0][0] = 1;
            else if(player1 == 2)
              board[0][1] = 1;
            else if(player1 == 3)
              board[0][2] = 1;
            else if(player1 == 4)
              board[1][0] = 1;
            else if(player1 == 5)
              board[1][1] = 1;
            else if(player1 == 6)
              board[1][2] = 1;
            else if(player1 == 7)
              board[2][0] = 1;
            else if(player1 == 8)
              board[2][1] = 1;
            else
              board[2][2] = 1;}
        else 
           printf("이미 선점된 자리입니다.다른 자리를 선택해주세요\n");
          /* printf("(플레이어2) 1~9까지 입력하시오 : ");
           scnaf("%d",&player2); */ 
        
        if(player2 > 0){
            if(player2 == 1)
                board[0][0] = 2;
            else if(player2 == 2)
                board[0][1] = 2;
            else if(player2 == 3)
                board[0][2] = 2;
            else if(player2 == 4)
                board[1][0] = 2;
            else if(player2 == 5)
                board[1][1] = 2;
            else if(player2 == 6)
                board[1][2] = 2;
            else if(player2 == 7)
                board[2][0] = 2;
            else if(player2 == 8)
                board[2][1] = 2;
            else
                board[2][2] = 1;}

        if((board[0][0] && board[0][1] && board[0][2] == 1) || (board[0][0] && board[0][1] && board[0][2] == 2)
         ||(board[1][0] && board[1][1] && board[2][1] == 1) || (board[1][0] && board[1][1] && board[2][1] == 2)
         ||(board[2][0] && board[2][1] && board[2][2] == 1) || (board[2][0] && board[2][1] && board[2][2] == 2)
         ||(board[0][0] && board[1][0] && board[2][0] == 1) || (board[0][0] && board[1][0] && board[2][0] == 2)
         ||(board[0][1] && board[1][1] && board[2][1] == 1) || (board[0][1] && board[1][1] && board[2][1] == 2)
         ||(board[0][2] && board[2][1] && board[2][2] == 1) || (board[0][2] && board[2][1] && board[2][2] == 2)
         ||(board[0][0] && board[1][1] && board[2][2] == 1) || (board[0][0] && board[1][1] && board[2][2] == 2)
         ||(board[0][2] && board[1][1] && board[2][0] == 1) || (board[0][2] && board[1][1] && board[2][0] == 2)){
                for(m=0;m<3;m++){
                for(n=0;n<3;n++){
                     printf(" %d",board[m][n]);}
                printf("\n");}
                printf("경기가 종료되었습니다\n");
                break;}
        else    
            for(m=0;m<3;m++){
                for(n=0;n<3;n++){
                     printf(" %d",board[m][n]);}
                printf("\n");}
                continue;
         }
    return 0;
}