#include <stdio.h>
#include <stdlib.h>

void other()
{
    printf(" ***********!hacker attack!***********\n");
    fflush(stdout);
    exit(0);
}

void input()
{
    char buffer[5];
    fflush(stdout);
    gets(buffer);
}

int main()
{
    printf("%p\n", &other);
    input();
    printf("Everybthing is ok.\n");
    fflush(stdout);
    return 0;
}
