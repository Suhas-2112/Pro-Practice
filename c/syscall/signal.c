#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>


void handler_for_int(int signal_number)
{
    printf("You cannot interrupt\n");
}
void handler_for_quit(int signal_number)
{
    printf("You cannot quit\n");
}
void handler_for_stop(int signal_number)
{
    printf("You cannot stop\n");
}
void handler_for_term(int signal_number)
{
    printf("You can terminate\n");
    exit(0);
}
int main()
{
    printf("Start, pid - %d\n",getpid());
    signal(SIGINT,handler_for_int);
    signal(SIGQUIT,handler_for_quit);
    signal(SIGTERM,handler_for_term);
    signal(SIGTSTP,handler_for_stop);
    while(1)
    {
        pause();
    }
    
}