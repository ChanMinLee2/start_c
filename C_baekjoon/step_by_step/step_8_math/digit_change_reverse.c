// 방향 : 최고자릿수 구하고, 입력받은 수에서 digit^최고자릿수 나눈 몫을 그 자리의 자릿수로. 
// 현재 각 자릿수 int로는 구함, str형태로 바꿔서 매 자리 문자 출력. 

#include <stdio.h>
#include <math.h>

int main()
{
    int num = 0;
    int digit = 0;
    int each_digit[100];
    
    scanf("%d %d", &num, &digit);
    
    int max_digit = 0;
    while(1)
    {
        if(num < pow(digit, max_digit+1))
        {
            break;
        }
        else
        {
            max_digit++;
        }
            
    }
    
    for(int i = max_digit; i >= 0; i--)
    {
        each_digit[i] = num / pow(digit, max_digit);
        num -= each_digit[i];
        //printf("%d\n", each_digit[i]);
    }
    
    for (int i = 0; i <= max_digit; i++) {
        printf("%c", each_digit[i] + 'A' -10);
    }
}






