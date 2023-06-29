#include <stdio.h>

int main(void)
{
    int arr1[2][2] = {
        {1, 2},
        {3, 4}
    };

    int arr1[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int arr1[4][2] = {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8}
    };

    int (*ptr)[2]; // 배열을 가리키는 포인터 선언
    
    ptr = arr1;
    for (int i = 0; i < sizeof(arr1[0])/sizeof(int); i++)
    {
        printf(" %d's line of arr1 : %d %d \n", i+1, arr1[0][1])
    }
    
}