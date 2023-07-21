#include <stdio.h>

int main(void)
{
    printf("debug\n");
    char str_buffer[50]; // 버퍼
    FILE * fp1 = fopen("data.txt", "w+");  // 파일 오픈

    printf("debug\n");
    // 파일을 열 수 없었을 경우
    if(fp1 == NULL) 
    {
        printf("can not open file");
        return -1; // 비정상 종료 
    }
    printf("debug\n");
    // fputs로 쓰기 - \n을 문자열 뒤에 넣어줘야 읽을 때 구분이 가능
    fputs("test string number 1 \n", fp1);
    fputs("test string number 2 \n", fp1);

    rewind(fp1); // 파일 포인터 첫 위치로 돌리기 

    printf("debug\n");
    fgets(str_buffer, sizeof(str_buffer), fp1);
    printf("text file line 1 : %s \n", str_buffer);
    fgets(str_buffer, sizeof(str_buffer), fp1);
    printf("text file line 1 : %s \n", str_buffer);

    fclose(fp1);
    return 0;
}