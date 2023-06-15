#include <stdio.h>

void print_int_array(int * array, int len_of_array) // 배열을 매개변수로 받는 함수 - 배열의 주소값을 전달해줌
{
    for (int i = 0; i < len_of_array; i++)
    {
        printf("%d \n", array[i]);
    }
    
    return;
}

void print_str_array(char* * array, int len_of_array)
{
    for (int i = 0; i < len_of_array; i++)
    {
        printf("%s \n", array[i]);
    }
    
    return;
}

int main(void)
{
    int array[] = {10 , 20 , 30};
    char* string[] = {"apple", "banana", "kiwi"};

    print_int_array(array, sizeof(array)/sizeof(array[0])); // 배열을 매개변수로 사용하려면 이처럼 배열의 주소값(이름) 변수를 전달해 주어야 한다. 
    print_str_array(string, sizeof(string)/sizeof(string[0])); // 배열의 크기 = 배열 자체 크기 / 배열의 원소 자료형 크기

    return 0;
}