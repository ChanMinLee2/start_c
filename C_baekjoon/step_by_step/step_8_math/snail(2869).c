// 1차 시도 실패 : 시간 초과, 시간 맞출려면 한번에 계산해야할듯.. goal에서 바로 up한번 빼고 나머지로 한번에 계산해보자. 

#include <stdio.h>

int main()
{
    int curr_height = 0;
    int up = 0;
    int down = 0;
    int goal = 0;
    
    scanf("%d %d %d", &up, &down, &goal);
    
    int i = 0; // i = days for this
    while(1)
    {
        if(curr_height + up >= goal)
        {
            i++;
            break;
        }
        
        else
        {
            curr_height += up - down;
            i++;
        }
    }
    
    printf("%d", i);
}
