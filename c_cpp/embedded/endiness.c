#include <stdio.h>



int main()
{
    union {
    int a;
    char s[sizeof(int)];
}u;
    /*
    int a = 1;
    char *ptr = (char *)&a;

    if(*ptr ==1)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endiness\n");
    }
    */
    //union gg u;
    u.a = 1;
    if(u.s[0] ==1)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endiness\n");
    }
}