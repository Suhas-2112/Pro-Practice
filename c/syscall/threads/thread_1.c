#include <pthread.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void* task_fun( void* pr)
{
    char* pa = pr;
    int i = 5;
    while(i--)
    {
        printf("%s --- %d\n",pa,i);
    }
    int* ret = (int*)malloc(sizeof(int));
    *ret = 90;
    pthread_exit((void*)(ret));
}

int main()
{
    void* exit_status = NULL;
    pthread_t pt;

    pthread_create(&pt,NULL,task_fun,"Hi to thread");

    pthread_join(pt,&exit_status);

    printf("THread exit status : %d\n",*(int*)exit_status);
    printf("Main Ended\n");
    free(exit_status);
    return 0;
}