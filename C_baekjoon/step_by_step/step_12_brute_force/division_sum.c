// 1차 시도 성공 : 자릿수 분해와 반복문으로 해결.
#include <stdio.h>

int digit_count(int num)
{
    int digit = 0;
    for (int i = 0; i < 7; i++) {
        num /= 10;
        if(num == 0)
        {
            // 135 >> 13 >> 1 >> 0, 즉 0으로 갈때까지 자릿수 늘려야함.
            digit++;
            break;        
        }
        digit++;
    }
    return digit;
}

int main()
{
    int num = 0;
    int digits[7] = {10, 100, 1000, 10000, 100000, 1000000, 10000000};
    scanf("%d", &num);
    
    for (int i = 1; i < num; i++) {
        int d_num = i;
        int digit = digit_count(i);
        int digit_sum = 0;
        
        for (int j = 0; j < digit; j++) {
            if(j == 0)
            {
                digit_sum += d_num % digits[j];
            }
            
            else
            {
                // 자릿수 구할때 : 나머지로 구하되 그 전 자리의 나머지 빼주기.
                digit_sum += (d_num % digits[j] - d_num % digits[j-1]) / digits[j-1]; 
            }
            
        }
        
        if(digit_sum + i == num)
        {
            printf("%d", i);
            return 0;
        }
    }
    
    printf("%d", 0);
    return 0;
}
