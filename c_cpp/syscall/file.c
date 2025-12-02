#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>
#include <fcntl.h>

#define MAX 128

int main()
{
    int fd,bytes;

    fd = open("gg.txt",O_RDONLY);
    printf("Ret of open = %d\n",fd);
    if(fd<0)
    {
        perror("In Open");
        exit(3);
    }

    char buf[MAX];
    bytes = read(fd,buf,MAX);
    if(bytes<0)
    {
        perror("In Read");
        exit(2);
    }
    buf[MAX-1] = '\0';
    printf("nbytes = %d\nbuf = %s",bytes,buf);
    write(1,buf,bytes);
    close(fd);
    return 0;
}
