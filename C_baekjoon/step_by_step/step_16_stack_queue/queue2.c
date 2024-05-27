#include <stdio.h>
#include <string.h>

int queue[2000000];
int queue_start = 0; //push시 증가
int queue_end = 0; // pop시 증가

void push_queue(int x)
{
    queue[queue_start++] = x;
    return;
}

int pop_queue()
{
    if(queue_start <= queue_end)
    {
        printf("-1\n");
        return -1;
    }
        
    int pop = queue[queue_end];
    printf("%d\n",queue[queue_end++]);
    return(pop); 
}

int size(){
    printf("%d\n", queue_start-queue_end);
    return 0;
}

int empty(){
    if(queue_start == queue_end){
        printf("1\n");
        return 1;
    }
    
    else{
        printf("0\n");
        return 0;
    }
}

int front(){
    if(queue_start == queue_end)
    {
        printf("-1\n");
        return -1;
    }
    printf("%d\n",queue[queue_end]);
    return 0;
}

int back(){
    if(queue_start == queue_end)
    {
        printf("-1\n");
        return -1;
    }
    printf("%d\n",queue[queue_start-1]);
    return 0;
}


int main()
{
    int count = 0;
    scanf("%d", &count);
    
    for (int i = 0; i < count; i++) {
        char instructions[100];
        // memset(instructions, "", 100*sizeof(char));
        int push_number = 0;
        scanf("%s", instructions);
    
        if(strcmp(instructions, "push") == 0)
        {
            scanf("%d", &push_number);
            push_queue(push_number);
        }
        
        else if(strcmp(instructions, "pop") == 0)
        {
            pop_queue();
        }
        
        else if(strcmp(instructions, "size") == 0)
        {
            size();
        }
        
        else if(strcmp(instructions, "empty") == 0)
        {
            empty();
        }
        
        else if(strcmp(instructions, "front") == 0)
        {
            front();
        }
        
        else if(strcmp(instructions, "back") == 0)
        {
            back();
        }
    }
    return 0;
}
