#include <stdio.h>

void clear_input_buffer(void)
{
    while (getchar() != '\n');
    return;
}

int main(void) // 주민번호 앞자리만 받고 이 후 입력버퍼를 지우는 프로세스 
{
    char front_of_perID[6];
    char name[10]; 

    fputs("주민번호 앞자리를 입력하세요 : ", stdout);
    fgets(front_of_perID, sizeof(front_of_perID), stdin );
    // 이렇게 입력받을 때, 앞의 6자리를 제외하고 추가 내용이 입력 버퍼에 있을 때 입력버퍼를 지운다.
    clear_input_buffer();

    fputs("이름을 입력하세요 : ", stdout);
    fgets(name, sizeof(name), stdin);

    return 0;
}