// 1. 에라토스테네스의 체 사용을 위한 배열과 변수 선언.
// 2. 배열 원소 0이면 소수 1이면 소수아님 -> index == 0 이면 그 배수 자리 원소들 1로 바꿈
// 3. 입력 받은 범위 내 숫자 조건 맞으면 출력.

// 1차시도 실패 : 80퍼 후반대 틀림... 반례 찾아보기.
#include <stdio.h>
int numbers[1000001];

int main()
{
    
    // 1.
    int start, end;
    int index = 2;
    
    scanf("%d %d", &start, &end);
    
    for (int i = 2; i < 1000001; i++) {
        numbers[i] = 0;
    }
    
    
    // 2.
    while(index <= end)
    {
        if(numbers[index] == 0)
        {
            for (int i = 2; i * index <= end; i++) {
                numbers[i * index] = 1;
            }
        }
        index++;
    }
    
    
    // 3.
    for (int i = start; i <= end; i++) {
        if(numbers[i] == 0)
        {
            printf("%d\n", i);
        }
    }
    
    
}
