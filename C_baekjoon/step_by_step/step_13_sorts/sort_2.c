// 1차 시도 성공 : 알고리즘 과제 파일인 merge sort 로직 사용
#include <stdio.h>

void merge(int * arr, int s, int m, int e)
{
    // s : start point, m : mid point, e : end point

    int n1 = m - s + 1; // left array's size
    int n2 = e - m;     // right array's size
    //printf("n1 : %d, n2 : %d\n\n", n1, n2);
    int left_arr[n1+1]; 
    int right_arr[n2+1];

    // first for loop - copy arr values to left
    for (int i = 0; i < n1; i++) 
    {
        left_arr[i] = arr[s + i];
        //printf("left i : %d - left_arr[i] : %d - arr[s+i] : %d\n", i, left_arr[i], arr[s+i]);
    }
    
    // second for loop - copy arr values to right
    for (int j = 0; j < n2; j++)
    {
        right_arr[j] = arr[m + j + 1];
        //printf("right %d : %d : %d \n", j, right_arr[j], arr[m+j+1]);
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
    int count = 0;
    scanf("%d", &count);
    
    int num_arr[1000000];
    for (int i = 0; i < 1000000; i++) {
        num_arr[i] = 0;
    }
    
    for (int i = 0; i < count; i++) {
        scanf("%d", &num_arr[i]);
    }
    
    merge_sort(num_arr, 0, count-1);
    for (int i = 0; i < count; i++) {
        printf("%d\n", num_arr[i]);
    }
}
