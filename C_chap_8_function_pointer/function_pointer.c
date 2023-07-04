#include <stdio.h>

// 임의의 함수 
int add_num(int num1, int num2)
{
    int add = num1 + num2;
    return add;
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    // 위의 임의의 함수의 반환형, 인수형태를 그대로 하여 함수포인터 선언, 임의의 함수를 참조하게 함.
    int (*func_pointer)(int, int) = add_num;
    // 사용시에는 함수와 동일한 방식으로 사용
    printf("%d",func_pointer(num1, num2));

    return 0;

}