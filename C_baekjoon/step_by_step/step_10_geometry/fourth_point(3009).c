// 1차시도 성공 : 점위치 x y좌표를 각각 1001개의 원소를 가지는 배열의 인덱스로 사용함
//          그리고 추가될때마다 그 배열의 값++ 해서 1인 원소의 인덱스가 답이되도록함 

#include <stdio.h>

int main()
{
    int size = 1001;
    int x[size];
    int y[size];
    
    int num_x = 0;
    int num_y = 0;
    
    int result_x = 0;
    int result_y = 0;
    
    for (int i = 0; i < size; i++) {
        x[i] = 0;
        y[i] = 0;
    }
    
    for (int i = 0; i < 3; i++) {
        scanf("%d %d", &num_x, &num_y);
        x[num_x]++;
        y[num_y]++;
    }
    
    for (int i = 0; i < size; i++) {
        if(x[i] == 1)
        {
            result_x = i;
        }
        if(y[i] == 1)
        {
            result_y = i;
        }
    }
    printf("%d %d", result_x, result_y);
    
    
    
    
}
