#include <stdio.h>
#define MAX 100
// 다이나믹 프로그래밍 활용하기
typedef struct things things;
struct things
{
    int weight;
    int value;
};

int main(void)
{
    int number = 0, keep = 0;
    scanf("%d, %d", &number, &keep);
    
    int temp_weight = 0, temp_value = 0;
    things array[MAX];
    int array[MAX][MAX];

    for(int i = 0; i < number; i++)
    {
        scanf("%d %d", &temp_weight, &temp_value);
        //make_things(&temp_weight, &temp_value)
        array[i].weight = temp_weight;
        array[i].value = temp_value;
    }

    
    

    
    
}
