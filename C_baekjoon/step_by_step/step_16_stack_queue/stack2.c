// 배열을 통한 스택 구현. top = stack_count, 그런데 stack_count는 0부터 시작함. 추가할때 stackcount에 추가하고 하나 늘리고.
// 제거할때는 하나 감소하고 출력하고. 그냥 top출력할때는 하나 뺀 자리 출력하고.

// 1차시도 성공 : 로직구현.

#include <stdio.h>
#define MAX 1000000
int num_stack[MAX];

/* typedef struct node
{
    node* next;
    int val;
}node;

typedef struct stack
{
    
} */

void push_stack(int* num_stack, int* stack_count, int num)
{
    if (*stack_count < MAX)
    {
        num_stack[(*stack_count)++] = num;
    }
    return;
}

void pop_stack(int* num_stack, int* stack_count)
{
    if (*stack_count > 0)
    {
        --(*stack_count);
        printf("%d\n", num_stack[*stack_count]);
    }
    else
    {
        printf("%d\n", -1);
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

    for (int i = 0; i < count; i++)
    {
        printf("i : %d, stack_count : %d\n", i, stack_count);
        int fn_num = 0;
        int new_num = 0;
        scanf("%d", &fn_num);

        if (fn_num == 1)
        {
            scanf("%d", &new_num);
        }

        switch (fn_num)
        {
        case 1:
            push_stack(num_stack, &stack_count, new_num);
            break;
        
        case 2:
            pop_stack(num_stack, &stack_count);
            break;

        case 3:
            count_stack(num_stack, stack_count);
            break;

        case 4:
            empty_check_stack(num_stack, stack_count);
            break;

        case 5:
            top_stack(num_stack, stack_count);
            break;

        default:
            break;
        }
    }
    return 0;
}
