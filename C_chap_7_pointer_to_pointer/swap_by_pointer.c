#include <stdio.h>

// 이 함수는 포인터 변수를 복사해서 스왑을 진행하기 때문에 실제로는 바뀌지 않음.
int swap_by_value(int* p1, int* p2) 
{
    int * temp = p1;
    p1 = p2;
    p2 = temp;
}

// 이 함수는 포인터 변수의 주소값(실제 위치)을 복사해서 스왑을 진행하기 때문에 실제로 바뀜. - 포인터 변수의 주소값 : &(포인터변수)
int swap_by_ref(int ** p1, int ** p2)
{
    int * temp = *p1;    //이 함수의 p1 == &p1 --> *p1 == p1
    *p1 = *p2;
    *p2 = *p1;
}

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    int * p1 = &num1;
    int * p2 = &num2;

    swap_by_value(p1, p2);
    printf("%d %d\n",p1,p2);
    swap_by_ref(&p1, &p2);
    printf("%d %d\n",p1,p2);
    

    return 0;
}