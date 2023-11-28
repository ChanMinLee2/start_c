// 1차 시도 실패 : 3퍼센트 실패 반례 찾아야 함... 
// 이해 불가 - 질문 게시판 글씀... -> 변수 초기화할때 겹쳐서 하지말자! -> tip에 추가하자.
#include <stdio.h>

int main()
{
    int start, end = 0;
    
    scanf("%d", &start);
    scanf("%d", &end);
    
    int sum = 0;
    int min = 0;
    
    for (int i = start; i < end+1; i++) {
        if(i == 1)
        {
            continue;
        }
        else if( i == 2)
        {
            sum += i;
            min = i;
            continue;
        }
        int prime_check = 1;
        for (int j = 2; j < i; j++) {
            if(i % j == 0)
            {
                prime_check = 0;
                break;
            }
        }
        if(prime_check == 1)
        {
            if(sum == 0)
            {
                sum += i;
                min = i;
            }
            else{
                sum += i;
            }
        }
    }
    
    if( sum == 0 )
    {
        sum = -1;
        printf("%d", sum);
    }
    
    else{
        printf("%d \n%d", sum, min);
    }
    
}
