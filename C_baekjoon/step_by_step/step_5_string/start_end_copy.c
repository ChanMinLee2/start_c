#include <stdio.h>
#include <string.h>

int main(void)
{   
    int n = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        char temp[1000];
        scanf("%s", temp);
        int len = strlen(temp);
        printf("%c%c\n", temp[0], temp[len-1]);
    }
}