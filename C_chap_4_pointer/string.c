#include <stdio.h>

int main(void)
{
    char str1[] = "My String";
    char * str2 = "Your String";
    printf("%s %s \n", str1, str2);

    str2 = "Our string"; // point change
    printf("%s %s \n", str1, str2);

    str1[0] = 'X'; // success
    str2[0] = 'X'; // fail
    
    printf("%s %s \n", str1, str2);
    return 0;
}