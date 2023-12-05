// 1차 시도 성공 : 피라미드 모양을 왼쪽 기준선으로 쭉 정렬해서 생각하면 됨. (둘레)
#include <stdio.h>

int main()
{
    long long int level = 0;
    
    scanf("%lld", &level);
    
    printf("%lld", level*2 + 2*level);
}
