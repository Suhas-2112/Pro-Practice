#include <stdio.h>

void count(void)
{
    int a = 0;
    a++;
    printf("a: %d\n",a);
}


void count_stat(void)
{
    static int b  = 0;
    b++;
    printf("b: %d\n");
}
int main()
{
    count();
    count();
    count_stat();
}