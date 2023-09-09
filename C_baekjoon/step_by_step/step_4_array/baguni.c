#include <stdio.h>

int main(void)
{
    int array[101];
    
    for(int i = 0; i<101; i++)
    {
        array[i] = 0;
    }
    
    int size = 0;
    int inputs = 0;
    
    scanf("%d %d", &size, &inputs);
    
    int s, e, num;
    
    for(int i = 0; i < inputs; i++)
    {
        scanf("%d %d %d", &s, &e, &num );
        for(int j = s; j <= e; j++)
        {
            array[j] = num;
        }
    }
    
    for(int k = 1; k <= size; k++)
    {
        printf("%d ", array[k]);
    }
}