#include <stdio.h>

int main(void)
{
    int array[10];
    int Q_numbers[10];
    int Q_numsize = 0;
    for(int i = 0; i < 10; i++)
    {
        Q_numbers[i] = 0;
        
    }
    
    for(int i = 0; i < 10; i++)
    {   // 배열의 원소에 입력받을시 아래와 같이 이름변수로 하던가 
        // 주소값에 접근하는 앰퍼샌드 기호를 붙여 입력받는다
        scanf("%d", array + i);
      
        array[i] = array[i] % 42;
        // 첫 시행 때 나머지 배열에 첫 원소 채우기. 
        
        }
    }
  
    return 0;
    
}
