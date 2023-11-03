
// 방향 : 최고자릿수 구하고, 입력받은 수에서 digit^최고자릿수 나눈 몫을 그 자리의 자릿수로. 
// 현재 각 자릿수 int로는 구함, str형태로 바꿔서 매 자리 문자 출력. 
// 1차 시도 실패 : 1퍼에서 틀림, 뭔가 다른 경우가 안되는듯...
// 지금 손버깅해봤는데, 12 2 입력하면 1000이 나와버림 12 - 8 = 4 해서 4남은거를 처리를 못함...
// 2차 시도 성공 : 자릿수 구하는 루프에서 pow 잘못한 거 수정 후 성공 

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
    printf("max_digit : %d\n", max_digit);
    
    for(int i = max_digit; i >= 0; i--)
    {
        each_digit[i] = num / (pow(digit,i));
        num -= each_digit[i] * (pow(digit,i));
        printf("%d %d\n", num, each_digit[i]);
    }
    
    for (int i = max_digit; i >= 0 ; i--) {
        if(each_digit[i] > 9)
            printf("%c", each_digit[i] + 'A' -10);
        else
            printf("%c", each_digit[i] + '0');
    }
}









