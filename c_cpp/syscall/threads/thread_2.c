#include <pthread.h>
#include <stdio.h>


void* fun_1(void *p)
{
    int i = 10;
    while(i--)
    {
        printf("Fun_1 --- %d\n",i);
    }
    
}