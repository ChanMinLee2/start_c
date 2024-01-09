// 1차 시도 성공 : basic sort + index 조정
#include <stdio.h>

int swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    
    return 0;
}

int main()
{
    int total_members = 0;
    int prize_numbers = 0;
    int cutline = 0;
    
    scanf("%d %d", &total_members, &prize_numbers);

    int members_arr[1000];
    
    for (int i = 0; i < total_members; i++) {
        scanf("%d", &members_arr[i]);
    }
    
    for (int i = 0; i < total_members; i++) {
        int min_idx = i;
        for (int j = i+1; j < total_members; j++) {
            if(members_arr[j] < members_arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(&members_arr[i], &members_arr[min_idx]);
    }
    
    cutline = members_arr[total_members - prize_numbers];
    printf("%d", cutline);
    return 0;
}
