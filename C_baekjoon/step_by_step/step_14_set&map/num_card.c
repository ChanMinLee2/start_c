// 1차시도 실패 : 시간초과 - set의 사용 필요 
#include <stdio.h>
#include <stdlib.h>

int my_cards[500000];
int given_cards[500000];
int result[500000];

int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}

// 배열은 첫 자리(이름변수) 이후로 연결된 리스트이기 떄문에 단일 포인터로 다른 함수에서 변경 가능하다.
int binary_search(int* arr, int key, int s, int e)
{
    int m = s + e / 2;
    if (arr[m] > key)
    {
        binary_search(arr, key, m+1, e);
    }
    else if ( arr[m] < key)
    {
        binary_search(arr, key, s, m-1);
    }
    else{
        return 1;
    }
}

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

    qsort(my_cards, my_count, sizeof(int), compare);
    
    for (int i = 0; i < given_count; i++) {
        if (binary_search(my_cards, given_cards[i], 0, my_count-1) == 1)
        {
            result[i]++;
        }
        
    }
    
    for (int i = 0; i < given_count; i++) {
        printf("%d", result[i]);
    }
    
}
