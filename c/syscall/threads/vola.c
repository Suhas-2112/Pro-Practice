#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


volatile int flag = 0;

void handler_(int sig)
{
    flag = 1;
}
int main()
{
    signal(SIGTSTP,handler_);

    printf("Waiting for interrupt... %d\n",getpid());
    while(!flag)
    {

    }
    printf("Interrupt received, flag = %d\n", flag);
    return 0;


}