#include <iostream>

/*
f(0) f(1) f(2) f(3) f(4) f(5) f(6) f(7)
  0    1    1    2    3    5    8    13 
*/
//Just print nth fibo series number
int fibo(int a)
{
    if(a<=1)return a;

    int f1 = 0;
    int f2 = 1;
    int f = 0;
    for(int i = 2;i<=a;i++)
    {
        f = f1+f2;
        f1 = f2;
        f2 = f;
    }
    return f;
}

int main()
{
    static int b;
    std::cout<<"b: "<<b<<std::endl;
    int a;
    std::cin>>a;
    std::cout<<"FIb: "<<fibo(a)<<std::endl;
    return 0;
}