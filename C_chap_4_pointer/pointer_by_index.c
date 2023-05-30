#include <stdio.h>

int main(void)
{ 
  int arr[3]  = {15, 25, 35};
  int * ptr = &arr[0];
  
  printf("%d\n", ptr);
  return 0;
}
