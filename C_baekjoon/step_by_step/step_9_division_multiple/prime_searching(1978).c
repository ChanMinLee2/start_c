// 1차 시도 실패 : 2인 경우에 내부 루프에서 바로 탈출하는 것 생각 못함 -> 수정필요
#include <stdio.h>

int main()
{
    int count = 0;
    int nums[1000];
    int nums_prime_check[1000];
    int amount_of_primes = 0;
    
    scanf("%d", &count);
    
    for (int i = 0; i < count; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < count; i++) {
        for (int j = 2; j < nums[i]; j++) {
            if(nums[i] % j == 0)
            {
                break;
            }
            else if(j == nums[i]-1 && nums[i] % j != 0)
            {
                amount_of_primes++;
            }
        }
    }
    
    printf("%d", amount_of_primes);
}
