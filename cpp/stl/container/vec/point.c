#include <stdio.h>

int main() {
    int a = 10;
    
    int *p = &a;

    int **q = &p;

    printf("%d\n",**q);

    return 0;
}
