// 1차 시도 성공 : 4가지 값 중 최소 값 찾기 - 버블정렬

#include <stdlib.h>
#include <stdio.h>

void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int x = 0;
    int y = 0;
    int w = 0; 
    int h = 0;
    
    scanf("%d %d %d %d", &x, &y, &w, &h);
    
    int factor_arr[4];
    
    factor_arr[0] = w-x;
    factor_arr[1] = h-y;
    factor_arr[2] = x-0;
    factor_arr[3] = y-0;
    
    for (int i = 0; i < 4; i++) {
        for (int j = i; j < 4 ; j++) {
            if(factor_arr[i] > factor_arr[j])
            {
                swap(&factor_arr[i], &factor_arr[j]);
            }
        }
    }
    
    printf("%d", factor_arr[0]);
    
    
}
