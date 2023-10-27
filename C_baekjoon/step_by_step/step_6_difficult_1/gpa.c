
// 첫 시도 구조만 잡아놓음
// switch 구조로 하려고 했으나 실패 - c에서는 문자열 스위치가 안됨. 

// 두번째 시도 성공, switch구조에서 if else 제어흐름으로 변경, 성공

#include <stdio.h>
#include <string.h>

int main()
{
    char object[51]; 
    double hour = 0.0;
    char grade[51]; 

    double sum_of_gpa = 0.0; // 학점 * 평점 
    double sum_of_hour = 0.0; // 학점
    double mean_gpa = 0.0; // sumofgpa / sumofhour
    
    for(int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s",object, &hour, grade);
        //printf("과목명 : %s, 학점 : %lf, 평점 : %s\n",object, hour, grade );
        
        sum_of_hour += hour;
        if (grade[0] == 'A')
        {
            if (grade[1] == '+')
            {
                sum_of_gpa += 4.5 * hour;
            }
            
            else
            {
                sum_of_gpa += 4.0 * hour;
            }
        }

        else if (grade[0] == 'B')
        {
            if (grade[1] == '+')
            {
                sum_of_gpa += 3.5 * hour;
            }
            
            else
            {
                sum_of_gpa += 3.0 * hour;
            }
        }

        else if (grade[0] == 'C')
        {
            if (grade[1] == '+')
            {
                sum_of_gpa += 2.5 * hour;
            }
            
            else
            {
                sum_of_gpa += 2.0 * hour;
            }
        }

        else if (grade[0] == 'D')
        {
            if (grade[1] == '+')
            {
                sum_of_gpa += 1.5 * hour;
            }
            
            else
            {
                sum_of_gpa += 1.0 * hour;
            }
        }

        else if(grade[0] == 'F')
        {
            sum_of_gpa += 0 * hour;
        }
        
        else
        {
            sum_of_hour -= hour;
        }
        //printf("%d 번째 평균평점 : %lf\n", i ,sum_of_gpa / sum_of_hour);
    }
    
    printf("%lf", sum_of_gpa / sum_of_hour);
}

