#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <signal.h>
#include <unistd.h>
sem_t s1;
void handler(int sig)
{
    printf("Interrupt Receieved - post semaphore\n");
    sem_post(&s1);
}

void* fun(void* p)
{
    int i;
    for(i = 0;i<3;i++)
    {
        sem_wait(&s1);
        printf("Receieced signal i - %d\n",i);
    }
    pthread_exit(NULL);
}

void* fun_2(void* p1)
{
    printf("Posting semaphore\n");
    sem_post(&s1);
    pthread_exit(NULL);
}


int main()
{
    pthread_t t1,t2;
    signal(SIGINT,handler);
    sem_init(&s1,0,0);
    printf("PID - %d\n",getpid());
    pthread_create(&t1,NULL,fun,NULL);
    pthread_create(&t2,NULL,fun_2,NULL);

    

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    return 0;
    
}