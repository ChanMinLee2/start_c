#include <stdio.h>

int main(void)
{
    int * ptr1 = 0x0010;
    double * ptr2 = 0x0010;

    // pointer operation -> +1 = +sizeof(type*)
    printf("%p %p \n", ptr1 +1, ptr1 +2);
    printf("%p %p \n", ptr2 +1, ptr2 +2);

    printf("%p %p \n", ptr1, ptr2);
    ptr1++;
    ptr2++;
    printf("%p %p \n", ptr1, ptr2);
    return 0;

}