// 1차 시도 성공 : basic sort 문제 + 중간값, 평균 계산

#include <stdio.h>

int swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    
    return 0;
}

int main()
{
    int count = 5;
    int num_arr[5];
    
    for (int i = 0; i < count; i++) {
        scanf("%d", &num_arr[i]);
    }
    
    for (int i = 0; i < count; i++) {
        int min_idx = i;
        for (int j = i+1; j < count; j++) {
            if(num_arr[j] < num_arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(&num_arr[i], &num_arr[min_idx]);
    }
    
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += num_arr[i];
    }
    printf("%d\n", sum/count);
    printf("%d", num_arr[2]);
}

