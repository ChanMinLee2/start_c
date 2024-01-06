// 1차 시도 실패 : 순서에 맞춰서 계산해야함... 8 입력될때 6606 출력...
// 2차 시도 성공 : 순서에 맞출 수 밖에 없었음 ( 반복문으로 증가 시키기 때문 ) + 666체크 로직 변경 ( 6606 케이스 )
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 4자리 : 
// 5자리 : (666 자리) 2 * 9 * 10 + 1 * 10 ^ 2= 180 + 100
// 6자리 : 3 * 9 * 10 * 10 + 1 * 10 ^ 3 = 2700 + 1000
// 7자리 : 4 * 9 * 10 * 10 * 10 >>> 7자리까지만 가능.

// 666 1666 2666 3666 ... 9666 10666 11666 12666 ... 15666 16660 16661 ... 16669



int digit_count(int num)
{
    int digit = 0;
    for (int i = 0; i < 7; i++) {
        if(num == 0)
        {
            // 135 >> 13 >> 1 >> 0, 즉 0으로 갈때까지 자릿수 늘려야함.
            // 6606 >> 606 >> 6 >> 0
            digit++;
            break;        
        }
        digit++;
    }
    return digit;
}

int check_triple(int num)
{
    int digits[7] = {10, 100, 1000, 10000, 100000, 1000000, 10000000};
    for (int i = digit_count(num)-1; i >= 2; i--) {
        int digit_1 = 0;
        int digit_2 = 0;
        int digit_3 = 0;

        // digit 로직 세분화 
        if (i == 2)
        {
            digit_1 = num % digits[i-2];
            digit_2 = num % digits[i-1] - digit_1;
            digit_3 = num % digits[i] - digit_2 - digit_1;
        }
        else
        {
            digit_1 = num % digits[i-2] - (num % digits[i-3]);
            digit_2 = num % digits[i-1] - digit_1;
            digit_3 = num % digits[i] - digit_2 - digit_1;
            digit_1 /= digits[i-3];
        }
        

        digit_2 /= digits[i-2];
        digit_3 /= digits[i-1];
        
        if(digit_1 == 6 && digit_2 == 6 && digit_3 == 6 )
        {
            //printf("%d\n", i);
            return 1;
        }
    }
    return 0;
    
}

int main()
{
    int order = 0;
    int count = 1;
    scanf("%d", &order);
    
    int num = 666;
    while(1)
    {
        if(order == 1)
        {
            printf("%d", num);
            return 0;
        }
        else
        {
            num++;
            if(check_triple(num) == 1)
            {
                count++;
            }
            if(count == order)
            {
                printf("%d", num);
                return 0;
            }
        }
    }
    
    
}
