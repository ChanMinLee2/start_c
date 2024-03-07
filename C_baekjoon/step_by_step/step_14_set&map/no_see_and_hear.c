// 1차 시도 실패 : 시간 초과... 로직 수정 필요 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//애초에 하나의 큰 배열에 저장하면서, 중복체크만 하기. O(n*20*20)

int person_in_set(char** set, int set_size ,char* person)
{
    for (int i = 0; i < set_size; i++) {
        if(strcmp(person, set[i]) == 0)
        {
            return 1;
        }
    }
    return 0;
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
    char** people = (char**)malloc(total_count * sizeof(char*));
    char** overlap = (char**)malloc(total_count * sizeof(char*));
    
    // 2단계
    for (int i = 0; i < total_count; i++) {
        people[i] = (char*)malloc(sizeof(char) * 21);
        overlap[i] = (char*)malloc(sizeof(char) * 21);
    }
    
    for (int i = 0; i < total_count; i++) {
        scanf("%s", person_buf);
        
        if(person_in_set(people, i, person_buf) == 1)
        {
            strcpy(overlap[overlap_count++], person_buf);
        }
        else{
            strcpy(people[i], person_buf); 
        }
    }
    
    printf("%d\n", overlap);
    for (int i = 0; i < overlap_count; i++) {
        printf("%s\n", overlap[i]);
    }

    
    
}
