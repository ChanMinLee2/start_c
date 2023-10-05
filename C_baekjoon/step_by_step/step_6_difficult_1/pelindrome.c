#include <stdio.h>
#include <string.h>

int main(void)
{
    char buf[101];
    
    int check = 0;
    
    scanf("%s", buf);
    int len = strlen(buf);
    
    for(int i = 0; i < len/2 + 1; i++)
    {
        //printf("%c %c\n", buf[i], buf[len-1-i]);
        if(buf[len-1-i] != buf[i])
        {
            check = 0;
            break;
        }
        
        else
            check = 1;
    }
    
    if(check == 1)
        printf("1");
    else
        printf("0");
}