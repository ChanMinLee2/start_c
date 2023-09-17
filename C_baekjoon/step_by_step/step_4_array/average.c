#include <stdio.h>

// 이 문제에서 상기할 점 : c99의 실수 입력은 맘 편하게 lf로 받자 (boj 조건 만족이 편함)

int main(void)
{
    double array[1000];
    
    for(int i = 0; i < 1000; i++)
    {
        array[i] = 0;
    }
    
    double max = 0;
    double new_sum = 0;
    int n = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        scanf("%lf", &array[i]);
        if( i == 0)
            max = array[i];
        else
        {
            if(max < array[i])
            {
                max = array[i];
            }    
        }
    }
    
    for(int j = 0; j < n; j++)
    {
        array[j] = ((array[j]/max) * 100);
        new_sum += array[j];
        if(j == n-1)
        {
            printf("%lf", new_sum/n);
        }
    }

}