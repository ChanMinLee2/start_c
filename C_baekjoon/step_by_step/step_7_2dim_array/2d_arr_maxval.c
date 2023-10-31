// 이차원 배열에서 최댓값 찾기 (9x9) 
// 100에서 각 원소를 뺀 값을 최신화해가며 전체 배열 travel
// 끝 

#include <stdio.h>

int main()
{
    int arr[9][9];
    int buf = 0;
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            scanf("%d", &buf);
            arr[i][j] = buf;
        }
    }
    
    int min_sub = 0; // 각 원소들을 100에서 뺀 그 차이값 중 최소
    int min_row = 0; // 최소 원소의 row col. 
    int min_col = 0;
    
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            if(i == 0 && j == 0)
            {
                min_sub = 100 - arr[i][j];
            }
            else if(min_sub > 100 - arr[i][j])
            {
                min_sub = 100 - arr[i][j];
                min_row = i;
                min_col = j; 
            }
        }
    }
    
    printf("%d \n%d %d", 100 - min_sub, min_row+1, min_col+1);
}

