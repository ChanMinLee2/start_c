// 첫 시도 구조만 잡아놓음


#include <stdio.h>
#include <string.h>

int check_group_word(char * buf, int buf_len) // 맞으면 1 아니면 0
{
    int checker[26];
    for ( int i = 0; i < 26; i++)
    {
        checker[i] = 0;
    }

    char check_curr;
    char check_prev;
    for(int i = 0; i < buf_len; i++)
    {
        check_curr = buf[i];
        int checker_idx = check_curr - 97;
        if(checker[checker_idx] == 0 )
        {
            checker[checker_idx]++;
        }
        else if(check_prev != check_curr)
        {
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    int group_word_num = 0;
    int input_count = 0;
    char buf[101];
    
    scanf("%d", &input_count);
    
    for(int i = 0; i < input_count; i++)
    {
        scanf("%s", buf);
        group_word_num += check_group_word(buf, strlen(buf));
    }
    
    printf("%d", group_word_num);
    
}
