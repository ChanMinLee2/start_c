// 1차 시도 실패 : B자리 수를 10진수로 변환하는 과정에서 carry를 생각하지 않았음... 어떡할까
// 2차 시도 성공 : 구조적으로 다 고침, 굳이 배열과 함수가 필요 하지 않음, 또한 포인터변수로만은 입력받기가 안되므로 배열변수로 바꿈. 
// 그리고 digitchangednum 구할때 pow조건변경. 
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int digit = 0;
    char num[100];
    int digit_changed_num = 0;
    int numlen= 0;
    
    scanf("%s %d", num, &digit);
    //printf("%s %d\n", num, digit);
    
    numlen = strlen(num);
    for (int i = numlen-1; i >= 0; i--) {
        if(num[i] >= '0' && num[i] <='9')
        {
            digit_changed_num += (num[i]-'0') * pow(digit, numlen-1-i);
            printf("%d good, num : %d\n", i, digit_changed_num);
            
        }
            
        else
        {
            digit_changed_num += ((num[i]-'A')+10) * pow(digit, numlen-1-i);
            printf("%d good, num : %d\n", i, digit_changed_num);
        }
            
    }
    
    printf("%d", digit_changed_num);
    
    return 0;
}
