#include <stdio.h>
#define column 10
#define row 10


int main(void)
{
    int array[column][row];

    int i = 0, j = 0;
    char c = 'A';

    for (i = 0; i < column; i++)
    {
        for( j = 0; j < row; j++)
        {
            while (c >= 'Z' && c <= '`')
            {
                c++;
            }
            if (c == ('Z' + 1))
            {
                c = 'a';
            }
            

            array[i][j] = c++;

            if((c) == 'z')
            {
                //printf("good");
                c = 'A';
            }
        }
        
    }

    for (i = 0; i < column; i++)
    {
        for( j = 0; j < row; j++)
        {
            printf("%c", array[i][j]); 
        }
        printf("\n");
    }
    


    

}