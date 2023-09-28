#include <stdio.h>

int alpha_to_num(char a)
{
    a = a - '@';
    
    if(a >= 1 && a <= 3)
        return 3;
    else if( a >= 4 && a <= 6)
        return 4;
    else if( a >= 7 && a <= 9)
        return 5;
    else if( a >= 10 && a <= 12)
        return 6;
    else if( a >= 13 && a <= 15)
        return 7;
    else if( a >= 16 && a <= 19)
        return 8;
    else if( a >= 20 && a <= 22)
        return 9;
    else if( a >= 23 && a <= 26)
        return 10;
}

int main(void)
{
    int min = 0;
    char temp[20];
    int sum = 0;
    
    scanf("%s", temp);
    
    int index = 0;
    int num_buf = 0;
    
    while(temp[index] != '\0')
    {
        num_buf = alpha_to_num(temp[index]);
        sum += num_buf;
        index++;
    }
    printf("%d", sum);
}