#include <stdio.h>

int main(void)
{
    int arr[3] = { 11, 22, 33};
    int * ptr = arr;

    // arr[i] == *(arr+i) 
    // 배열 이름도 포인터이니 포인터변수도 배열의 접근 방식을 사용할 수 있다.
    // 또한 배열의 이름을 포인터 변수로 사용할 수 있다.
    printf("%d %d %d\n", *(ptr+0),*(ptr+1),*(ptr+2));
    printf("%d %d %d\n", ptr[0],ptr[1],ptr[2]);
    printf("%d %d %d\n", *(arr+0),*(arr+1),*(arr+2));
    printf("%d %d %d\n", arr[0],arr[1],arr[2]);

    return 0;

}