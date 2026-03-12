#include <stdio.h>

int main()
{
    int arr[][2] = {{1,2},{3,4},{5,6}};

    int (*ptr)[][] = &arr;

    printf("%d\n",ptr[1][1]);


    return 0;


}