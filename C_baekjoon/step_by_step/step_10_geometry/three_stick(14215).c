// 1차 시도 성공 : 3개 받아서 조건(3개가 다같음, 3개가 다다름, 1개만 다름) 별로 삼각형 둘레 최대 구함. 
#include <stdio.h>

int main()
{
    int nums[3];
    
    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
    
    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            if(nums[j] < nums[i])
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
    
    if(nums[0] == nums[1] && nums[0] == nums[2])
    {
        printf("%d", 3*nums[0]);
        return 0;
    }
    
    else if(nums[0] != nums[1] && nums[0] != nums[2] )
    {
        // 이거 보다 nums[2]가 작은 것 중 최대여야 최대 둘레임
        int condition_of_triangle = nums[1] + nums[0];
        
        while(nums[2] >= condition_of_triangle)
        {
            nums[2]--;
        }
        
        printf("%d", condition_of_triangle+nums[2]);
        return 0;
    }
    
    else
    {
        // 작은 수 두개가 같음
        if(nums[0] == nums[1])
        {
            int condition_of_triangle = nums[1]*2;
            nums[2] = condition_of_triangle-1;
            
            printf("%d", condition_of_triangle+nums[2]);
            return 0;
        }
        
        else
        {
            printf("%d", nums[0] + nums[1] + nums[2]);
        }
    }
}
