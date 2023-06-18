#include <stdio.h>

void swap(int a, int b) // 단순히 값의 복사만 일어남, 이 매개변수는 함수종료와 동시에 사라짐.
{
    int temp = a;
    a = b;
    b = temp;
    printf("swap num1 : %d, num2 : %d ", a, b);
}

void reference_swap(int* a, int *b) // 주소값을 전달받아서 사용함. 
{
    int* temp;

    temp = a;
    a = b;
    b = a;
    printf("reference_swap num1 : %d, num2 : %d ", *a, *b); // 주소값 변수의 주소를 사용하려면 *를 붙여 값을 참조해야함.
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    swap(num1, num2);
    printf("num1 : %d, num2 : %d ", num1, num2);

    reference_swap(&num1, &num2);
    printf("num1 : %d, num2 : %d ", num1, num2);

}