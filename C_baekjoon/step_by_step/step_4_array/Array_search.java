#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 0; 
    
    int arr[10000];
    
    int size = 0;
    scanf("%d", &size);
    
    int flag = 0;
    scanf("%d", &flag);
    
    for(int i = 0 ; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0 ; i < size; i++)
    {
        if( arr[i] < flag )
            printf("%d ", arr[i]);
    }
    
}
