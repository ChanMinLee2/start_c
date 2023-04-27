#include <stdio.h>

int FACTORIAL(int number)
{
    if( number == 1 )
        return 1;
    else
        return number * FACTORIAL(number-1);
}

int FIBONACCI(int number)
{
    if( number == 1 )
        return 1;
    if( number == 2 )
        return 2;
    return (FIBONACCI(number-1) + FIBONACCI(number-2)); 
}

int main(void)
{
    int FACTORIAL_number = 10;
    int FIBONACCI_number = 20;

    printf("FACTORIAL of 10 = %d \n",FACTORIAL(FACTORIAL_number));
    printf("FIBONACCI of 20 = %d \n",FIBONACCI(FIBONACCI_number));

    return 0;
}