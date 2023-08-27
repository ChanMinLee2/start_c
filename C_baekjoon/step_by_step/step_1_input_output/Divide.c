#include <stdio.h>

int main(void)
{
    double num1 = 0.0, num2 = 0.0;
    
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    
    printf("%.12lf", num1 / num2);
        
    return 0;
}
