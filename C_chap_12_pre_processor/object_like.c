#include <stdio.h>
#define NAME "홍길동"
#define AGE 23
#define ADDR "경기도 안산시"

int main(void)
{
    printf(" 이름 : %s , 나이 : %d , 주소 : %s\n", NAME, AGE, ADDR); // 매크로 사용 - 전처리기가 바꿔줌. 
    return 0;
}