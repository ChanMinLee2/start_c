// 1차 시도 : 방향성 잡기... 너무 어렵다. 
#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    
    char chess_input[50][50];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%c", &chess_input[i][j]);
        }
    }
    
    // case 1 - 시작블록이 B인경우랑 비교
    for (int i = 0; i < m-8; i++) {
        
    }

    // case 2 - 시작블록이 w인경우랑 비교 
}
