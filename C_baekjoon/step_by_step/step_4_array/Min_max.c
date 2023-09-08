#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int min = 0;
    int max = 0;
    
    int arr[1000000];
    
    int size = 0;
    
    scanf("%d", &size);
    
    for(int i = 0 ; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    min = arr[0];
    max = arr[0];
    
    for(int i = 0 ; i < size; i++)
    {
        if( arr[i] <= min )
        {
            min = arr[i];
        }
        
        if( arr[i] >= max )
        {
            max = arr[i];
        }
    }
    printf("%d %d\n", min, max);
}
