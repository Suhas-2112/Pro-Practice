#include <stdio.h>
#include <unistd.h>
//child and parent run in parrel and dont have any priority either 
int main()
{
    int ret,max = 100;


    ret = fork();

    if(ret == 0)
    {
        /*
        for(int i = 0;i<max;i++)
        {
            printf("Child ---pid = %d\n",getpid());
        }
            */
           while(max--)
           {
            printf("Child ---pid = %d\n",getpid());
           }
    }
    else if(ret>0)
    {
        /*
        for(int i = 0;i<max;i++)
        {
            printf("Parent ---pid = %d\n",getpid());
        }
            */
           while(max--)
           {
            printf("Parent ---pid = %d\n",getpid());
           }
    }
    return 0;
}