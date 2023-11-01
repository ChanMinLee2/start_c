// 1차 시도 실패 : 이중 반복문으로 출력했으나 쓰레기값도 같이 출력됨, 매번 받을 때 사이즈를 체크하고 각 행과 사이즈를 결합해서 생각해야함. 
// 즉 각 행에서 루프 컨트롤 변수가 입력받은 사이즈보다 커지면 그냥 루프 종료  
#include <stdio.h>

int main()
{
    char words[5][15];
    
    for (int i = 0; i < 5; i++) {
        scanf("%s", words[i]);
    }
    
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; i++) {
            printf("%c", words[j][i]);
        }
    }

    return 0;
}
