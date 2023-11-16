// 1차 시도 실패 : 22퍼 부근에서 안됨. 아마 출력 조건이 이상한듯.
// 2차 시도 실패 : 출력 조건 order와 idx 비교문 추가. 만약 들어온 order가 idx보다 크면 접근이 불가하므로 0출력해야함. 근데 또틀림. 
// 3차 시도 성공 : 반복문에서 시간 아낄려고 input/2했는데, 오히려 1 1 케이스에서 반복문이 바로 끝나는 경우 발생. 수정. 

#include <stdio.h>

int main()
{
    int input = 0;
    int order = 0;
    int division_idx = 0;
    
    int division[10000];
    
    scanf("%d %d", &input, &order);
    
    for(int i = 1; i<=input; i++)
    {
        if(input % i == 0)
        {
            division[division_idx++] = i;
        }
    }
    
    
    if(order-1 > division_idx-1)
    {
        printf("%d", 0);
    }
    
    else{
        printf("%d", division[order-1]);
    }
    
}

