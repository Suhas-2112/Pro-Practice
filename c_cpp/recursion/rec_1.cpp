#include "head.h"



int fact(int n)
{
    return n*fact(n-1);
}
int main()
{
    int a = 4;

    std::cout<<fact(a)<<std::endl;
    return 0;
}