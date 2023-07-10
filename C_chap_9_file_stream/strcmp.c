#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[10] = "simple";
    char str2[10] = "simon";

    if (strcmp(str1, str2) == 0 )
    {
        printf(" 두 문자열은 동일합니다.\n");
        if (strncmp(str1, str2, 3) == 0)
        {
            printf(" 두 문자열은 동일하지 않지만, 앞 3자리는 동일합니다. \n");
        }
    }
    
    return 0;
}