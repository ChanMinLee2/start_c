#include <stdio.h>

int main(void)
{
    int num = 10;
    // pointer 변수 pointer_num에 num의 주소값 저장
    int * pointer_num = &num; 

    // pointer 변수가 저장하는 주소값 출력 (=&num)
    printf("&num : %d\n",pointer_num); 
    // pointer 변수의 주소값 출력 (=&pointer_num)
    printf("&pointer_num : %d\n",&pointer_num);
    // pointer 변수의 주소값에 저장된 변수값 출력 (=num)
    printf("num : %d\n",*pointer_num);

    // pointer 변수의 조작 (포인터로 저장한 주소의 변수의 값 변경)
    // 포인터변수에 *를 붙이면 변수를 참조한 결과임.(=num)
    (*pointer_num)++; // 1. 포인터변수에 *붙이고 ++한 결과
    printf("num++ : %d\n", *pointer_num); // 저장된 주소값의 변수에 ++가 됨 (=11)

    *(pointer_num++); // 2. 포인터변수의 주소값에 ++한 뒤 그 위치의 값 = *((&num)++)
    printf("*((&num)++) : %d\n", *pointer_num); // 메모리상 다음 주소값에 저장된 값(쓰레기 값) 출력

    *pointer_num++;   // 우선순위 확인. (1,2)
    // 우선순위 ++ > * , 먼저 다음주소를 가리키고 그 변수의 값을 가져옴.
    printf("*((&num)++) : %d\n ", *pointer_num); // 2.의 연산을 한번 더 진행하는 것과 같음.

    double num2 = 13.2;
    int * pointer_num2 = &num2; // warning! 자료형 더블 > 인트 ( 8바이트 > 4바이트 - 데이터 손실(앞부분만 남음))
    printf("%d\n", *pointer_num2); // 전혀 다른 숫자 출력됨.

    int * pointer2_num = 0;
    int * pointer3_num = NULL;
    printf("%d, %d \n", *pointer2_num,*pointer3_num); // null, 0이 저장된 포인터는 아무것도 가리키지 않음. 

    return 0;
}