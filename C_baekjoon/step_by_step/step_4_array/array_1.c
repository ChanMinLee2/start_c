#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 0; 
    
    int * arr;
    
    int size = 0;
    
    scanf("%d", &size);
    arr = (int*)malloc(size * sizeof(int));
    
    for(int i = 0 ; i < size; i++)
    {
        scanf("%d", arr[i]);
    }

    //printf("good : %d\n", arr[3]);

    int flag = 0;
    scanf("%d", &flag);
    for(int i = 0 ; i < size; i++)
    {
        if( arr[i] == flag )
            count++;
            
    }
    printf("%d\n", count);
}