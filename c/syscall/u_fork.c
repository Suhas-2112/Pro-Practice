#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int ret = fork();

    if(ret ==0)
    {
        printf("I am The Child ret = %d\n",ret);
       execlp("ls", "ls", NULL);
    }
}