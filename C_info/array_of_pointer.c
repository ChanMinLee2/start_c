#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    argv++;
    argc--;

    printf("%s\n", argv[0]);
    printf("%d", strcmp(argv[0],"-n"));

    return 0;
}