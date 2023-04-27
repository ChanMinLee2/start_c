#include <stdio.h>

int main(void)
{
    int a = 3;
    int b = 5;
    int c = 7;
    
    int result1 = (a == 3 && b == 5);  
    printf("%d \n",result1);    // printf()를 사용할 땐 서식문자를 염두하기. &&(and) 논리 연산의 결과 = 참 => 1 반환
   
    printf("%d \n", a == 4 && b == 5); // &&(and) 논리 연산의 결과 = 거짓 => 0 반환
    printf("%d \n", a == 3 || c == 1); // ||(or) 논리 연산의 결과 = 참 => 1 반환 
    printf("%d \n", !a);                  // !(not) 논리 연산의 결과 = 거짓 => 0 반환

    // what is "short circuit" 
    printf("%d \n", (a = 0) && (b = 2));  // short circuit은 이 문장에서와 같이 논리연산자로 묶인 두 괄호 안 변수 대입 중
                                          // 앞 부분에서 결과가 결정되면 이후의 코드는 전부 실행하지 않는 상황을 의미한다.
    printf("%d %d \n", a ,b );            // 위의 b = 2라는 코드는 실행하지 않아서 지역 변수 선언 값인 5가 반환되는 모습.

    printf("%d \n", (c = 100) || (b = 6)); // 이 또한 위의 경우와 유사하다. 
    printf("%d %d", b, c);                 // or 연산 중 c가 참(c언어에서는 1이상의 정수 = 참)인 값이기 때문에 b = 6은 실행 x
    
}