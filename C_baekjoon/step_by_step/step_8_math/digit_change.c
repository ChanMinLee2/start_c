// 1차 시도 실패 : B자리 수를 10진수로 변환하는 과정에서 carry를 생각하지 않았음... 어떡할까
#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
    int digit = 0;
    char num[100];
    int digit_changed_num = 0;
    int numlen= 0;
    
    int ascii_alpha_to_num[26];
    
    for (int i = 0; i < 26; i++) {
        ascii_alpha_to_num[i] = 10 + i;
        //printf("%d , ", ascii_alpha_to_num[i]);
    }
    
    scanf("%s %d", num, &digit);
    printf("%s %d\n", num, digit);
    
    numlen = strlen(num);
    for (int i = numlen-1; i >= 0; i--) {
        if(*(num+i) >= '0' && *(num+i) <='9')
        {
            digit_changed_num += num[i] * pow(10, i);
        }
            
        else
        {
            digit_changed_num += ascii_alpha_to_num[(int)(num[i]-'A')] * pow(10, i);
        }
            
    }
    
    printf("%d", digit_changed_num);
    
    return 0;
}
