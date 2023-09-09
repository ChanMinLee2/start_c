#include <stdio.h>

int main(void)
{
    int size, inputs = 0;
    
    int array[100];
    scanf("%d %d", &size, &inputs);
    
    for(int i = 0; i < 100; i++)
    {
        array[i] = i+1;
    }
    
    int s, e, buf = 0;
    for(int i = 0; i < inputs; i++)
    {
        scanf("%d %d", &s, &e);
        buf = array[s-1];
        array[s-1] = array[e-1];
        array[e-1] = buf;
    }
    
    for(int j = 0; j < size; j++)
    {
        printf("%d ", array[j]);
    }
    
}
