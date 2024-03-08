// 1차 실패 : while loop 수정 필요

#include <stdio.h>

int nums_of_lan(int* lans, int index, int k)
{
    int buf = 0;
    for (int i = 0; i < k; i++) {
        buf += lans[i] / index;
    }
    return buf;
}


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

int main()
{
    int k, n;
    
    scanf("%d %d", &k, &n);
    int max = 0;
    int len_of_lan[10000];
    
    for (int i = 0; i < k; i++) {
        scanf("%d", &len_of_lan[i]);
    }
    //printf("min : %d\n", min);
    
    merge_sort(len_of_lan, 0, k-1);
    
    int current_numbers_of_lan = 0;
    
    int start = 1, end = len_of_lan[k-1];
    int buf = 0;
    int index = 0;
    
    while(start <= end)
    {
        // 이진 탐색 방식 접근
        index = (start+end)/2;
        
        current_numbers_of_lan = nums_of_lan(len_of_lan, index, k);
        
        buf = index;
        
        // 현재 길이로 자를 때 랜선 수가 모자라면 더 작게(index 감소) 잘라야함
        if(current_numbers_of_lan < n)
        {
            current_numbers_of_lan = 0;
            end = index-1;
        }
        
        // 현재 길이로 자를 때 랜선 수가 넘으면 더 크게(index 증가) 잘라야함
        // 또한 개수가 맞을 때, 더 클 수있는지 확인해야함.
        else if(current_numbers_of_lan >= n)
        {
            current_numbers_of_lan = 0;
            start = index+1;
        }
        
    }
    
    printf("%d", buf);
}
