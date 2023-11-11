// 1차 시도 성공 : 벌집 내부에 숫자들의 규칙 찾기 >> 이동거리에 따라 그룹화 >> 각 그룹의 숫자 개수 1, 6, 12, 18 , ... 
// 즉 그룹 기준 거리가 1 늘어날 수록 그룹의 숫자 수도 6에 비례해 늘어남. >. 역으로 반복문으로 빼면서 체크 

#include <stdio.h>
#include <math.h>

int main(void)
{
    // 1 >> 1 , 2-7(6개) >> 2, 8-19(12개) >> 3 ... 
    int goal_room = 0;
    
    scanf("%d", &goal_room);
    
    int path_checker = goal_room;
    int i = 1; // 끝 방도 거리에 포함
    while(1)
    {
        if(i == 1)
        {
            path_checker -= 1;
        }
        
        if(goal_room == 1)
        {
            break;
        }
        else
        {
            // 그룹 기준 확인 후 안되면 거리++ 하고 종료 ( 처음 방도 거리에 포함 )  
            if(path_checker - 6 * i <= 0) 
            {
                i++;
                break;
            }
            
            else
            {
                path_checker -= 6 * i;
                i++;   
            }
        }
    }
    
    printf("%d", i);
    
}

