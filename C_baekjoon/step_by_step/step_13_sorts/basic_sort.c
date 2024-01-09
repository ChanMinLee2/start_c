// 1차 시도 성공 : swap 잘 알아두기! + 선택정렬로 해결

#include <stdio.h>

// 서로 바꿀 두 변수의 주소값을 받아서(주소값을 받아야 실제 변수의 값에 접근가능) 값만 바꾸기.
int swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    
    return 0;
}

int main()
{
    int count = 0;
    scanf("%d", &count);
    
    int num_arr[1000];
    
    for (int i = 0; i < count; i++) {
        scanf("%d", &num_arr[i]);
    }
    
    // 선택정렬
    // 1차 전탐색
    for (int i = 0; i < count; i++) {
        // 최소값 인덱스 변수 초기화
        int min_idx = i;

        // 2차 전탐색(i+1부터)하면서 최소값 인덱스 조정
        for (int j = i+1; j < count; j++) {
            if(num_arr[j] < num_arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(&num_arr[i], &num_arr[min_idx]);
    }
    
    for (int i = 0; i < count; i++) {
        printf("%d\n", num_arr[i]);
    }
}
