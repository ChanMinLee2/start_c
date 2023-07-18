#include <stdio.h>

typedef struct dbshort  // 상하위 2바이트 표현을 위한 구조체
{
    unsigned short upper;
    unsigned short lower;
}DBshort;

typedef struct rdbuf  // 상하위 1바이트 표현을 위한 구조체 - 
// 유니온(공용체) 내부 변수들 중 가장 큰 크기의 자료형으로 공용체의 크기가 정해짐.
{
    int iBuf;        // 4바이트
    char bBuf[4];   // 1바이트 x4
    DBshort sBuf;   // 2바이트 x2
}RDBuf;

int main(void)
{
    RDBuf buf;
    int num;
    printf("정수를 입력하세요 : \n");
    scanf("%d", &num);

    buf.iBuf = num;

    printf("정수 : %d\n", buf.iBuf);
    printf("상위 2바이트 : %u , 하위 2바이트 : %u \n", (buf.sBuf).upper, (buf.sBuf).lower);
    printf("상위 1바이트 : %c , 하위 1바이트 : %c", buf.bBuf[0], buf.bBuf[3]);

    return 0;
}

