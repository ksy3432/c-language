//사용자에게 질문을 제시하고 답변을 받아서 긍정이면 1,부정이면 0을 반환
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

//int get_response(char *prompt);

int main(void){
    char *prompt;
    char *ch;

    printf("please enter positive answer(yes,ok) or negative answer(no) : ");
    gets(prompt);

    for(ch = prompt;ch;ch++){
        if(ch == "okay" || ch == "yes" || ch  == "ok"){
           printf("lt is positive answer\n");
        }  
        else if(ch == "no"){
            printf("it is negative answer\n");
        }
        else{
            printf("잘못된 답변입니다.다시 입력해주세요\n");
            break;
        }        
    }

    return 0;
}
 /*int get_response(char *prompt){
    char *ch;

    for(ch = prompt;ch;ch++){
        if(ch == "okay" || ch == "yes" || ch  == "ok"){
            return 0;
            break;
        }  
        else if(ch == "no"){
            return 1;
            break;
        }
        else{
            printf("잘못된 답변입니다.다시 입력해주세요\n");
            break;
        }        
    }
}*/

