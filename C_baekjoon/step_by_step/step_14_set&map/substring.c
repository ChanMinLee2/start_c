// 1,2차실패, 3차 성공 : 원래 작성한 O(n^3) 코드 갈아엎어서 입력받아 정렬하고 다른 서브스트링 개수 확인. 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct word {
    char word[1001];
}word;

word word_arr[500501];

// int compare(const void *a, const void *b)
// {
//      return strcmp((char *)a, (char *)b);
// }

int compare(const void *a, const void *b) {
    const word *word_a = (const word *)a;
    const word *word_b = (const word *)b;
    
    return strcmp(word_a->word, word_b->word);
}

// int word_in_arr(word word_arr[], word string, int size)
// {
//     for (int i = 0; i < size; i++) {
//         if ( strcmp(word_arr[i].word, string) == 1 )
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

int main(void)
{
    char input[1001];
    scanf("%s", input);
    
    int result = 0;
    int input_size = strlen(input);
    int arr_size = 0;
    
    
    // 부분 문자열 복사 , i는 문자열 크기, j는 진행 index
    for (int i = 1; i <= input_size; i++) {
        for (int j = 0; j < input_size-i+1; j++) {
            strncpy(word_arr[arr_size].word, input+j, i);
            //word_arr[arr_size].word[strlen(word_arr[arr_size].word)] = '\0';
            arr_size++;
        }
    }
    
    qsort(word_arr, arr_size, sizeof(word), compare);
    
    for (int i = 0; i < arr_size; i++)
    {
        // 정렬된 
        //printf("%s\n", word_arr[i].word);
        if(strcmp(word_arr[i].word, word_arr[i+1].word) != 0)
        {
            result++;
        }
    }
    
    printf("%d", result);
}