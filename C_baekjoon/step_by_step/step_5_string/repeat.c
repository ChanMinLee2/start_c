#include <stdio.h>

int main(void)
{
    char temp[20];
    int test = 0;
    int rep = 0;
    
    scanf("%d", &test);
    
    for(int i = 0; i < test; i++)
    {
        scanf("%d %s", &rep, temp);
        for(int j = 0; j < strlen(temp); j++)
        {
            for(int k = 0; k < rep; k++)
            {
                printf("%c", temp[j]);
            }
        }
        printf("\n");
    }
    
}