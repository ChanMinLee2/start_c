#include <stdio.h>

int main(void)
{
    // 다차원 배열도 아래와 같이 한 줄로 선언이 가능하다.
    // 세로 줄의 index는 자동으로 계산된다. 
    int array_1[][3] ={1,2,3,4,5,6,7,8,9};
    
    // 다차원 배열의 주소값 : 연속적으로 가로줄의 주소값을 모두 채운 뒤 다음 가로줄로 넘어감.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("세로 : %d 가로 : %d 원소의 주소 값 - %x\n", i, j, &array_1[i][j]);
        }
        
    }
    return 0;
}