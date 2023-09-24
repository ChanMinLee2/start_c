#include <stdio.h>

// 1차 시도 실패 - getchar 사용하는 방법 구상중 
// 1%도 못보고 실패하는 거라 첫 루프 부터 구조적 문제 있을듯

int main(void)
{
    int wordcount = 0;
    int readcount = 0;
    
    char buf_memory;
    char cbuf;
    
    while((cbuf = getchar()) != EOF)
    {
        // cbuf = getchar();
        
        if(readcount == 0 && cbuf == ' ')
        {
            readcount++;
            continue;
        }
            
        else if(readcount != 0 && cbuf == ' ')
        {
            wordcount++;
        }
        
        buf_memory = cbuf;
        readcount++;
        
    }
    if(buf_memory == ' ')
        wordcount--;
        
    printf("%d", wordcount);
}