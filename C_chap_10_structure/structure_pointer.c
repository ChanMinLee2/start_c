#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
};

int main(void)
{
    struct point p1 = {1, 2};
    struct point p2 = {100, 200};

    // 구조체 변수를 가리키는 포인터 변수
    struct point * pptr = &p1;

    // * 연산을 통한 구조체 변수 포인터 접근
    (*pptr).xpos += 1;
    (*pptr).ypos += 2;

    printf(" %d %d \n", (*pptr).xpos, (*pptr).ypos );

    // -> 연산을 통한 구조체 변수 포인터 접근
    pptr = &p2;
    pptr -> xpos += 1;
    pptr -> ypos += 10;

    printf(" %d %d \n", pptr->xpos, pptr->ypos );

    return 0;
}
