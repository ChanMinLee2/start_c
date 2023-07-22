#include <stdio.h>

int main(void)
{
    FILE * fp = fopen("data.txt","rt");
    FILE * fp2 = fopen("copy.txt","wt");

    if(fp == NULL || fp2 == NULL)
    {
        printf("file is not opened\n");
        return -1;
    }

    int ch; // fgetc로 받아올 문자버퍼 선언
    while ((ch = fgetc(fp) ) != EOF) // fgetc는 입력 실패시 EOF반환함. 
    {
        fputc(ch, fp2);
    }
    if (feof(fp) != 0) //파일의 끝에 도달했다면 0이 아닌 값 출력
    {
        printf("good copy\n");
    }
    else 
    {
        printf("fail copy\n");
    }
    
    return 0;
}