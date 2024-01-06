// 1차 시도 실패 : 전혀 다른 예측값이 나옴. chess와 input 비교 로직 문제인듯
// 2차 시도 성공 : 인덱스 조정 후 성공 
#include <stdio.h>

int main()
{
    char chess1[8][8] = {{"WBWBWBWB"}, {"BWBWBWBW"}, {"WBWBWBWB"},{"BWBWBWBW"},{"WBWBWBWB"},{"BWBWBWBW"},{"WBWBWBWB"},{"BWBWBWBW"}};
    char chess2[8][8] = {{"BWBWBWBW"}, {"WBWBWBWB"},{"BWBWBWBW"},{"WBWBWBWB"},{"BWBWBWBW"},{"WBWBWBWB"},{"BWBWBWBW"},{"WBWBWBWB"}};
    
    char input[50][50];
    
    int m,n = 0;
    
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++) {
        scanf("%s", &input[i][0]);
    }
    
    int min_chess = 0;
    
    for (int i = 0; i < n-7; i++) {
        for (int j = 0; j < m-7; j++) {
            int min_guess1 = 0;
            int min_guess2 = 0;
            for (int k = i; k < i+8; k++) {
                for (int l = j; l < j+8; l++) {
                    // 1차 실패 지점 : chess 배열과 비교할때 인덱스를 k l그대로 써서 index가 8의 범위를 벗어났었음
                    // chess1
                    if(input[k][l] != chess1[k-i][l-j])
                    {
                        min_guess1++;
                    }
                    
                    // chess2 
                    if(input[k][l] != chess2[k-i][l-j])
                    {
                        min_guess2++;
                    }
                }
            }
            
            if(i == 0 && j == 0)
            {
                (min_guess1 <= min_guess2) ? (min_chess = min_guess1) : (min_chess = min_guess2);
                printf("%d %d\n", min_guess1, min_guess2);
                continue;
            }
            
            if(min_guess1 <= min_guess2 && min_guess1 <= min_chess)
            {
                min_chess = min_guess1;
                printf("i : %d, j : %d - chess1 비교값 선택\n", i, j);
            }
            
            else if(min_guess2 <= min_guess1 && min_guess2 <= min_chess)
            {
                min_chess = min_guess2;
                printf("i : %d, j : %d - chess2 비교값 선택\n",i,j);
            }
            
            printf("i : %d, j : %d\n",i,j);
        }
    }
    
    printf("%d", min_chess);
}
