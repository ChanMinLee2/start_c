// 1차 시도 성공 : 피보나치의 fib(1), fib(2)에 접근하는 횟수를 재귀방식과 DP방식 각각 비교함. 
#include <stdio.h>

int main()
{
    int num = 0;
    
    scanf("%d", &num);
    
    int fib_count_TD[40];
    fib_count_TD[0] = 1;
    fib_count_TD[1] = 1;
    
    for (int i = 2; i < num; i++) {
        fib_count_TD[i] = fib_count_TD[i-1] + fib_count_TD[i-2];
    }
    printf("%d %d", fib_count_TD[num-1], num-2);
}
