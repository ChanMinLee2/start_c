#include <stdio.h>

int main(void)
{
    int origin[6];
    int input[6];
    
    for(int i = 0; i < 6; i++)
    {
        if(i <= 1)
        {
            origin[i] = 1;
        }
        else if (i >= 2 && i <= 4)
        {
            origin[i] = 2;
        }
        else
        {
            origin[i] = 8;
        }
    }
    
    for(int j = 0; j < 6; j++)
    {
        scanf("%d", &input[j]);
    }
    
    for(int k = 0; k < 6; k++)
    {
        printf("%d ", origin[k] - input[k]);
    }
}