#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20] = "1234567890";
    char str2[20];
    char str3[5];

    // strcpy 
    strcpy(str2, str1);
    puts(str2);

    // strncpy (크기지정 복사)
    strncpy(str3, str1, sizeof(str3));
    puts(str3); // 결과가 예상과 다르게 됨. 
    //그 이유는 널문자의 복사가 진행되지 않았기 때문

    // 그래서 다음과 같이 하나 적은 크기로 복사 후 널 문자 삽입.
    strncpy(str3, str1, sizeof(str3)-1);
    str3[sizeof(str3)-1] = 0;
    puts(str3);
}