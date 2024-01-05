// 1차 시도 성공 : 설탕 배달 - 그리디한 코인 분배와 동일한 로직
#include <stdio.h>

int main()
{
    int kg = 0;
    scanf("%d", &kg);
    
    int posiblity = 0;
    int count_for3 = 0;
    //int count_for5 = 0;
    
    int dummy = kg;
    while(dummy >= 0)
    {
        if((dummy%5) == 0)
        {
            printf("%d", dummy/5 + count_for3);
            posiblity++;
            break;
        }
        
        else
        {
            dummy -= 3;
            count_for3++;
        }
    }
    
    if(posiblity == 0)
    {
        printf("%d", -1);
    }
    
}
