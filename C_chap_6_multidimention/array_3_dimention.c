#include <stdio.h>

int main(void)
{
    int mean;
    int students[3][3][2] = {
        {
            {90, 95}, // A반의 a학생
            {80, 75}, // A반의 b학생
            {80, 100} // A반의 c학생
        },
        {
            {80, 80}, // B반의 a학생
            {90, 90}, // B반의 b학생
            {70, 100} // B반의 c학생
        },
        {
            {90, 90}, // C반의 a학생
            {100, 100}, // C반의 b학생
            {70, 75}, // C반의 c학생
        }
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mean += students[0][i][j];
        }
    }
    printf("A반의 평균 점수 : %d \n", mean);
    
    return 0;
}