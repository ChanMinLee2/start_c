// 1차 시도 실패 : 22퍼 부근에서 안됨. 아마 출력 조건이 이상한듯.

#include <stdio.h>

int main()
{
    int input = 0;
    int order = 0;
    int division_idx = 0;
    
    int division[10000];
    
    scanf("%d %d", &input, &order);
    
    for(int i = 1; i<=input/2; i++)
    {
        if(input % i == 0)
        {
            division[division_idx++] = i;
        }
    }
    
    printf("%d", division[order-1]);
}
