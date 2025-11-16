#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


int main()
{
    int ret;
    printf("Executing waitpid binary\n");
    ret = execl("/home/s21/Desktop/Pro/c/syscall/waitpid","ls",NULL);
    if(ret<0)
    {
        perror("execl");
        exit(1);
    }
    return 0;
}