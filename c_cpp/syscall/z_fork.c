#include <stdio.h>
#include <unistd.h>

//Zombie process
int main()
{
    int ret = fork();

    if(ret ==0)
    {
        printf("Child\n");
        sleep(5);
    }
    else{
        printf("Parent\n");
    }
    return 0;
}