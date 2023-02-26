#include<stdio.h>

int main() {
    int n, check;
    char s[51][51], result[51];

    scanf("%d", &n);

    for(int i=0; i<n; i++) 
        scanf("%s", s[i]);

    for(int j=0; j<51; j++) {
        check = 1;
        for(int i=1; i<n; i++) 
           if(s[i][j] != s[0][j]) 
               check = 0;

        if(check)
            result[j] = s[0][j];

        else result[j] = '?';
    }
    printf("%s", result);
}