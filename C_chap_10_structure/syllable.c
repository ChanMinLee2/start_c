#include <stdio.h>

typedef enum syllable // 열거형 자료형 - 관련된 상수 변수들 묶는 용도
{
    Do = 1, Re = 2, Mi = 3, Fa = 4, So = 5, La = 6, Ti = 7
}syllable;

void sound(syllable sy)
{
    switch (sy)
    {
    case Do:
        printf("도는 하얀 도화지\n"); return;
    case Re:
        printf("레는 둥근 레코드\n"); return;
    case Mi:
        printf("미는 파란 미나리\n"); return;
    case Fa:
        printf("파는 예쁜 파랑새\n"); return; 
    case So:
        printf("솔는 작은 솔방울\n"); return;
    case La:
        printf("라는 라디오고요\n"); return;
    case Ti:
        printf("시는 졸졸 시냇물\n"); return;
                            
    }
}

int main(void)
{
    syllable sy;

    for (sy = Do; sy <= Ti ; sy++)
    {
        sound(sy);
    }
    return 0;
}