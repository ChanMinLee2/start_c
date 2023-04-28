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

    return 0;
}