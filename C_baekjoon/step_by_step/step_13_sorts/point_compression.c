// 1차 시도 실패 : 자동종료됨. x, y정렬 잘 일어나는지 디버깅해봐야함.
// 2차 시도 성공 : 일반 배열의 최대범위는 100000까지. 즉 1. 전역변수(1억까지는 ㄱㄴ)나 동적할당으로 그 이상의 배열을 선언하여 해결하면 됨.  
#include <stdio.h>

int numbers[1000000];
int numbers_result[1000000];
int order[1000000];

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
    
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
        order[i] = i;
    }
    
    // number 기준으로 정렬 후 값 재정의( 좌표 압축 ) 
    merge_sort_x(numbers, order, 0 ,count-1);
    int buf = 0; // -10억 부터 10억까지 초기값으로 설정 불가
    int value = 0; // 숫자들 값 0부터 차례로 재설정
    for (int i = 0; i < count; i++) {
        if(i == 0)
        {
            buf = numbers[i];
            numbers_result[i] = value;
        }
            
        else{
            // 현재값이랑 버퍼랑 같은지 확인
            if(numbers[i] == buf)
            {
                // 값 넣기만 
                numbers_result[i] = value;
            }
            
            else
            {
                buf = numbers[i];
                numbers_result[i] = ++value;
            }
        }
    }
    // order 기준으로 재정렬 ( 출력 용이성 )
    merge_sort_y(numbers_result, order, 0, count-1);
    
    
    for (int i = 0; i < count; i++) {
        printf("%d ", numbers_result[i]);
    }
}

