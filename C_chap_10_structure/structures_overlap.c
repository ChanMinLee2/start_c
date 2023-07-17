#include <stdio.h>

typedef struct structures_overlap
{
    int xpos;
    int ypos;
}point;

typedef struct radiation
{
    point point;
    double rad; 
}circle;

int main(void)
{
    point point1 = { 1, 1};
    circle circle1 = { point1, 3.4};
    circle * cptr = &circle1;
    // 중첩 구조체 접근 - 일반 변수
    printf(" point 1 : { %d , %d }, circle 1 rad : %d \n", (circle1.point).xpos,(circle1.point).ypos, circle1.rad );
    // 중첩 구조체 접근 - 포인터 변수
    printf(" point 1 : { %d , %d }, circle 1 rad : %d ", (cptr->point).xpos , (cptr->point).xpos, cptr->rad);

    return 0;
}