#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int * num1_pointer = &num1;
    int ** num1_double_pointer = &num1_pointer;
    int *** num1_tri_pointer = &num1_double_pointer;  // 이중 포인터 변수의 주소값을 저장함. 

    // 삼중 포인터까지 사용한다면, 위 num1 변수의 표현 방식은 4가지가 됨.
    printf(" num1 = %d \n", num1);
    printf(" num1 = %d \n", *num1_pointer);
    printf(" num1 = %d \n", **num1_double_pointer);
    printf(" num1 = %d \n", ***num1_tri_pointer);

    return 0;

}