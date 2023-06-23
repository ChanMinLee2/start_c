#include <stdio.h>

int main(void)
{
    int villa[4][4];
    int popu, i, j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d類 %d�� 檣掘熱 : ", i+1, j+1);
            scanf("%d", &villa[i][j]);
        }
    }

    for(i=0; i<4; i++)
    {
        popu = 0;
        for(j=0; j<4; j++)
        {
            popu += villa[i][j];
        }
        printf("%d類 檣掘熱 : %d \n", i+1, popu);
    }

    return 0;
}