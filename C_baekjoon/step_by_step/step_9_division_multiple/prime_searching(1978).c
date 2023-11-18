// 1차 시도 실패 : 2인 경우에 내부 루프에서 바로 탈출하는 것 생각 못함 -> 수정필요
// 2차 시도 성공 : 위 경우 수정 후 성공 - 내부 루프에서 j == nums[i] 인 경우(j, nums[i]모두 2인 경우)까지 생각

#include <stdio.h>

int main()
{
    int count = 0;
    int nums[100];
    int nums_prime_check[100];
    int amount_of_primes = 0;
    
    scanf("%d", &count);
    
    for (int i = 0; i < count; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < count; i++) {
        for (int j = 2; j <= nums[i]; j++) {
            if(nums[i] == 2)
            {
                amount_of_primes++;
                break;
            }
            else if(nums[i] % j == 0)
            {
                break;
            }
            else if(j == nums[i]-1 && nums[i] % j != 0)
            {
                amount_of_primes++;
                break;
            }
        }
    }
    
    printf("%d", amount_of_primes);
}
