#include <iostream>


//this is allowed in gnu C++ compiler but not in clang
void print(auto value)
{
    std::cout<<value<<std::endl;
}
int main()
{
    int a = 60;
    std::string s = "kiriket lk";
    float f = 5.6;
    print(a);
    print(s);
    print(f);
    return 0;
}