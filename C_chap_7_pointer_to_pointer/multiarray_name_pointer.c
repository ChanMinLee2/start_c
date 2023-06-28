#include <stdio.h>

int main(void)
{
    int arr2d[3][3];

    // arr2d 와 arr2d[0]의 차이 : arr2d는 전체 이차원 배열을 내포하고, arr2d[0]은 그 중 첫 배열을 내포한다.
    printf(" %d \n",arr2d);
    printf(" %d \n",arr2d[0]);
    printf(" %d \n",arr2d[0][0]);

    printf(" %d \n",sizeof(arr2d));   // 36
    printf(" %d \n",sizeof(arr2d[0])); // 12

    return 0;
}