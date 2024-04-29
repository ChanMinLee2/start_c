/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

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
    if(queue_start == queue_end)
        return -1;
    int pop = queue[queue_end;
    printf("%d\n",queue[queue_end++]);
    return(queue[queue_end-1]); 
}

int size(){
    printf("%d\n", queue_satrt-queue_end);
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
    if(empty() == 1)
        return -1;
    printf("%d\n", queue[queue_start]);
}

int back(){
    if(empty() == 1)
        return -1;
    printf("%d\n", queue[queue_end]);
}


int main()
{
    int count = 0;
    
    for (int i = 0; i < count; i++) {
        char instructions[100];
        int push_number = 0;
        scanf("%s", instructions)
    
        if(strcmp(instructions, "push") == 0)
        {
            scanf("%d", &push_number);
        }
    }
    return 0;
}
