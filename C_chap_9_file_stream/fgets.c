#include <stdio.h>

int main(void)
{
    char arr[8];

    for (int i = 0; i < 3; i++)
    {
        fgets(arr, sizeof(arr), stdin); 
        // 1. 버퍼의 크기만큼 받아들임??
        // 2. 공백도 받아들임
        // 3. 개행문자도 문자열로 받아들임.
        printf("%d : %s \n", i+1, arr);
    }
    
    return 0;
}