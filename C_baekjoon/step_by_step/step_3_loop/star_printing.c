#include <stdio.h>

int main(void)
{
    int num = 0;
    scanf("%d", &num);

    for(int count = num; count > 0; count--)
    {
        for(int i = count-1; i > 0; i--)
        {
            printf(" ");
        }
        
        for(int j = count; j <= num; j++)
        {
            if(j == num)
                printf("*\n");
            else
                printf("*");
        }
    }
    
        
}
