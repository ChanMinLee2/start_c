#include <stdio.h>

int main(void)
{
    int X = 0;
    int N = 0;
    int a,b = 0;
    int add = 0;
    
    scanf("%d", &X);
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        
        scanf("%d %d", &a, &b);
        add += (a*b);
    }
    
    if(add == X)
        printf("Yes");
    else
        printf("No");
    
}