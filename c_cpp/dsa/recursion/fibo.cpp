#include <iostream>

void fibo(int a)
{
    //std::cout<<"In fibo\n";
    if(a<2)
    {
        std::cout<<"Not validddd\n";
        exit(0);
    }
    //std::cout<<"after fibo\n";
    int f1 = 0;
    int f2 = 1;

    for(int i =1;i<=a;i++)
    {
        
        if(i>2)
        {
            int f = f1+f2;
            std::cout<<f<<" ";
            f1 = f2;
            f2 = f;
        }
        else if(i ==1)
        {
            std::cout<<f1<<" ";
        }
        else
        {
            std::cout<<f2<<" ";
        }
        
    }
    std::cout<<std::endl;
    
}
int main()
{
    int a;
    std::cin>>a;
    fibo(a);
    return 0;
}