#include <stdio.h>

typedef struct 
{
    int xpos;
    int ypos;
}point;

// 원점대칭 - call by reference (주소값을 전달받음)
void orgsymtrans(point * pptr)
{
    pptr->xpos = (pptr->xpos) * (-1);
    pptr->ypos = (pptr->ypos) * (-1);
}

// 점 출력
void print_pos(point pos)
{
    printf(" [%d, %d] \n", pos.xpos , pos.ypos);
}

int main(void)
{
    point pos = { 1, 2};
    print_pos(pos);
    orgsymtrans(&pos); // CBR로 인한 주소값 전달.
    print_pos(pos);

    return 0;
}