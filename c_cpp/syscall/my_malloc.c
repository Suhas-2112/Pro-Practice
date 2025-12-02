#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>


void * my_malloc(size_t size)
{
    void* ptr = mmap(NULL,size,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);

    if(ptr == MAP_FAILED)
    {
        perror("mmap");
        return NULL;
    }
    return ptr;
}

void my_free(void * addr, size_t size)
{
    munmap(addr,size);
}

int main()
{
    int* arr = (int*)my_malloc(2*sizeof(int));
    printf("%d %d\n",arr[0],arr[1]);
    arr[0] = 10;
    arr[1] = 20;

    printf("%d %d\n",arr[0],arr[1]);

    my_free(arr,2*sizeof(int));
}