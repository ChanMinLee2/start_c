#include <stdio.h>

int main(void)
{
    int nums[3];
    int count = 3;
    for(int i = 0; i < count; i++)
    {
        // nums라는 배열의 원소(단순 int형 변수) [i]에 주소값이 필요할 때는 &연산을 사용. (배열 그 자체의 주소를 필요로 하는 게 아님)
        scanf("%d", &nums[i]);
    }
    
    for(int i = 0; i < count; i++)
    {
        if(nums[i] > 10000 || nums[i] < 2)
            return 0;
    }
    
    int A = 0, B = 0, C = 0;
    A = nums[0];
    B = nums[1];
    C = nums[2];
    printf("%d\n", (A+B)%C);
    printf("%d\n", ((A%C) + (B%C))%C);
    printf("%d\n", (A*B)%C);
    printf("%d\n",  ((A%C) * (B%C))%C);
    return 0;
}