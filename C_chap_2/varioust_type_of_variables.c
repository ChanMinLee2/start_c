#include <stdio.h>

int exturnal_number = 1; // 전역변수 선언 (같은 프로그램 내 어디에든 호출 가능)

void ADD_comparing(void)
{
    static int static_number = 3; // static 변수로 main함수 내부에서만 접근이 가능하지만, 할당은 프로그램 종료시까지 유지된다.
    int non_static_number = 3; 

    static_number++;
    non_static_number++; 

    printf("static number = %d, non static number = %d \n", static_number, non_static_number);
}

int main(void)
{
    int i;

    int internal_number = 2; // main()의 지역변수 
    register int register_number = 4; // 빈번히 사용하는 변수는 접근이 가장빠른 레지스터에 저장해주는 것이 성능 향상에 도움이 된다. (지역변수)

    for (i=0; i<3; i++)
    {
        ADD_comparing(); 
    }
       
}