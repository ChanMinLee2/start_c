// 1. 입력받은 가로수 사이의 길이를 배열에 저장. 
// 2. 가장 작은 가로수 사이 길이를 정해서 그걸로 간격을 맞출 수 있는 지 체크.
//      방법 : 배열의 모든 원소가 현재 정한 길이로 나머지 없이 나눠지는 지 확인.  
// 3. 안된다면 길이를 하나씩 줄여나가면서 확인. 
// 4. 된다면 그 길이를 배열의 모든 원소가 몇 배수(배수 - 1 = 추가로 심을 나무)로 가지는 지 확인하기.

// 1차 시도 성공 : 단계적 생각 도입. 

#include <stdio.h>

int main()
{
    int distances[100000];
    int trees[100000];

    int min_distance = 0;
    int count = 0;
    scanf("%d", &count);
    
    int distances_size = count - 1; // 나무 간격의 배열이기 때문
    
    // 1.
    for (int i = 0; i < count ; i++) {
        scanf("%d", &trees[i]);
    }
    
    for (int i = 0; i < distances_size; i++) {
        
        distances[i] = trees[i+1] - trees[i]; 

        if (i == 0)
        {
            min_distance = distances[i];
        }
        else if(min_distance > distances[i])
        {
            min_distance = distances[i];
        }
    }

    // 2, 3.
    int usable_interval = 0;
    
    for (int interval = min_distance; interval >= 2; interval--)
    {
        int possible = 0;
        for (int i = 0; i < distances_size; i++)
        {
            if (possible != 0)
            {
                break;
            }
            
            possible += (distances[i] % interval);
        }
        if (possible == 0)
        {
            usable_interval = interval;
            break;
        }
    }
    
    if(usable_interval == 0)
    {
        usable_interval++;
    }
    
    //printf("usable_interval : %d\n", usable_interval);
    
    // 4.
    int result = 0;
    for (int i = 0; i < distances_size; i++)
    {
        //printf("result + : %d\n", (distances[i] / usable_interval) - 1);
        result += (distances[i] / usable_interval) - 1;
    }
    printf("%d", result);
}
