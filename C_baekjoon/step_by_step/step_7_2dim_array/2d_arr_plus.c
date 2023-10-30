// 방향 : 크기 입력받아서 2차원 배열 동적할당으로 해결해봐야 할 듯.
// 1차시도 : 동적할당 필요없이 크기 100 x 100인 이차원배열로 해결함 

#include <stdio.h>

int main()
{
    int rows, cols = 0;
    scanf("%d %d", &rows, &cols);
    
    int _2d_arr[100][100];
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &_2d_arr[i][j]);
        }
    }
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            int buf = 0;
            scanf("%d", &buf);
            _2d_arr[i][j] += buf;
        }
    }
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", _2d_arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
