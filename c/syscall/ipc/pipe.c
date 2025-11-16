#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <error.h>
#include <stdio.h>

int main()
{
    int fds[2];
    char str[] = "I am noob";
    char str1[] = "gg ";
    char buf[200];
    int ret = pipe(fds);
    if(ret<0)
    {
        exit(1);
        //perror("Pipe");
    }

    int write_b = write(fds[1],str,strlen(str));
    printf("write bypes - %d\n",write_b);
    write(fds[1],str1,strlen(str1));
    read(fds[0],buf,128);

    write(1,buf,strlen(buf));
    close(fds[0]);
    close(fds[1]);

}