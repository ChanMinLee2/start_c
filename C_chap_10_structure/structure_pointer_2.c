#include <stdio.h>

struct point
{
    int xpos;
    int ypos;
    struct point * pptr;
};

int main(void)
{
    struct point arr[3];
    arr[0].xpos = 1;
    arr[0].ypos = 2;
    arr[0].pptr = &arr[1];
    arr[1].xpos = 3;
    arr[1].ypos = 4;
    arr[1].pptr = &arr[2];
    arr[2].xpos = 5;
    arr[2].ypos = 6;
    arr[2].pptr = &arr[0];

    printf(" 점의 연결 관계 \n");
    for (int i = 0; i < 3; i++)
    {
        // arr[i](구조체 변수 배열)의 pptr이라는 구조체 포인터 변수를 .로 참조, 참조한 변수를 이용 시 -> 연산. 
        // *(arr[i].pptr).xpos == (arr[i].pptr)->xpos  
        printf(" p%d link : { %d, %d } \n", i, (arr[i].pptr)->xpos, (arr[i].pptr)->ypos );
    }
    
    return 0;
}