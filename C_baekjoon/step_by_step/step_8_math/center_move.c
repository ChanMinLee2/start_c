// 1차 시도 성공 : 각 case들 간의 관계파악 -> 한 변의 점개수가 이전 case에서의 한 변의 점개수를 x라하면 x + (x-1)이었음
// 추가로 그 한 변의 점개수 제곱하면 총 점개수 나옴.
#include <stdio.h>

int main(void)
{
    int final_points = 0;
    int side_points = 2;
    int step = 0;
    
    scanf("%d", &step);
    
    for(int i = 1; i <= step; i++)
    {
        side_points += side_points - 1;
    }
    
    printf("%d", side_points * side_points);
}

