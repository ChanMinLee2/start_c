#include <stdio.h>

int main(void)
{
    int count = 0;
    
    scanf("%d", &count);
    
    int count_flag = 2 * count - 1;
    
    for(int i = 1; i <= count_flag; i++ )
    {
        if(i <= count)
        {
            // 공백 출력
            for(int j = count - i; j > 0; j--)
            {
                printf(" ");
            }
            
            // 별 출력 
            for(int k = 0; k < 2 * i - 1; k++)
            {
                printf("*");
            }
            
        }
        
        else
        {
            for(int j = 0; j < (i % count); j++)
            {
                printf(" ");
            }
            
            for(int k = 0; k < (count_flag) - (2 * (i % count)) ; k++)
            {
                printf("*");
            }
        }
        
        printf("\n");
        // i 6 -> 7 * , i 7 -> 5 * 
    }
}