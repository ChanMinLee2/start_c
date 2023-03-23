#include <stdio.h>

int main()
{
    int num1 = +10;    // + 연산자로 부호를 나타내게끔 선언이 가능하다. 
    int num2 = -20;    // 마찬가지로 - 연산자를 활요해 부호를 나타낸다. 
    int num3 = 30;

    while (num1 < 12)
    {
        printf("%d, %d ",num2--, ++num3); // 증가,감소 연산자는 ++이나 --로 사용이 가능하다.
        num1++;                          // 또한 선위 후위를 내가 정해서 활용이 가능한데, 
                                             // 앞에 붙이면 식이 진행되기 전에 증가나 감소를 먼저 적용하고
                                             // 뒤에 붙이면 식이 진행되고 난 후 증가나 감소를 적용하게 된다. 
    }

    return 0;
}