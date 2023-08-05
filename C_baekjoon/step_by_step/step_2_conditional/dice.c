#include <stdio.h>

int main(void)
{
    int nun1 = 0;
    int nun2 = 0;
    int nun3 = 0;
    
    scanf("%d %d %d", &nun1, &nun2, &nun3);
    
    int big = 0;
    if(nun1 >= nun2)
    {
        if(nun1 >= nun3)
        {
            big = nun1;
        }
        else
        {
            big = nun3;
        }
    }
    else
    {
        if(nun2 >= nun3)
        {
            big = nun2;
        }
        else
        {
            big = nun3;
        }
    }
    
    if((nun1 == nun2) && (nun2 == nun3))
    {
        printf("%d", 10000 + nun1*1000);
    }
    
    else if((nun1 != nun2) && (nun1 != nun3) && (nun2 != nun3))
    {
        printf("%d", 100* big);
    }
    
    else
    {
        if(nun1 == nun2)
            printf("%d", 1000+ nun1*100 );
        if(nun2 == nun3)
            printf("%d", 1000+ nun2*100 );
        if(nun1 == nun3)
            printf("%d", 1000+ nun3*100 );
    }
    return 0;
}