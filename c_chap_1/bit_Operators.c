#include <stdio.h>  

int main(void)
{
    int num1 = 15;
    int num2 = 20;
    int num3 = num1<<3; // 비트의 shift를 실행한다. <<는 왼쪽으로, >>는 오른쪽으로 이동시킨다. 

    printf("%d \n", num1 & num2); // &연산자는 비트 사이의 논리곱을 실행한다
    printf("%d \n", num1 ^ num2); // ^연산자는 비트 사이의 논리합을 실행한다

    printf("%d \n", ~num1);       // ~연산자는 비트 단위로 부정형을 가진다. 0 > 1 , 1 > 0
    printf("%d \n", num3);                                                                       
    
    return 0;
}