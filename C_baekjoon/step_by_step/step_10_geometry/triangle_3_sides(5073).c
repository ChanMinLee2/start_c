// 1차 시도 16퍼 실패 : 아마 로직 중 틀린 게 있을듯. 
// 2차 시도 성공 : valid check 로직 수정. 같은 경우까지 삼각형 불가. 

#include <stdio.h>

int valid_check(int s1, int s2, int s3)
{
    if(s1 >= s2 + s3 || s2 >= s1 + s3 || s3 >= s1+ s2)
    {
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    int side_1 = 0;
    int side_2 = 0;
    int side_3 = 0;
    
    while (1) {
        scanf("%d %d %d", &side_1, &side_2, &side_3);
        if(side_1 == 0 && side_2 == 0 && side_3 == 0)
            return 0;
        
        if(valid_check(side_1, side_2, side_3) == 0)
        {
            printf("%s\n", "Invalid");
            continue;
        }
            
        else
        {
            if(side_1 == side_2 && side_1 == side_3)
            {
                printf("%s\n","Equilateral");
                continue;
            }
            
            if(side_1 == side_2 || side_2 == side_3 || side_3 == side_1)
            {
                printf("%s\n","Isosceles");
                continue;
            }
            
            printf("%s\n","Scalene");
        }
    }
    
}

