// 1차 시도 실패 - 4퍼 실패, 예제는 그대로 출력됨, 뭔가 조건상의 문제가 있는것인듯 코드 읽어봐야함. 

#include <stdio.h>

int main()
{
    int alphacount = 0;
    char buf; 
    char before_buf;
    
    while((buf = getchar()) != '\n')
    {
        alphacount++;
        //printf("%d : %c\n", alphacount,buf);
        
        if(before_buf == 'c' || before_buf == 'd')
        {
            if(buf == '-')
            {
                alphacount--;
                before_buf = buf;
                continue;
            }
            
            else if(buf == '=')
            {
                alphacount--;
                before_buf = buf;
                continue;
            }
            
            else if(buf == 'z')
            {
                before_buf = buf;
                buf = getchar();
                alphacount++;
                if(buf == '=')
                {
                    alphacount = alphacount - 2;
                    before_buf = buf;
                    continue;
                }
            }
        }
        
        else if (before_buf == 'l' || before_buf == 'n')
        {
            if(buf == 'j')
            {
                alphacount--;
                before_buf = buf;
                continue;
            }
        }
        
        else if( before_buf == 's' || before_buf == 'z')
        {
            if(buf == '=')
            {
                alphacount--;
                before_buf = buf;
                continue;
            }
        }
        before_buf = buf;
    }

    printf("%d", alphacount);
    return 0;
}
