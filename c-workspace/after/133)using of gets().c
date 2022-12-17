//gets()와 puts()
#include<stdio.h

int main(void){
    char buffer[21];

    printf("문자열을 입력하시오 :\n");
    gets( buffer );

    printf("입력된 라인은 다음과 같습니다\n");
    puts(buffer);

    return 0;
}