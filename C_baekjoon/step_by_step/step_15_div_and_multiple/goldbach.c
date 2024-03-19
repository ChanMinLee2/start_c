// 1. 에라토스테네스의 체 사용을 위한 배열과 변수 선언.
// 2. 배열 원소 0이면 소수 1이면 소수아님 -> index == 0 이면 그 배수 자리 원소들 1로 바꿈
// 3. 1000000까지 소수체크 
// 4. 테스트 케이스 수를 반으로 나눠서 소수인지 체크하고 작은쪽으로 줄이면서 가장 가까운 소수 찾기.
// 5. 테스트 수에서 찾은 소수를 뺀 수가 소수면 result++; 아니면 계속 작은쪽으로 줄이면서 찾기. 

// 1차 시도 성공 : 로직대로 하니까 성공함.

#include <stdio.h>
#define MAX 1000001 //1000000 + 1
int primes[MAX];

int main()
{
    // 1.
    int result = 0;
    int check_index = 0;
    int test_case = 0;
    scanf("%d", &test_case);
    
    primes[1] = 1;
    for (int i = 2; i < MAX; i++) {
        primes[i] = 0;
    }
    
    // 2,3. 
    int index = 2;
    while(index < MAX)
    {
        if(primes[index] == 0)
        {
            for (int i = 2; i * index < MAX; i++) {
                primes[i * index] = 1;
            }
        }
        index++;
    }
    
    // 4. 5.
    for (int i = 0; i < test_case; i++) {
        result = 0;
        int buf = 0;
        scanf("%d", &buf);
        
        // 4. 나눈 수가 소수인지 확인 - 소수라면 골드바흐 파티션
        check_index = buf / 2;
        if(primes[check_index] == 0)
        {
            result++;
        }
        check_index--;
        
        // 5.
        while(check_index >= 2)
        {
            if(primes[check_index] == 0 && primes[buf - check_index] == 0)
            {
                result++;
            }
            check_index--;
        }
        
        printf("%d", result);
    }
    
    
    
}
