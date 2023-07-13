#include <stdio.h>

struct point
{
    int x_side;
    int y_side;
};

int main(void)
{
    struct point array[3];

    for (int i = 0; i < 3; i++)
    {
        printf(" %d 번째 좌표 x값 입력 : ", i);
        scanf("%d", &array[i].x_side); // array[i]의 x_side라는 변수의 주소값이 필요한 상황. ( 우선순위 - . > & )
        //printf("\n");
        printf(" %d 번째 좌표 y값 입력 : ", i);
        scanf("%d", &array[i].y_side);
    }

    for (int j = 0; j < 3; j++)
    {
        printf("%d번째 좌표 x : %d, y : %d\n", j, array[j].x_side, array[j].y_side);
    }
    
    return 0;
}
