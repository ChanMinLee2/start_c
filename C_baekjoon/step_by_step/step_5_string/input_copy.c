#include <stdio.h>

int main(void)
{
    char buf;
    
    while((buf = getchar()) != EOF)
    {
        printf("%c",buf);
    }
}