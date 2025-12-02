#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
    return a+b;
}

int main()
{
    int (*fptr)(int,int) = add;
    printf("%d\n",fptr(10,20));
}