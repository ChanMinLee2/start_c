// 1차 시도 실패 - 4퍼 실패, 예제는 그대로 출력됨, 뭔가 조건상의 문제가 있는것인듯 코드 읽어봐야함. 

// 2차 시도 실패 - 80퍼 시간초과 , 일부 알파벳 조건 이상했음(d= 없는데 --해버림, dz== 오류)
// 하지만 수정후에도 실패함. 시간초과되는 이유 찾아볼 것. 

#include <stdio.h>

int main()
{
    int alphacount = 0;
    char buf; 
    char before_buf;
    
    while((buf = getchar()) != '\n')
    {
        alphacount++;
        
        printf("%d : %c\n", alphacount,buf);
        
        if(before_buf == 'c' || before_buf == 'd')
        {
            if(buf == '-')
            {
                alphacount--;
                before_buf = buf;
                continue;
            }
            
            else if(before_buf == 'c' && buf == '=')
            {
                alphacount--;
                before_buf = buf;
                continue;
            }
            
            else if(before_buf == 'd' && buf == 'z')
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
