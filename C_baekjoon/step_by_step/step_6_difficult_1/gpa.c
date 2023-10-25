// 첫 시도 구조만 잡아놓음
// switch 구조로 하려고 했으나 실패 - c에서는 문자열 스위치가 안됨. 

#include <stdio.h>
#include <string.h>

int main()
{
    char* object; 
    double hour = 0.0;
    char* grade; 
    double sum_of_gpa = 0.0; // 학점 * 평점 
    
    double mean_gpa = 0; // sumofgpa / sumofhour
    double sum_of_hour = 0;
    
    for(int i = 0; i < 20; i++)
    {
        scanf("%s %lf %s", object, &hour, grade);
        sum_of_hour += hour;
        switch(grade)
        {
            case "A+":
            sum_of_gpa = hour * 4.5;
            break;
            
            case "A0":
            sum_of_gpa = hour * 4.0;
            break;
            
            case "B+":
            sum_of_gpa = hour * 3.5;
            break;
            
            case "B0":
            sum_of_gpa = hour * 3.0;
            break;
            
            case "C+":
            sum_of_gpa = hour * 2.5;
            break;
            
            case "C0":
            sum_of_gpa = hour * 2.0;
            break;
            
            case "D+":
            sum_of_gpa = hour * 1.5;
            break;
            
            case "D0":
            sum_of_gpa = hour * 1.0;
            break;
            
            case "F":
            sum_of_gpa = hour * 0.0;
            break;
            
            case "P":
            sum_of_hour -= hour;
            break;
        }
        
    }
    
    printf("%f", sum_of_gpa / sum_of_hour);
}
