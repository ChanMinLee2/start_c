#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char num1[4];
    char num2[4];
    
    char r_num1[4];
    char r_num2[4];
    
    int final_num1 = 0;
    int final_num2 = 0;
    
    scanf("%s %s", num1, num2);
    
    for(int i = 0; i < 3; i++)
    {
        r_num1[i] = num1[2-i];
        r_num2[i] = num2[2-i];
    }
    
    final_num1 = atoi(r_num1);
    final_num2 = atoi(r_num2);
    
    if(final_num1 >= final_num2)
    {
        printf("%d", final_num1);
    }
    else
    {
        printf("%d", final_num2);
    }
    
}