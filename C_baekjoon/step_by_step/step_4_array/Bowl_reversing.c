#include <stdio.h>

int main(void)
{
    int array[101];
    int temp[101];
    
    for(int i = 0; i < 101; i++)
    {
        array[i] = 0;
        temp[i] = 0;
    }

    int sp, ep = 0;
    
    int n, m = 0; // size, chage count
    scanf("%d %d", &n, &m);
    
    for(int i = 0; i <= n; i++)
    {
        array[i] = i;
    }
    
    for(int j = 0; j < m; j++)
    {
        scanf("%d %d", &sp, &ep);
        for(int i = sp; i <= ep; i++)
        {
            temp[ep-i+sp] = array[i];
        }
        
        for(int i = sp; i <= ep; i++)
        {
            array[i] = temp[i];
        }
    }
    
    for(int k = 1; k <= n; k++)
    {
        printf("%d ", array[k]);
    }
}
