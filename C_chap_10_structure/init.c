#include <stdio.h>

struct person
{
    int age;
    char name[20];
    char gender[10];
};

int main(void)
{
    struct person person1 = {
        23, "홍길동", "남자"
    };

    printf("age : %d\n", person1.age );
    printf("name : %s\n", person1.name );
    printf("gender : %s\n", person1.gender );

    return 0;
}