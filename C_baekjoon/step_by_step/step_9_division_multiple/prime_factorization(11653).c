
#include <stdio.h>
#include <stdlib.h>

int check_prime(int num)
{
    if(num == 1)
    {
        return 0;
    }
    
    if(num == 2){
        return 1;
    }
    
    else
    {
        for (int i = 2; i < num; i++) {
            if(num % i == 0)
            {
                return 0;    
            }
        }
        
        // for루프 탈출 = 나눠지는 수가 없음. 
        return 1;
    }
}

int main()
{
    int num = 0;
    
    int* primes;
    int primes_size = 0;
    scanf("%d", &num);
    
    // num보다 작은 소수들의 동적배열을 생성 
    for (int i = 2; i <= num; i++) {
        if( check_prime(i) ==  1)
        {
            primes = (int*)malloc(sizeof(int));
            primes[primes_size++] = i;
        }
    }
    
    // num을 소수들의 동적배열의 원소로 가능한 만큼 나누는 걸 반복. 
    int wh_idx = 0;
    while(wh_idx < primes_size)
    {
        // 나눌수 있다면 나누고
        if( num % primes[wh_idx] == 0) 
        {
            num / primes[wh_idx];
            printf("%d\n", primes[wh_idx]);
        }
        
        // 나눌수 없다면 다음 소수로 나눌 준비 
        else
        {
            wh_idx++;
            continue;
        }
    }
    
    
}
