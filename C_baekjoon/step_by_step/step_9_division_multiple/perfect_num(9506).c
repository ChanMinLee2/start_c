// 1차 시도 실패 : 16퍼센트 실패, 조건 중 문제 있는지 다시 체크중...
#include <stdio.h>

int main()
{
    int input = 0; 
    int divisions[50000];
    int divisions_idx = 0;
    int sum_of_divs = 0;
    
    
    while(1)
    {
        scanf("%d",&input);
        if(input == -1)
            break;
            
        for(int i = 1; i < input; i++)
        {
            if(input % i == 0)
            {
                divisions[divisions_idx++] = i;
                sum_of_divs += i;
            }
        }
        
        if(sum_of_divs == input)
        {
            printf("%d = ", input);
            for (int i = 0; i < divisions_idx; i++) {
                if(i == 0)
                    printf("%d ", divisions[i]);
                else
                    printf("+ %d ", divisions[i]);
            }
        }
        
        else{
            printf("%d is NOT perfect.", input);
        }
        
    }
    
}
