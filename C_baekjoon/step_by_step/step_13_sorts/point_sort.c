// 1차 시도 실패 : 마지막 원소의 교환이 일어나지 않음... 이유 찾기 
#include <stdio.h>

void merge_x(int * arr, int * arr2, int s, int m, int e)
{
    // s : start point, m : mid point, e : end point

    int n1 = m - s + 1; // left array's size
    int n2 = e - m;     // right array's size
    //printf("n1 : %d, n2 : %d\n\n", n1, n2);
    int left_arr[n1+1]; 
    int right_arr[n2+1];
    int left_arr2[n1+1]; 
    int right_arr2[n2+1];

    // first for loop - copy arr values to left
    for (int i = 0; i < n1; i++) 
    {
        left_arr[i] = arr[s + i];
        left_arr2[i] = arr2[s + i];
        //printf("left i : %d - left_arr[i] : %d - arr[s+i] : %d\n", i, left_arr[i], arr[s+i]);
    }
    
    // second for loop - copy arr values to right
    for (int j = 0; j < n2; j++)
    {
        right_arr[j] = arr[m + j + 1];
        right_arr2[j] = arr2[m + j + 1];
        //printf("right %d : %d : %d \n", j, right_arr[j], arr[m+j+1]);
    }

    left_arr[n1] = 2147483647; // 정수형 최댓값 ()
    right_arr[n2] = 2147483647;
    
    left_arr2[n1] = 2147483647; // 정수형 최댓값 ()
    right_arr2[n2] = 2147483647;

    int idx_left = 0; 
    int idx_right = 0; 

    for (int k = s; k <= e; k++)
    {
        if (left_arr[idx_left] <= right_arr[idx_right])
        {
            arr[k] = left_arr[idx_left];
            arr2[k] = left_arr2[idx_left];
            idx_left++;
        }

        else
        {
            arr[k] = right_arr[idx_right];
            arr2[k] = right_arr2[idx_right];
            idx_right++;
        }
    }
}

void merge_sort_x(int * arr, int * arr2, int s, int e)
{
    if( s < e )
    {
        int m = (s+e)/2;
        merge_sort_x(arr, arr2, s, m);
        merge_sort_x(arr, arr2, m+1, e);
        merge_x(arr, arr2, s,m,e);
    }
}

void merge_y(int * arr, int * arr2, int s, int m, int e)
{
    // s : start point, m : mid point, e : end point

    int n1 = m - s + 1; // left array's size
    int n2 = e - m;     // right array's size
    //printf("n1 : %d, n2 : %d\n\n", n1, n2);
    int left_arr[n1+1]; 
    int right_arr[n2+1];
    int left_arr2[n1+1]; 
    int right_arr2[n2+1];

    // first for loop - copy arr values to left
    for (int i = 0; i < n1; i++) 
    {
        left_arr[i] = arr[s + i];
        left_arr2[i] = arr2[s + i];
        //printf("left i : %d - left_arr[i] : %d - arr[s+i] : %d\n", i, left_arr[i], arr[s+i]);
    }
    
    // second for loop - copy arr values to right
    for (int j = 0; j < n2; j++)
    {
        right_arr[j] = arr[m + j + 1];
        right_arr2[j] = arr2[m + j + 1];
        //printf("right %d : %d : %d \n", j, right_arr[j], arr[m+j+1]);
    }

    left_arr[n1] = 2147483647; // 정수형 최댓값 ()
    right_arr[n2] = 2147483647;
    
    left_arr2[n1] = 2147483647; // 정수형 최댓값 ()
    right_arr2[n2] = 2147483647;

    int idx_left = 0; 
    int idx_right = 0; 

    for (int k = s; k <= e; k++)
    {
        if (left_arr2[idx_left] <= right_arr2[idx_right])
        {
            arr[k] = left_arr[idx_left];
            arr2[k] = left_arr2[idx_left];
            idx_left++;
        }

        else
        {
            arr[k] = right_arr[idx_right];
            arr2[k] = right_arr2[idx_right];
            idx_right++;
        }
    }
}

void merge_sort_y(int * arr, int * arr2, int s, int e)
{
    if( s < e )
    {
        int m = (s+e)/2;
        merge_sort_y(arr, arr2, s, m);
        merge_sort_y(arr, arr2, m+1, e);
        merge_y(arr, arr2, s,m,e);
    }
}

int main()
{
    int count = 0;
    scanf("%d", &count);
    
    int x_arr[100000];
    int y_arr[100000];
    for (int i = 0; i < 100000; i++) {
        x_arr[i] = 0;
        y_arr[i] = 0;
    }
    
    for (int i = 0; i < count; i++) {
        scanf("%d %d", &x_arr[i], &y_arr[i]);
    }
    
    // x로 정렬 후 x좌표 값이 같은 케이스들만 모아서 정렬하는과정 반복  
    merge_sort_x(x_arr, y_arr, 0, count-1);
    int count_of_x = 0;
    int x_buf = 0;
    for (int i = 0; i < count; i++) {
        if(count_of_x == 0)
        {
            x_buf = x_arr[i];
            count_of_x++;
        }
        
        else if(x_buf == x_arr[i])
        {
            // 이 케이스 문제 
            if(i == count-1)
            {
                merge_sort_y(x_arr, y_arr, i - count_of_x+1, i);
                break;
            }
            count_of_x++;
        }
        
        else 
        {
            merge_sort_y(x_arr, y_arr, i - count_of_x, i-1);
            count_of_x = 0;
        }
    }
    
    for (int i = 0; i < count; i++) {
        printf("%d %d\n", x_arr[i], y_arr[i]);
    }
}
