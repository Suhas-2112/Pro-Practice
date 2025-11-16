#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


int main()
{
    int ret,status;

    printf("orphan example\n");

    ret = fork();

    if(ret == 0)
    {
        printf("In child process\n");
        printf("child pid %d ppid %d\n",getpid(),getppid());
        sleep(2);
        printf("After wakeupchild pid %d ppid %d\n",getpid(),getppid());
        exit(100);
    }
    else if(ret > 0){
        printf("In parent process\n");
        printf("parent pid %d ppid %d\n",getpid(),getppid());
        waitpid(ret,&status,0);
        printf("Parent error code %d\n",__WEXITSTATUS(status));
    }
    return 0;
}