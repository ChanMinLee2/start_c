#include <stdio.h>

int main(void)
{
    int num = 3;
    int * ptr1 = &num; // 이때 ptr1 은 주소값을 저장, *ptr1은 num 변수를 참조함.
    int * ptr2 = ptr1; // 포인터 변수의 값 복사
    // 이중 포인터 변수의 선언과 포인터 변수의 주소값으로 초기화
    // bptr은 ptr1의 주소값 저장, *bptr은 ptr1 변수를 참조, **bptr은 num변수를 참조.
    int ** bptr = &ptr1; 
    

    printf(" %9p %9p \n", ptr1, *bptr); // 주소값 출력
    // num에 접근하는 4가지 방법. 
    printf(" %9d %9d \n", *ptr1, **bptr);
    printf(" %9d %9d \n", num, *ptr2);

    return 0;

}