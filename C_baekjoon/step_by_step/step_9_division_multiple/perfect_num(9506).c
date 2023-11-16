// 1차 시도 실패 : 16퍼센트 실패, 조건 중 문제 있는지 다시 체크중...
// 3차 시도 성공 : 오류 1 - div_idx, sum을 루프마다 초기화하지 않았음, 오류 2 - 출력 시 줄바꿈과 띄어쓰기 맞추지 않았음 - 수정 후 성공
#include <stdio.h>

int main()
{
    int input = 0; 
    int divisions[100000];
    int divisions_idx = 0;
    int sum_of_divs = 0;
    
    while(1)
    {
        divisions_idx = 0;
        sum_of_divs = 0;
        
        scanf("%d",&input);
        if(input == -1)
            break;
            
        for(int i = 1; i < input; i++)
        {
            if(input % i == 0)
            {
                divisions[divisions_idx++] = i;
                sum_of_divs += i;
                //printf("%d %d\n", i ,sum_of_divs);
            }
        }
        
        if(sum_of_divs == input)
        {
            printf("%d = ", input);
            for (int i = 0; i < divisions_idx; i++) {
                if(i == 0)
                    printf("%d", divisions[i]);
                else if(i == divisions_idx-1)
                {
                    printf(" + %d\n", divisions[i]);
                }
                else
                    printf(" + %d", divisions[i]);
                    
            }
        }
        
        else{
            printf("%d is NOT perfect.\n", input);
        }
        
    }
    
}

