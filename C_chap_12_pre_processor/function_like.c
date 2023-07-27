#define SQ(x) ((x)*(x)) // x*x로 사용시 오류가 생김. x = 3+2일때 3+2*3+2가 되버림

int main(void)
{
    printf("SQUARE 8 : %d\n", SQ(8));

    return 0;
}