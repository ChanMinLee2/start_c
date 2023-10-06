#include <stdio.h>

// 1차 시도 실패 - ascii 배열에는 정상적으로 카운트 되어서 들어갔음. 그 이후로 most check가 안됨. 

int main(void)
{
    char buf;
    char most_alpha;
    int most_count;
    int most_set_count = 0;
    
    int ascii[26];
    
    for(int i = 0; i < 26; i++)
    {
        ascii[i] = 0;
    }
    
    while((buf = getchar()) != '\n')
    {
        printf("scan buf : %c\n", buf);
        
        if(buf >= 97)
            buf -= 97;
        else
            buf -= 65;
        
        printf("minus process, buf : %d\n", buf);
        ascii[buf]++;
    }
    
    // check 
    //for(int k = 0; k < 26; k++)
    //{
    //    printf("%d\n", ascii[k]);
    //}
    
    for(int i = 0; i < 26; i++)
    {
        if(i = 0)
        {
            most_count = ascii[i];
            most_alpha = i + 65;
        }
            
        else
        {
            if(ascii[i] > most_count)
            {
                most_count = ascii[i];
                most_alpha = i + 65;
            }
                
            else if( ascii[i] == most_count && ascii[i] != 0)
            {
                most_alpha = '?';
                break;
            }
        }   
    }
    
    printf("%c", most_alpha);
}