#include <stdio.h>

const int Symbolic_Constant_num = 10; // 전역 상수 표현 (변경이 불가능함.)

int main(void)
{
    // 리터럴 상수는 변수로 선언되지 않은 자료이다. 
    // 기본적인 저장형태는 정수 = int / 실수 = double / 문자 = int 자료형이다. 

    int SUM_literal_constants = 0; 
    float number = 4.789; // 다음과 같은 코드는 'double 자료형 상수를 float 자료형으로 저장하는 과정 중 데이터 손실 가능성' 때문에 경고 메세지가 뜬다.
    Symbolic_Constant_num = 100; // 다음과 같은 코드는 '상수를 변경하려는 접근'이기에 컴파일 에러가 발생한다.  
    
    float number = 4.789f; // 따라서 위의 코드는 이런 식으로 f라는 접미사를 사용해 float 형태로 바꾸고 넣어주면 경고 메세지가 안 생긴다.
    SUM_literal_constants = 10 + 20; // 이 때 10, 20은 '리터럴 상수'로서 메모리를 할당받지만, 주소를 따로 저장하지 않는 상수이다. 

    return 0;    
}