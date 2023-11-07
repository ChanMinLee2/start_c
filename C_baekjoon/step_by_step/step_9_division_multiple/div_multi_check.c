// 2차 시도 성공 : 1차때 if 분기를 아래쪽에 해놨더니 처음에 0 0들어오는 케이스에서 오류 발생, 수정후 성공. 
#include <stdio.h>

int main()
{
    int count = 0;
    int num1 , num2 = 0;
    while(1)
    {
        scanf("%d %d", &num1, &num2);
        if(num1 == 0 && num2 == 0)
        {
            break;
        }
        if(num2 % num1 == 0)
        {
            printf("factor\n");
        }
        else if( num1 % num2 == 0)
        {
            printf("multiple\n");
        }
        else
        {
            printf("neither\n");
        }

    }
}
