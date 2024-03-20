// 1. 에라토스테네스의 체 사용을 위한 배열과 변수 선언.
// 2. 배열 원소 0이면 소수 1이면 소수아님 -> index == 0 이면 그 배수 자리 원소들 1로 바꿈
// 3. 입력 받은 범위 내 숫자 조건 맞으면 출력.

// 1차시도 실패 : 80퍼 후반대 틀림... 반례 찾아보기.
// 2차 시도 성공 : 1 1 케이스 출력 수정.
#include <stdio.h>
#define MAX 246913 //246912 + 1
int numbers[MAX];

int main()
{

    numbers[1] = 1;
    for (int i = 2; i < MAX; i++) {
        numbers[i] = 0;
    }
    
    // 2.
    int index = 2;
    while(index < MAX)
    {
        if(numbers[index] == 0)
        {
            for (int i = 2; i * index < MAX; i++) {
                numbers[i * index] = 1;
            }
        }
        index++;
    }

    while (1)
    {
        // 1.
        int result = 0;
        int start, end = 0;
        scanf("%d", &start);

        if (start == 0)
        {
            break;
        }
        end = start * 2;

        // 3.
        for (int i = start; i <= end; i++) {
            if(numbers[i] == 0)
            {
                result++;
                //printf("%d\n", i);
            }
        }

        printf("%d", result);
    }
}
