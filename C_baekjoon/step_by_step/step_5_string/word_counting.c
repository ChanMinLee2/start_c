#include <stdio.h>

// 1차 시도 실패 - getchar 사용하는 방법 구상중 
// 1%도 못보고 실패하는 거라 첫 루프 부터 구조적 문제 있을듯

// 2차 시도 실패 - getchar 반복 중 문제 찾음 - 조건 '\n'으로 수정, 루프 탈출 시의 마지막 단어 wordcount에 반영안되는 점 수정
// 90퍼 언저리 실패 - 예외적인 특이 케이스가 있을 거라 추정됨.  

// 3차 시도 성공 - 특이 케이스 : 공백만 입력되는 경우 - 첫 입력 if문에서 bufmemory에 저장안해서 카운팅되버림. 

// 기억할 점 : 문자열 입력 getchar로 할 때 '\n'을 끝점으로 생각 // 이미 받아진 문자열은 '\0'을 끝점으로 생각
int main(void)
{
    int wordcount = 0;
    int readcount = 0;
    
    char buf_memory;
    char first_memory;
    char cbuf;
    
    while((cbuf = getchar()) != '\n') 
    {
        // cbuf = getchar();
        
        if(readcount == 0 && cbuf == ' ')
        {
            readcount++;
            first_memory = cbuf;
            buf_memory = cbuf;
            continue;
        }
            
        else if(readcount != 0 && cbuf == ' ')
        {
            wordcount++;
        }
        
        buf_memory = cbuf;
        readcount++;
        
    }
    if(buf_memory != ' ')
        wordcount++;
        
    printf("%d", wordcount);
}