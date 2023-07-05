#include <stdio.h>

int add_array2d(int (*arr2d)[3], int col) // 함수에 인수로 전달할 때는 (*arr2d) ==  arr2d[] 이다.
{
    int add = 0;
    for (int i = 0; i < col; i++)
    {
        // 2차원 배열의 가로행 원소들을 더하는 루프
        // 가로행 배열의 크기를 구하는 방법 (가로행전체크기)/(데이터타입크기)
        for (int j = 0; j < 3; j++)
        {
            //printf("%d\n", j);
            add += (*(arr2d + i))[j];
        }
    }
    printf("%d\n", add);
    
}

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
    printf(" %d %d %d \n", *whoA[0], *whoA[1], *whoA[2]); // *whoA == whoA[0] 이 성립.
    
    // whoB는 배열을 가리킴, 포인터변수 whoB은 arr2d의 주소값을 가리킨다.
    // *whoB[0]은 배열이 아니고, 포인터변수가 가리키는 배열의 첫 행( whoB[0] )의 첫 원소를 나타낸다. 따라서 포인터라 random access가 제한된다. 
    // whoB[0][1]은 whoB가 가리키는 배열을 포인터 변수를 이용해 그대로 사용( whoB[0][1] )하면서 random access가 가능해진다. 
    printf(" %d %d %d \n", *whoB[0], *whoB[1], whoB[0][2]);
    printf(" %d %d \n", whoB[0], whoB[1]);
    
    // 포인터 변수가 구조체나 다른포인터변수, 배열을 가리킬 때는 포인터 변수(*를 사용하지 않는)로 그에 대한 접근이 가능하다. 
    add_array2d(arr2d, 2);

    return 0;

}