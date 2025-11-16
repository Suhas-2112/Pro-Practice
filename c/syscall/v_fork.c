#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Start pid = %d ppid = %d\n",getpid(),getppid());

    int ret = fork();

    printf("End pid = %d, ppid = %d, ret = %d\n",getpid(),getppid(),ret);
    perror("gg");
    return 0;
}