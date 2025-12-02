#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



int main()
{
    int ret;

    printf("orphan example\n");

    ret = fork();

    if(ret == 0)
    {
        printf("In child process\n");
        printf("child pid %d ppid %d\n",getpid(),getppid());
        sleep(2);
        printf("After wakeupchild pid %d ppid %d\n",getpid(),getppid());
    }
    else if(ret > 0){
        printf("In parent process\n");
        printf("parent pid %d ppid %d\n",getpid(),getppid());
    }
    return 0;
}