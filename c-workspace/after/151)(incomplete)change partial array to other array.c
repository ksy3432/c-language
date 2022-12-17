//문자열의 특정 파트를 입력한 파트로 교체하기
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define SIZE 80

int main(void){
    char s1[SIZE],s2[SIZE],find[SIZE],change[SIZE],*token;
    int i,m,count;

    printf("문자열을 입력하시오: ");
    gets(s1);

    printf("\n입력하신 문자열은 %s입니다.",s1);

    printf("\n입력한 문자열 중 찾을 문자열을 입력하시오 : ");
    gets(find);

    printf("찾을 문자열과 교환할 문자열을 입력하시오: ");
    gets(change);

    count = 0;
    m = 0;
    
    for(i=0;i<SIZE;i++){
        if(isspace(s1) != 0)
           count++;
    }
    printf("%d",count);

    
 /*   while(1){
        if(m<count){
           for(i=0;i<count;i++){
              token = strtok(s1," ");
              printf("토큰은 %s입니다\n",token);
              if(token == NULL)  
                   break;
              else{
                   for(i=0;i<strlen(token);i++){
                       if(token[i] == find[i]){
                            s2[i] = change[i];
                            m++;}
                   
                        else{
                            s2[i] = token[i];
                            m++;}
                }
            }
        }
    }   
        else{   
            token = strtok(NULL," ");
            if(token == NULL)  
                 break;
            else{
                 for(i=0;i<strlen(token);i++){
                     if(token[i] == find[i]){
                        
                        s2[i] = change[i];}
                     else
                         s2[i] = token[i];
            }
        }
    }
}
*/
    printf("변형된 문자열은 %s입니다\n",s2);

    return 0;

}