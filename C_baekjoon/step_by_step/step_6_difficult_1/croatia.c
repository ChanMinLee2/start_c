// 1차 시도 실패 - 4퍼 실패, 예제는 그대로 출력됨, 뭔가 조건상의 문제가 있는것인듯 코드 읽어봐야함. 

// 2차 시도 실패 - 80퍼 시간초과 , 일부 알파벳 조건 이상했음(d= 없는데 --해버림, dz== 오류)
// 하지만 수정후에도 실패함. 시간초과되는 이유 찾아볼 것. 

// 3차 시도 성공(구글링) - 이유 탐색 , getchar로 풀면 시간초과인듯하여 문자열 채로 입력받아 index로 조절하는 방식 채택. 
// getchar 평균 실행시간 0.35초, scanf 실행시간 0.92초. 
// 아래 문제에서 최대 문자열 길이인 100개 문자의 입력이 들어올 경우 getchar 반복으로만 이미 시간제한 1초를 넘기는 35초가 되버림. 

// 결론 : getchar를 너무 많이 반복하지 말고 scanf로 할 수 있으면 그거쓰자. 

#include <stdio.h>
#include <string.h>

int main()
{
    int alphacount = 0;
    char input[101];
    char buf; 
    char before_buf;
    
    scanf("%s", input);
    
    for(int i = 0; i < strlen(input); i++)
    {
        alphacount++;
        
        if(input[i] == '=')
        {
            if(input[i-2] == 'd' && input[i-1] == 'z')
            {
                alphacount -= 2;
                continue;
            }
            
            else if(input[i-1] == 's' || input[i-1] == 'z' || input[i-1] =='c')
            {
                alphacount--;
                continue;
            }
        }
        
        else if(input[i] == '-')
        {
            if(input[i-1] == 'd' || input[i-1] == 'c')
            {
                alphacount--;
                continue;
            }
        }
        
        else if(input[i] == 'j')
        {
            if(input[i-1] == 'n' || input[i-1] == 'l')
            {
                alphacount--;
                continue;
            }
        }
    }

    printf("%d", alphacount);
    return 0;
}