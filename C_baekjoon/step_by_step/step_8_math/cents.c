// 1차 시도 성공 : 단순 그리디 알고리즘 적용 
#include <stdio.h>

int main()
{
    int test_count = 0;
    int input = 0;
    int cents[4] = {0, 0, 0, 0}; // 0.25 , 0.1, 0,05, 0,01 달러 
    
    scanf("%d", &test_count);
    
    for (int i = 0; i < test_count; i++) {
        scanf("%d", &input);
        cents[0] = input/25;
        input -= (input / 25) * 25;
        cents[1] = input/10;
        input -= (input / 10) * 10;
        cents[2] = input/5;
        input -= (input / 5) * 5;
        cents[3] = input;
        printf("%d %d %d %d\n", cents[0], cents[1], cents[2], cents[3]);
    }
    

    return 0;
}
