#include <stdio.h>

int main(void)
{
    int num = 10;
    // pointer 변수 pointer_num에 num의 주소값 저장
    int * pointer_num = &num; 

    // pointer 변수가 저장하는 주소값 출력 (=&num)
    printf("%d\n",pointer_num); 
    // pointer 변수의 주소값 출력 (=&pointer_num)
    printf("%d\n",&pointer_num);
    // pointer 변수의 주소값에 저장된 변수값 출력 (=num)
    printf("%d\n",*pointer_num);

    // pointer 변수의 조작 (포인터로 저장한 주소의 변수의 값 변경)
    // 포인터변수에 *를 붙이면 변수를 참조한 결과임.(=num)
    (*pointer_num)++; // 1. 포인터변수에 *붙이고 ++한 결과
    printf("%d", *pointer_num); // 저장된 주소값의 변수에 ++가 됨 (=11)

    *(pointer_num++); // 2. 포인터변수의 주소값에 ++한 결과
    printf("%d", *pointer_num); // 메모리상 다음 주소값에 저장된 값(쓰레기 값) 출력

    *pointer_num++;   // 우선순위 확인. (1,2) 
    printf("%d", *pointer_num); // 우선순위 ++ > *, 그래서 이건 2의 결과와 같음.

    return 0;
}