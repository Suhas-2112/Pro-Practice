#include<iostream>


int* new_e(void)
{
    int *val = new int(100);
    return val;
}

int main()
{
    int a = 10;
    int *ptr = new_e();
    std::cout<<*ptr;
    delete ptr;
}
