#include <stdio.h>

int main(void)
{
    char string[50] = {"I like C programming"};
    printf("string :  %s \n", string);
    
    string[8] = '\0'; // 문자열의 끝을 재정의함.
    printf("string :  %s \n", string);

    string[6] = '\0'; // 문자열의 끝을 재정의함.
    printf("string :  %s \n", string);

    string[1] = '\0'; // 문자열의 끝을 재정의함.
    printf("string :  %s \n", string);

    return 0;
}