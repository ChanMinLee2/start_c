#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("num1 : %d, num2 : %d ", a, b);
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    swap(num1, num2);
    printf("num1 : %d, num2 : %d ", num1, num2);

}