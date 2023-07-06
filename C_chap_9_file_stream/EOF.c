#include <stdio.h>

int main(void)
{
    int word;

    while (1)
    {
        word = fgetchar();
        if (word == EOF) // 컨트롤 + z 하면 EOF가 입력되며 루프 탈출
        {
            break;
        }
        fputchar(word);
    }
    

}