
#include <stdio.h>
#include <stdlib.h>

typedef struct Linked_List
{
    LL* next;
    int data;
    int count;
}LL;

int prime_check(int num)
{
    if(num == 1)
    {
        return 0;
    }
    if(num == 2)
    {
        return 1;
    }
    for (int i = 2; i <= num/2; i++) {
        if(num%i == 0)
            return 0;
    }
    // 위에서 한번도 나눠지지 않은 경우 - 소수
    return 1;
}

int main()
{
    int num = 0;
    
    scanf("%d", &num);
    
    LL* primes // n보다 작은 소수들의 동적 배열
    int primes_count = 0;
    int first_check = 0;
    for (int i = 2; i <= num/2; i++) { // 이거 바꿔야함. 
        if(prime_check(i) == 1)
        {
            first_check++;
            LL newnode = (LL)malloc(sizeof(LL));
            newnode.data = i;
            if(first_check == 1)
                newnode.count = 0;
            else
                newnode.count++;
            newnode.next = NULL;
            primes = newnode;
        }
    }
    
    int idx = 0;
    while(idx >= primes_count)
    {
        if(num % primes[idx] == 0)
        {
            num /= 2;
            printf("%d\n", num);
        }
        else
        {
            idx++;
        }
    }
}
