#include <unistd.h>
#include <sys/syscall.h>


int main()
{
    char buf ;

    int ret = syscall(SYS_read,0,&buf,sizeof(buf));
    if(ret<0)
    {
        syscall(SYS_write,1,"Failed to read std input\n",30);
    }
    syscall(SYS_write,1,&buf,sizeof(buf));
    return 0;
}

//only reads and writes sigle digit