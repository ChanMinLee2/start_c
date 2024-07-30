// deq의 기본 문제
#include <stdio.h>
#define MAX 1000000

int deq[MAX];
int front = 0;
int rear = 0;

void deq_front_push(int add_num){
  if (front != 0)
  {
    deq[--front] = add_num;
  }

  else{ // front == 0일때 (앞으로 더이상 못감)
    front = MAX - 1; 
    deq[front] = add_num;
  }
};

void deq_rear_push(int add_num){
  if (rear != MAX - 1)
  {
    deq[++rear] = add_num;
  }

  else{ // rear == MAX-1 일때 (뒤로 더이상 못감)
    rear = 0;
    deq[rear] = add_num;
  }
};
int deq_front_pop(){
  if (front == rear) 
  {
    return -1;
  }
  if (front != MAX-1 )
  {
    return deq[front++];
  }
  else{
    int front_buf = front;
    front = 0;
    return deq[front_buf];
  }
};
int deq_rear_pop(){
  if (front == rear) 
  {
    return -1;
  }
  if (rear != 0 )
  {
    return deq[rear--];
  }
  else{
    int rear_buf = rear;
    rear = MAX-1;
    return deq[rear_buf];
  }
};
int deq_count();
int deq_empth_check();
int deq_print_front();
int deq_print_rear();

int main()
{
    int count = 0;
    int order_type = 0;
    int order_subnum = 0;
    printf("%d, %d");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
      printf("%d %d\n", deq[front], deq[rear]);
      scanf("%d", &order_type);
      switch (order_type)
      {
      case 1:
        scanf("%d", &order_subnum);
        deq_front_push(order_subnum);
        break;

      case 2:
        scanf("%d", &order_subnum);
        deq_rear_push(order_subnum);
        break;

      case 3:
        printf("%d\n", deq_front_pop());
        break;

      case 4:
        printf("%d\n", deq_rear_pop());
        break;

      case 5:
        /* code */
        break;

      case 6:
        /* code */
        break;

      case 7:
        /* code */
        break;

      case 8:
        /* code */
        break;

      default:
        break;
      }
    }
}