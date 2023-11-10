// 1차 시도 성공 : 합이 n인 케이스들을 그룹화? 1/1 >> 2, 1/2 2/1 >> 3, 1/3 2/2 3/1 >> 4 ...
// 그룹화 한 다음 각 upper lower들을 gruop_num , 1 로 구분지어서 홀짝 케이스에 각각 맞춰 진행. 
#include <stdio.h>

int main()
{
    int input = 0;
    
    scanf("%d", &input);
    int group_checker = input;
    
    int group_num = 1;
    while(1)
    {
        if(group_checker - group_num > 0)
            group_checker -= group_num++;
        else
            break;
    }
    
    // i번째 그룹은 두 수의 합이 group_num+1임 
    int group_order = group_checker; // 계산 끝난 나머지 수 = 그룹 내의 어디에 위치하는지 결정
    int upper = 0;
    int lower = 0;
    
    if(group_num % 2 == 0) // 그룹 순서 수가 짝수일때
    {
        upper = 1;
        lower = group_num;
        
        for (int i = 1; i < group_order; i++) {
            upper += 1;
            lower -= 1;
        }
    }
    
    else
    {
        upper = group_num;
        lower = 1;
        
        for (int i = 1; i < group_order; i++) {
            upper -= 1;
            lower += 1;
        }
    }
    
    printf("%d/%d", upper, lower);

}
