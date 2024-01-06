// 1차 시도 실패 : 전혀 다른 예측값이 나옴. chess와 input 비교 로직 문제인듯

#include <stdio.h>

int main()
{
    char chess1[8][8] = {{"WBWBWBWB"}, {"WBWBWBWB"}, {"WBWBWBWB"},{"WBWBWBWB"},{"WBWBWBWB"},{"WBWBWBWB"},{"WBWBWBWB"},{"WBWBWBWB"}};
    char chess2[8][8] = {{"BWBWBWBW"}, {"BWBWBWBW"},{"BWBWBWBW"},{"BWBWBWBW"},{"BWBWBWBW"},{"BWBWBWBW"},{"BWBWBWBW"},{"BWBWBWBW"}};
    
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
                    // chess1
                    if(input[k][l] != chess1[k][l])
                    {
                        min_guess1++;
                    }
                    
                    // chess2
                    if(input[k][l] != chess2[k][l])
                    {
                        min_guess2++;
                    }
                }
            }
            
            if(i == 0 && j == 0)
            {
                (min_guess1 < min_guess2) ? (min_chess = min_guess1) : (min_chess = min_guess2);
                //printf("%d %d", min_guess1, min_guess2);
                continue;
            }
            
            if(min_guess1 < min_guess2 && min_guess1 < min_chess)
            {
                min_chess = min_guess1;
            }
            
            else if(min_guess2 < min_guess1 && min_guess2 < min_chess)
            {
                min_chess = min_guess2;
            }
            
        }
    }
    
    printf("%d", min_chess);
}
