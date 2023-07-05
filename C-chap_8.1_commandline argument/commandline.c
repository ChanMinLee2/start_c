#include <stdio.h>

// commandline argument는 메인함수에서 선언하며, 컴파일과 동시에 주어지는 문자열을 변수에 저장한다. 
int main(int argc, int *argv[])
{
    printf(" 저장된 문자열의 개수 : %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("%d번째로 저장된 문자열 : %s\n", i, argv+i);
    }
    
    return 0;
}