#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//hello
int main()
{
    char *st = (char*)malloc(sizeof(char)*6);
    strcpy(st,"hello");

    printf("%d\n",strlen(st));
    printf("%s\n",st);
    free(st);
    return 0;
}