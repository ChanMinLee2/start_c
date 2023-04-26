#include <stdio.h>

int main(void)
{
    char array_string[] = {"hello world!"}; // 배열의 크기를 정하지 않고 초기화 시 알아서 크기를 정한다.

    printf("size of array : %d\n", sizeof(array_string));
    printf("NULL print by char : %c\n", array_string[12]);
    printf("NULL print by int : %d\n", array_string[12]);
    
    array_string[11] = '?'; //문자를 표현하고 싶다면 ''(작은따옴표)를 이용하도록 하자.
    printf("changed string : %s\n", array_string);

    return 0; 
}