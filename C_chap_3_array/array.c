#include <stdio.h>

int main(void)
{
    int array1[5] = { 1, 2, 3, 4, 5};
    int array2[] = {1, 2, 3, 4, 5, 6, 7};
    int array3[5] = {1,2};
    int array1_len, array2_len, array3_len, i;

    printf("배열 array1의 크기 : %d \n", sizeof(array1));
    printf("배열 array2의 크기 : %d \n", sizeof(array1));
    printf("배열 array3의 크기 : %d \n", sizeof(array1));

    // 배열의 길이를 계산하는 방식 = 배열의크기 / 배열의 자료형의 크기 
    array1_len = sizeof(array1) / sizeof(int);
    array2_len = sizeof(array2) / sizeof(int);
    array3_len = sizeof(array3) / sizeof(int);

    // 배열은 for문을 통한 순차적인 접근도 가능하지만 index를 통한 random access도 가능. 
    for(i=0; i < array1_len; i++)
        printf("%d", array1[i]);
    printf("\n");

    for(i=0; i < array2_len; i++)
        printf("%d", array2[i]);
    printf("\n");

    for(i=0; i < array3_len; i++)
        printf("%d", array3[i]);
    printf("\n");

    // 배열의 count를 구하는 방법. - 주로 배열보다는 포인터로 선언했을때 사용한다.
    int count_of_array2 = sizeof(array2)/sizeof(int); // 몇 개 있는지 확인 가능.
    printf("count of array2 : %d\n", count_of_array2);
    return 0;
}