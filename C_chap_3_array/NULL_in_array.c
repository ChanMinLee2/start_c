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
    
    for(int i = 0; i < 50; i++) // 문자열을 초기화하는 루프 모든 자리에 /0(널)문자를 넣음. 
    {
        string[i] = '\0';
    }

    return 0;
}
