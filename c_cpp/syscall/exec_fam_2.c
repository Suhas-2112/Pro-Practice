#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>


int main()
{
    int ret;
    printf("Executing C binary that will print argv[0] binary\n");
    ret = execl("/home/s21/Desktop/Pro/c/syscall/arg","hello","2nd argumnet",NULL);
    printf("after\n");
    if(ret<0)
    {
        perror("execl");
        exit(1);
    }
    return 0;
}