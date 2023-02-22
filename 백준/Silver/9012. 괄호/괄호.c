#include<stdio.h>
#include<string.h>

int main()
{
 int t;
 scanf("%d", &t);
 char s[50];
 for(int i=0; i<t; i++){
       int count = 0;
       scanf("%s",s);
       for(int j=0; j<strlen(s); j++){
           if(s[j]=='(')
              count++;
            else
              count--;

            if(count<0){
              printf("NO\n");
                break;
            }
        }
        if(count==0)
           printf("YES\n");

         else if(count > 0)
            printf("NO\n");

    }
     return 0;
}