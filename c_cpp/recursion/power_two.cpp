#include<iostream>

int power_two(int a)
{
    if(a % 2 ==0 && a>1)
    {
        if(a == 2 )return 1;
        return power_two(a/2);
    }
    else
    {
        return 0;
    }
    
}

int main()
{
    int a ;
    std::cin>>a;
    int res = power_two(a);
    if(res)
    {
        std::cout<<"True"<<std::endl;
    }
    else
    {
        std::cout<<"Nope"<<std::endl;
    }
}