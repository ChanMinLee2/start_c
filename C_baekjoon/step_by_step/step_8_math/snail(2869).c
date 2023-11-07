// 1차 시도 실패 : 시간 초과, 시간 맞출려면 한번에 계산해야할듯.. goal에서 바로 up한번 빼고 나머지로 한번에 계산해보자. 
// 5차 시도 성공 : 234차에서는 각각 다음과 같은 변화를 줌, days를 구할때 방식 변화 1번, 
// if 조건 2번 변화 (처음에는 1개로, 2개로 나누고는 days변화를 놓쳐 조건 미스) 
// 이것들 수정 후 성공... 힘드네 
// 결론 : 1. 목표치에서 하루에 올라가는 높이(떨어지는 높이 제외)만큼 빼고 days++
// 2. 그 수를 하루에 최종적으로 올라가는 수로 나누고, 나머지도 구함
// 3. 나눈 몫은 days에 그대로 추가, 나머지는 0이 아닌 경우 days 추가 
#include <stdio.h>

int main()
{
    int up = 0;
    int down = 0;
    int goal = 0;
    
    scanf("%d %d %d", &up, &down, &goal);
    
    int days = 0; // i = days for this
    int j = 0; // j is rest of calulating i
    goal -= up;
    days++; // goal에 도착하는 마지막 날 
    days += goal / (up-down);
    j = goal % (up-down);
    
    //printf("1 + goal / up-down : %d\n", days);
    
    int days_change_count = 0;
    // j != 0인 경우 >> 하루 단위로 계산했을 때 마지막 포인트에서 조금(하루단위 움직임보단 작은) 남은경우 , i++
    if(j != 0)
    {
        days++;
        days_change_count++;
    }
        // 아래 케이스는 이미 j로 해결한거임 굳이 한번 더 할 필요가 없음 
        // 왜냐? j != 0이고 몫이 0이어도 어차피 첫 if에서 확인해서 올려줌. 아래 if에 걸리면 한번더하는거임... 근데 왜 됐지?
        // 됐던 이유가 있네, 어차피 위에 걸리면서 count++되면 아래 안걸려서 그랬구나... 

    // if 하나로 하면 두 경우 모두 해당할 때 i++ 2번 할 수가 없음
    // i == 0인 경우 >> goal - up < up-down 즉 하루지나도 goal - up보다 큼 >> 그래도 1번은 움직여야함 , i++
    // if(days_change_count == 0 && days == 2) 
    //    days++;
    
    
    
    printf("%d", days);
}
