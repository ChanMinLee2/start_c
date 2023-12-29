// 1차 시도 성공 : 기준수를 3개의 카드 합으로 최대 근사값 찾기 3번 루프돌려서 전탐색함

#include <stdio.h>

int main()
{
    int cards = 0;
    int flag = 0;
    
    int sum = 0;
    
    scanf("%d %d", &cards, &flag);
    
    int cards_arr[100];
    
    for (int i = 0; i < 100; i++) {
        cards_arr[i] = 0;
    }
    
    for (int i = 0; i < cards; i++) {
        scanf("%d", &cards_arr[i]);
    }
    
    int first_check = 0;
    for (int i = 0; i < cards-2; i++) {
        for (int j = i+1; j < cards-1; j++) {
            for (int k = j+1; k < cards; k++) {
                if(cards_arr[i] + cards_arr[j] + cards_arr[k] <= flag)
                {
                    if (first_check == 0)
                    {
                        sum = cards_arr[i] + cards_arr[j] + cards_arr[k];
                        first_check++;
                    }
                    
                    else if (cards_arr[i] + cards_arr[j] + cards_arr[k] > sum)
                    {
                        sum = cards_arr[i] + cards_arr[j] + cards_arr[k];
                    }
                    
                }
            }
        }
    }
    
    printf("%d", sum);
}
