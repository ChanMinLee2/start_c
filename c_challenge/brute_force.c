#include<stdio.h>
int main(void) 
{
    //brute force (전체 탐색 알고리즘) 의 간단한 예시. 
	for(int i=1; i<=5 ;i++)
	{
		for(int z=1; z<=7; z++)
		{
			for(int x=1; x<=8; x++)
			{
				if(i*700+z*500+x*400==3500)
				{
					printf("cream bread : %d, ice cream : %d, coke : %d\n", z,i,x);
				}
			}
		}
	}
	return 0;
}