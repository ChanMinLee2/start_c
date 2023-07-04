//입력
//서기 연도를 알아보고 싶은 불기 연도 y가 주어진다. (1000 ≤ y ≤ 3000)

//출력
//불기 연도를 서기 연도로 변환한 결과를 출력한다.

#include <stdio.h>

int main(void)
{
    int year = 0;
    scanf("%d", &year); // scanf 할 때는 주소값을 전달 ( 배열은 배열의 이름 변수 그대로 사용)
    if( year >= 1000 && year <= 3000)
    {
        int year_bul = year - 543;
        printf("%d", year_bul);
    }
    
    return 0;
}