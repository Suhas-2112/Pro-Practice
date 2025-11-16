#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int ret = fork();

    printf("Hello, %d\n",ret);
    return 0;
}