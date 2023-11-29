// 1차 시도 실패 : 시간초과 이유? 아마도 for 루프 때문일듯? 매번 나눌때마다 소수확인하는게 문제인듯. 
// 2차 시도 실패 : ㅋㅋㅋ 소인수분해를 이해하지 못했음. 그냥 작은 수부터 나눌수있는 만큼 나누면 소수가 아닌 수로는 안나눠지는구나. 
//                  아예 새로 만들었으나, 97퍼에서 실패함. 아마 특수 케이스 무언가를 생각 안한듯. 

#include <stdio.h>

int main()
{
    int num = 0;
    
    scanf("%d", &num);
    
    if( num == 1 )
    {
        return 0;
    }
    
    
    int div_num = num;
    for (int i = 2; i <= num/2; i++) {
        if(div_num % i == 0)
        {
            div_num /= i;
            printf("%d\n", i--);
        }
    }
    
    if(div_num == num )
    {
        printf("%d", num);
    }
}


