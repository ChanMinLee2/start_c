#include <stdio.h>

int add_num(int num1, int num2)
{
    int add = num1 + num2;
    return add;
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    int (*func_pointer)(int, int) = add_num;
    printf("%d",func_pointer(num1, num2));

    return 0;

}