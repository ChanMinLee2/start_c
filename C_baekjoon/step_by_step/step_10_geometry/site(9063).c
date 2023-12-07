// 1차 시도 실패 : 예시 1번부터 틀림 아마 로직이 틀린듯 재점검 ㄱ
// 2차 시도 실패 : count 1, 2일때 각각 로직 추가. 그런데 94퍼 실패함. 
// 3차 시도 성공 : count 1일때 종료조건 없었음.

#include <stdio.h>

int main()
{
    int count = 0;
    int min_x = 0;
    int max_x = 0;
    int min_y = 0;
    int max_y = 0;
    int num_x = 0;
    int num_y = 0;
    
    int flag = 0;
    
    scanf("%d", &count);
    
    if(count == 1)
    {
        printf("%d", 0);
        return 0;
    }
    
    for (int i = 0; i < count; i++) {
        scanf("%d %d", &num_x, &num_y);
        
        if( i == 1 && count == 2 && min_x != num_x && min_y != num_y)
        {
            flag = 1;
        }
        
        if( i == 0 )
        {
            min_x = num_x;
            max_x = num_x;
            min_y = num_y;
            max_y = num_y;
            continue;
        }
        
        else 
        {
            if( num_x > max_x )
                max_x = num_x;
                
            if(num_x < min_x)
                min_x = num_x;
                
            if( num_y > max_y )
                max_y = num_y;
                
            if(num_y < min_y)
                min_y = num_y;
        }
        
        if(flag == 1)
        {
            printf("%d", (max_x - min_x) * (max_y - min_y));
            return 0;
        }
    }
    
    //printf("%d %d %d %d\n", max_x, min_x, max_y, min_y);
    printf("%d", (max_x - min_x) * (max_y - min_y));
}
