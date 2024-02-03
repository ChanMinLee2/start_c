// 1차시도 실패 : 시간초과 - set의 사용 필요 
#include <stdio.h>

int my_cards[500000];
int given_cards[500000];
int result[500000];

int main()
{
    int my_count =0;
    scanf("%d", &my_count);
    
    for (int i = 0; i < my_count; i++) {
        scanf("%d", &my_cards[i]);
    }
    
    int given_count = 0;
    scanf("%d", &given_count);
    
    for (int i = 0; i < given_count; i++) {
        scanf("%d", &given_cards[i]);
    }
    
    // 여기 셋을 사용해야하나봄 
    for (int i = 0; i < given_count; i++) {
        for (int j = 0; j < my_count; j++) {
            if(given_cards[i] == my_cards[j])
            {
                result[i]++;
            }
        }
    }
    
    for (int i = 0; i < given_count; i++) {
        printf("%d", result[i]);
    }
    
}
