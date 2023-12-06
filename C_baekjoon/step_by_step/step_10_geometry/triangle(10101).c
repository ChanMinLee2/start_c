// 1차 시도 성공 : 복잡한 구조로함; 181개 크기 배열을 만들어서 각을 입력받아 그 인덱스의 원소++ 해서 조건 판단하는 방식. 

#include <stdio.h>

int main()
{
    int r[181];
    
    int input = 0;
    int inputs[3];
    
    for (int i = 0; i < 181; i++) {
        r[i] = 0;
    }
    
    for (int i = 0; i < 3; i++) {
        scanf("%d", &input);
        inputs[i] = input;
        r[input]++;
    }
    
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += inputs[i];
    }
    
    for (int i = 0; i < 181; i++) {
        if(sum != 180)
        {
            printf("%s","Error");
            return 0;
        }
        
        else{
            if(r[i] == 3 && i == 60)
            {
                printf("%s", "Equilateral");
                return 0;
            }
        
            if(r[i] == 2)
            {
                printf("%s", "Isosceles");
                return 0;
            }
        }
    }
    
    printf("%s", "Scalene");
    
    
    
}
