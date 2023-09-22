#include <stdio.h>
#include <string.h>

int main(void)
{
    int alphacount[26];
    for(int s = 0; s < 26; s++)
    {
        alphacount[s] = -1;
    }
    
    char temp[100];
    scanf("%s", temp);
    
    for(int i = 0; i < strlen(temp)-1; i++)
    {
        // -61('a') 빼기 - index로 이용하기 위해서는 a를 빼줘야함
        char cbuf = temp[i];
        int ibuf = (int)(cbuf - 'a');
        if(alphacount[ibuf] == -1)
        {
            alphacount[ibuf] = i;
        }
        else
        {
            continue;
        }
        
    }
    
    for(int j = 0; j < 26; j++)
    {
        printf("%d ",alphacount[j]);
    }
}