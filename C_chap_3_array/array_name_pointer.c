#include <stdio.h>

int main(void)
{
    int arr[3] = {0,1,2};
    printf("배열의 이름 : %p \n", arr);
    printf("첫 번째 요소: %p \n", &arr[0]);
    printf("두 번째 요소: %p \n", &arr[0]);
    printf("세 번째 요소: %p \n", &arr[0]);
    // arr = &arr[i]; // 이 문장은 컴파일 에러를 일으킴.
    // 배열의 이름은 변수가 아닌 상수 형태의 데이터이기에 대입연산 불가능.
    return 0;
}   