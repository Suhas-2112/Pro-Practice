#include <stdio.h>

#define KILL (void*)900989
int main()
{
    void* a = NULL;
    void* b = KILL;
    //printf("%d\n",*(int*)a);
    printf("%d\n",*(int*)b);
}