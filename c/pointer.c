#include <stdio.h>

int main()
{
    int i = 20;
    int* j  = NULL;
    *j = 90;
    printf("%d\n",*j);
}