#include <stdio.h>

int main(void)
{
    int num1 = 10, num2 = 20, num3 = 30;
    int * array1[] = { &num1, &num2, &num3}; // 변수의 주소값을 저장함 - 포인터 배열이기 때문.
    
    printf("%d\n", *array1[0]); // 포인터형 원소에 접근하기 때문에 *를 붙여서 값을 반환받으려 함
    printf("%d\n", *array1[1]); // 포인터형 원소에 접근하기 때문에 *를 붙여서 값을 반환받으려 함
    printf("%d\n", *array1[2]); // 포인터형 원소에 접근하기 때문에 *를 붙여서 값을 반환받으려 함

    return 0;
}