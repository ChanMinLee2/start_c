// # 연산은 매크로 치환 시 문자열 내부에서 매크로 매개변수로 치환이 필요할 때 사용한다. 
#include <stdio.h>
#define STR(A, B) #A"의 직업은 "#B"입니다."  // "A의 직업은 B입니다" 로 치환 시 A, B가 문자열로 치환되지 않음. 

int main(void)
{
    printf(STR(chan min Lee, student));

    return 0;
}
