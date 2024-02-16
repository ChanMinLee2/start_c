// 1차시도 실패 : 일부 케이스 오류 - for문 수정해보기.
#include <stdio.h>
#include <stdlib.h>

int my_cards[500000];
int given_cards[500000];
int result[500000];

void merge(int * arr, int s, int m, int e)
{
    // s : start point, m : mid point, e : end point

    int n1 = m - s + 1; // left array's size
    int n2 = e - m;     // right array's size
    int left_arr[n1+1]; 
    int right_arr[n2+1];

    // first for loop - copy arr values to left
    for (int i = 0; i < n1; i++) 
    {
        left_arr[i] = arr[s + i];
    }
    
    // second for loop - copy arr values to right
    for (int j = 0; j < n2; j++)
    {
        right_arr[j] = arr[m + j + 1];
    }

    left_arr[n1] = 2147483647; // 정수형 최댓값 ()
    right_arr[n2] = 2147483647;

    int idx_left = 0; 
    int idx_right = 0; 

    for (int k = s; k <= e; k++)
    {
        if (left_arr[idx_left] <= right_arr[idx_right])
        {
            arr[k] = left_arr[idx_left];
            idx_left++;
        }

        else
        {
            arr[k] = right_arr[idx_right];
            idx_right++;
        }
    }
}

void merge_sort(int * arr, int s, int e)
{
    if( s < e )
    {
        int m = (s+e)/2;
        merge_sort(arr, s, m);
        merge_sort(arr, m+1, e);
        merge(arr,s,m,e);
    }
}

// 배열은 첫 자리(이름변수) 이후로 연결된 리스트이기 떄문에 단일 포인터로 다른 함수에서 변경 가능하다.
int binary_search(int* arr, int key, int s, int e)
{
    if(s >= e)
    {
        if(arr[s] == key)
        {
            return s;
        }
        else
        {
            return -1;
        }
    }
    
    int m = (s + e)/2;
    if(arr[m] == key)
    {
        return m;
    }
    else if (arr[m] > key)
    {
        return binary_search(arr, key, s, m-1);
    }
    else{
        return binary_search(arr, key, m+1, e);
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

    merge_sort(my_cards, 0, my_count-1);
    
    int none = 10000001;
    int last_index = my_count-1;
    // 수정하기
    for (int i = 0; i < given_count; i++) {
        int flag = binary_search(my_cards, given_cards[i],0, given_count);
        if(flag != -1)
        {
            my_cards[flag] = my_cards[last_index];
            my_cards[last_index] = none;
            result[i]++;
            i--;
            continue;
        }
    }
    
    for (int i = 0; i < given_count; i++) {
        printf("%d ", result[i]);
    }
    
}
