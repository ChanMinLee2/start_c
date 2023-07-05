#include <stdio.h>

void simple_func(void)
{
    printf("so simple state\n");
    return;
}

int main(void)
{
    int num = 10;
    // void 형 포인터 생성 : 어떤 타입의 자료형이든 주소값이 저장 가능하다. 단 *연산은 불가능.
    // 1. int
    void * v_pointer = &num;
    printf("%d\n", v_pointer);
    // 2. function
    v_pointer = simple_func;
    printf("%d\n", v_pointer);

    return 0;
}