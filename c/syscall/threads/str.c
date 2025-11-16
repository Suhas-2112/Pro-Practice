#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *arr = (char*)malloc(20);
    //scanf("%s",arr);
    fgets(arr,12,stdin);
    printf("%s\n",arr);
}