#include <stdio.h>


int main()
{
    int a = 7;

    int count = 0;

    printf("%d\n",a>>1);
    printf("%d\n",a<<1);
    printf("%d\n",a);
    while(a!=0)
    {
        a = a&(a-1);
        count++;
        
    }
    printf("Set bits %d\n",count);
}

/*
8 4 2 1
0 1 0 0

*/