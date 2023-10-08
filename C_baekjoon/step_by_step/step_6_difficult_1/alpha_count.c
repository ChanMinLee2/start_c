#include <stdio.h>

// 1차 시도 실패 - ascii 배열에는 정상적으로 카운트 되어서 들어갔음. 그 이후로 most check가 안됨. 

// 2차 시도 실패 - 1차 실패 이유는 i = 0라는 잘못된 루프조건때문 조심. 46퍼에서 실패 : 예외 상황 있는듯 조건 다시 확인 

// 3차 시도 성공 - 내부 루프 중 most count 같을 때 break 시켜버려서 그 이후에 더 큰 count가 생기는 상황 못읽음. 수정 후 성공

#include <stdio.h>

int main(void)
{
    char buf;
    char most_alpha;
    int most_count = 0;
    int most_set_count = 0;
    
    int ascii[26];
    
    for(int i = 0; i < 26; i++)
    {
        ascii[i] = 0;
    }
    
    while((buf = getchar()) != '\n')
    {
        //printf("scan buf : %c\n", buf);
        
        if(buf >= 97)
            buf -= 97;
        else
            buf -= 65;
        
        //printf("minus process, buf : %d\n", buf);
        ascii[buf]++;
    }
    
    // check 
    //for(int k = 0; k < 26; k++)
    //{
        //printf("%d %d\n", k, ascii[k]);
    //}
    
    for(int i = 0; i < 26; i++)
    {
        //printf("po %d \n", i);
        
        if(i == 0)
        {
            most_count = ascii[i];
            most_alpha = i + 65;
            continue;
        }
            
        else
        {
            //printf("good into\n");
            if(ascii[i] != 0 && ascii[i] > most_count)
            {
                most_count = ascii[i];
                most_alpha = i + 65;
            }
            
            else if( ascii[i] != 0 && ascii[i] == most_count)
            {
                most_alpha = '?';
                continue;
            }  
        }
    }
    
    printf("%c", most_alpha);
}