#include <stdio.h>

int main(void)
{
    int array[10];
    int Q_numbers[10];
    int Q_numsize = 0;
    for(int i = 0; i < 10; i++)
    {
        Q_numbers[i] = 0;
        
    }
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", array + i);
        array[i] = array[i] % 42;
        if(i == 0)
        {
            Q_numbers[0] = array[i];
            Q_numsize++;
            continue;
        }
        
        for(int j = 0; j < Q_numsize; j++)
        {
            if(array[i] == Q_numbers[j])
            {
                break;
            }
            
            if(j == Q_numsize - 1)
            {
                if(array[i] == Q_numbers[j])
                {
                    break;
                }
                else
                {
                    Q_numsize++;
                    Q_numbers[j+1] = array[i];
                }   
            }
        }
        
        printf("%d", Q_numsize);
    }
    
    
}