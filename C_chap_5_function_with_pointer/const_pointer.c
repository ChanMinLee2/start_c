#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    // const (type) * (pointer_valialbe) : 이 포인터가 가리키는 데이터를 이 포인터를 통해 변경하는 것을 금지함.
    const int * pointer_num1 = &num1;
    // const (type) * (pointer_valiable) : 이 포인터에 저장된 데이터의 상수화(변경 금지)함을 의미함.
    int * const pointer_num2 = &num2;

    // *pointer_num1 = 11; << 컴파일 에러 발생.
    // *pointer_num2 = 11; << 컴파일 에러 발생.
    // pointer_num2 = &num1;

    
    return 0;
}