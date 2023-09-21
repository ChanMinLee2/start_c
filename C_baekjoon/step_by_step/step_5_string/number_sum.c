#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char temp[100];
    
    int count = 0;
    int sum = 0;
    scanf("%d", &count);
    scanf("%s", temp);
    
    for(int i = 0; i < count; i++)
    {
        sum += (int)(temp[i] - '0');
    }
    
    printf("%d", sum);
}