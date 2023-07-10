#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char numstr[5] = "1234";

    // 문자열을 int형으로 변환
    printf("numstr (int) : %d \n", atoi(numstr));
    // 문자열을 float(double)형태로 변환
    printf("numstr (int) : %d \n", atof(numstr));
    return 0;
}