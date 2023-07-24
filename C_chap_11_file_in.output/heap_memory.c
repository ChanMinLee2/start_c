#include <stdio.h>

char * read_name(void)
{
    char * name = malloc(sizeof(char*)); //heap 메모리 할당 (동적)
    printf("이름을 입력하세요 : ");
    scanf("%s", name);
    return name; // 동적 메모리 할당한 공간(변수) 반환 (사리지지 않음)
}

int main(void)
{
    char * name1, name2;
    name1 = read_name();
    name2 = read_name();

    printf("name 1 : %s, name 2 : %s \n",name1 , name2);

    free(name1);
    free(name2);

    return 0;
}