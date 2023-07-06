#include <stdio.h>

int main(void)
{
    int char1 = fgetchar(); // 문자 1개 입력
    int char2 = fgetc(stdin); // 문자 1개 입력( 어디에서 받을 지 지정)

    fputchar(char1); // 문자 1개 출력
    fputc(char2, stdout); // 문자 1개 출력( 어디에서 받을 지 지정)

    return 0;
}