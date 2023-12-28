// 1차 시도 성공 : 알고리즘 점근적 표기 
#include <stdio.h>

int main()
{
    int a1, a0, c, n0; // a1 * n0 + a0 > c * n0 
    int check = 0;
    
    scanf("%d %d", &a1, &a0);
    scanf("%d", &c);
    scanf("%d", &n0);
    
    for (int n = n0; n < 101; n++) {
        if(a1 * n + a0 > c * n)
        {
            check = 0;
            break;
        }
        
        else
        {
            check = 1;
        }
    }
    printf("%d", check);

}

// 99 * 1 - 100 <= 98 * 1 
