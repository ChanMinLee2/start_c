// 2차시도 성공 : 1차시도에서 count의 범위와 digit의 인덱스 범위가 호환되지 않았음. 수정후 성공. 

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
    int num = 0;
    
    scanf("%d",&num);
    
    int count = 0; // 자릿수 
    int digits_of_num[10];
    int digits[10] = {10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000};
    int num_dummy = num;
    
    while(1)
    {
        if((num_dummy / 10) != 0)
        {
            num_dummy /= 10;
            count++;
        }
        else
        {
            count++;
            break;
        }
    }
    //printf("%d", count);
    
    for (int i = 0; i < count; i++) {
        //count++;
        if(i == 0)
        {
            digits_of_num[i] = num%digits[i];
        }
        
        else
        {
            digits_of_num[i] = (num%digits[i] - num%digits[i-1])/digits[i-1];
        }
    }
    
    // 선택정렬
    // 1차 전탐색
    for (int i = 0; i < count; i++) {
        // 최댓값 인덱스 변수 초기화
        int max_idx = i;

        // 2차 전탐색(i+1부터)하면서 최댓값 인덱스 조정
        for (int j = i+1; j < count; j++) {
            if(digits_of_num[j] > digits_of_num[max_idx])
            {
                max_idx = j;
            }
        }
        swap(&digits_of_num[i], &digits_of_num[max_idx]);
    }
    
    for (int i = 0; i < count; i++) {
        printf("%d", digits_of_num[i]);
    }
    
    
}
