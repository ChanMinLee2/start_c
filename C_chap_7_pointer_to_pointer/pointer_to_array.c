#include <stdio.h>

int main(void)
{
    int num1 = 10, num2 = 20, num3 = 30;
    int arr2d[2][3]={1,2,3,4,5,6};
    // 포인터 변수들로 구성된 배열 : 포인터 배열
    int * whoA[3] = {&num1, &num2, &num3};
    // 배열을 가리키는 포인터 변수 : 배열 포인터
    int (*whoB)[3] = arr2d; // arr2d의 주소값 저장

    // whoA는 포인터 변수를 저장함, 각 포인터변수로는 주소값, *를 붙여 주소값이 나타내는 값 참조
    printf(" %d %d %d \n", whoA[0], whoA[1], whoA[2]);
    printf(" %d %d %d \n", *whoA[0], *whoA[1], *whoA[2]);
    // whoB는 배열을 가리킴, 포인터변수 whoB은 arr2d의 주소값을 가리킨다.
    // *whoB[0]은 배열이 아니고, 포인터변수가 가리키는 배열의 첫 행( whoB[0] )의 첫 원소를 나타낸다. 따라서 포인터라 random access가 제한된다. 
    // whoB[0][1]은 whoB가 가리키는 배열을 포인터 변수를 이용해 그대로 사용( whoB[0][1] )하면서 random access가 가능해진다. 
    printf(" %d %d %d \n", *whoB[0], *whoB[1], whoB[0][2]);
    printf(" %d %d \n", whoB[0], whoB[1]);
    
    return 0;

}