#include <stdio.h>
#include <string.h>

void swap(char ** index1, char ** index2)
{
    char *temp = *index1;
    *index1 = *index2;
    *index2 = temp;
}

int main(int argc, char *argv[])
{
    int index = 0;
    while(index < argc)
    {
        for(int i = index; i < argc; i++)
        {
            if(strcmp(&argv[i],&argv[i+1]) > 0)
                swap(&argv[i],&argv[i+1]);
        }
        index++;
    }

    


