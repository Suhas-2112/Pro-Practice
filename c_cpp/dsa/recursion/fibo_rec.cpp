#include <iostream>

/*
f(0) f(1) f(2) f(3) f(4) f(5) f(6) f(7)
  0    1    1    2    3    5    8    13 
*/

int fibo(int a)
{
    if(a<=1) return a;

    return fibo(a-1)+fibo(a-2);


}
int main()
{
    int a;
    std::cin>>a;
    std::cout<<"FIb: "<<fibo(a)<<std::endl;
    return 0;
}