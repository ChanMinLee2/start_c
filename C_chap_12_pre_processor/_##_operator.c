#include <stdio.h>
#define CON(UPP, LOW) UPP ## 00 ## LOW

int main(void)
{
    int num = CON(22, 77);
    printf("num : %d\n", num);

    return 0;
}