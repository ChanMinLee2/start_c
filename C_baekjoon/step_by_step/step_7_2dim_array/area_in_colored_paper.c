// 100x100 이차원 배열로 흰도화지 표현. 각 1x1마다 하나의 단위 넓이(pixel)로 생각해보기. 
// 1차 시도 성공 : 이차원 배열로 종이의 단위 넓이를 인식하니 쉬웠음. 문제점은 3중 반복;; 
#include <stdio.h>

int main()
{
    int white_paper[100][100];
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            white_paper[i][j] = 0;
        }
    }
    int input_x = 0;
    int input_y = 0;
    int input_count = 0;
    int area_of_black = 0;
    
    scanf("%d", &input_count);
    
    for (int i = 0; i < input_count; i++) {
        scanf("%d %d", &input_x, &input_y);
        for(int j = input_y-1; j < input_y+9; j++)
        {
            for (int k = input_x-1; k < input_x+9; k++) {
                white_paper[j][k]++;
            }
        }
    }
    
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if(white_paper[i][j] == 0)
                area_of_black++;
        }
    }

    printf("%d", 10000 - area_of_black);
    return 0;
}