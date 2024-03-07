// 2차 시도 성공 : 이진탐색 + 정렬 방식으로 해결 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int string_binary_search(char **arr, char *key, int s, int e) {
    if (s > e) {
        return -1; // 범위를 벗어난 경우 -1 반환
    }

    int m = (s + e) / 2;
    int cmp = strcmp(arr[m], key);
    
    if (cmp == 0) {
        return m; // 일치하는 인덱스 반환
    } else if (cmp > 0) {
        return string_binary_search(arr, key, s, m - 1); // 왼쪽 부분 배열 탐색
    } else {
        return string_binary_search(arr, key, m + 1, e); // 오른쪽 부분 배열 탐색
    }
}

void merge(char **arr, int s, int m, int e) {
    int n1 = m - s + 1;
    int n2 = e - m;
    char **left_arr = (char **)malloc((n1 + 1) * sizeof(char *));
    char **right_arr = (char **)malloc((n2 + 1) * sizeof(char *));

    // Copy elements to left array
    for (int i = 0; i < n1; i++) {
        left_arr[i] = strdup(arr[s + i]);
    }

    // Copy elements to right array
    for (int j = 0; j < n2; j++) {
        right_arr[j] = strdup(arr[m + j + 1]);
    }

    left_arr[n1] = NULL; // Null terminate left array
    right_arr[n2] = NULL; // Null terminate right array

    int idx_left = 0;
    int idx_right = 0;

    for (int k = s; k <= e; k++) {
        if (left_arr[idx_left] && (!right_arr[idx_right] || strcmp(left_arr[idx_left], right_arr[idx_right]) <= 0)) {
            arr[k] = strdup(left_arr[idx_left]);
            idx_left++;
        } else {
            arr[k] = strdup(right_arr[idx_right]);
            idx_right++;
        }
    }

    // Free memory allocated for temporary arrays
    for (int i = 0; i < n1; i++) {
        free(left_arr[i]);
    }
    for (int j = 0; j < n2; j++) {
        free(right_arr[j]);
    }
    free(left_arr);
    free(right_arr);
}

void merge_sort(char **arr, int s, int e) {
    if (s < e) {
        int m = (s + e) / 2;
        merge_sort(arr, s, m);
        merge_sort(arr, m + 1, e);
        merge(arr, s, m, e);
    }
}

int main()
{
    /*char* no_see = (char*)malloc(500000 * (sizeof(char) * 21));
    char* no_hear = (char*)malloc(500000 * (sizeof(char) * 21));
    */
    int overlap_count = 0;
    
    char person_buf[21];
    
    int no_see_count, no_hear_count;
    scanf("%d %d", &no_see_count, &no_hear_count);
    
    int total_count = no_see_count + no_hear_count;
    
    // 이중 포인터 문자열을 동적 할당할때는 2단계로 나눠서 진행(1. char** 배열 포인터 선언 할당 2. char* 할당)
    // 1단계
    char** people1 = (char**)malloc(500000 * sizeof(char*));
    char** people2 = (char**)malloc(500000 * sizeof(char*));
    char** overlap = (char**)malloc(500000 * sizeof(char*));
    
    // 2단계
    for (int i = 0; i < 500000; i++) {
        people1[i] = (char*)malloc(sizeof(char) * 21);
        people2[i] = (char*)malloc(sizeof(char) * 21);
        overlap[i] = (char*)malloc(sizeof(char) * 21);
    }
    
    int small_count = 0;
    
    if(no_hear_count >= no_see_count)
    {
        small_count = no_see_count;
    }
    else
    {
        small_count = no_hear_count;
    }
    
    for (int i = 0; i < no_see_count; i++) {
        scanf("%s", people1[i]);
    }
    
    for (int i = 0; i < no_hear_count; i++) {
        scanf("%s", people2[i]);
    }
    
    merge_sort(people1, 0, no_see_count-1);
    merge_sort(people2, 0, no_hear_count-1);
    
    
    for (int i = 0; i < small_count; i++) {
        
        if(small_count == no_see_count)
        {
            char* buf = people1[i];
            if(string_binary_search(people2, buf, 0, no_hear_count-1) != -1)
            {
                strcpy(overlap[overlap_count++], buf);
            }
        }
        else
        {
            char* buf = people2[i];
            if(string_binary_search(people1, buf, 0, no_see_count-1) != -1)
            {
                strcpy(overlap[overlap_count++], buf);
            }
        }
    }
    
    printf("%d \n", overlap_count);
    for (int i = 0; i < overlap_count; i++) {
        printf("%s\n", overlap[i]);
    }
}
