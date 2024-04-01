/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define MAX 1000000
char num_stack[MAX];

void push_stack(char* num_stack, int* stack_count, char num)
{
    if (*stack_count < MAX)
    {
        num_stack[(*stack_count)++] = num;
    }
    return;
}

void pop_stack(char* num_stack, int* stack_count)
{
    if (*stack_count > 0)
    {
        --(*stack_count);
        //printf("%d\n", num_stack[*stack_count]);
    }
    else
    {
        //printf("%d\n", -1);
    }
}

void count_stack(int* num_stack, int stack_count)
{
    printf("%d\n", stack_count);
}

void empty_check_stack(int * num_stack, int stack_count)
{
    if (stack_count == 0)
    {
        printf("%d\n", 1);
    }
    else
    {
        printf("%d\n", 0);
    }
}

void top_stack(int * num_stack, int stack_count)
{
    if (stack_count > 0)
    {
        printf("%d\n", num_stack[stack_count-1]);
    }
    
    else
    {
        printf("%d\n", -1);
    }
}


int main()
{
    int count = 0;
    int stack_count = 0;
    scanf("%d", &count);
    
    for (int i = 0; i < count; i++) {
        int balance = 0;
        char buf[51];
        memset(buf, 0, sizeof(buf));
        scanf("%s", buf);
        int buf_size = strlen(buf);
        printf("bufsize : %d\n", &buf_size);
        
        for (int j = 0; j < buf_size; j++) {
            // printf("j = %d, stack_count = %d\n", j, stack_count);
            if(buf[j] == ')' )
            {
                balance--;
            }
            
            if(buf[j] == '(' )
            {
                push_stack(num_stack, &stack_count, '(');
                balance++;
            }

            if(buf[j] ==')' && stack_count > 0)
            {
                pop_stack(num_stack, &stack_count);
                
            }

            if (balance < 0)
            {
                break;
            }
            
        }
        if(stack_count != 0 || balance != 0)
        {
            printf("NO\n");
        }
        
        else
        {
            printf("YES\n");
        }
        
    }
}
