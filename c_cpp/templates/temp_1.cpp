#include <iostream>
#include <string>

template <typename T>
//template <class T>

void print(T value)
{
    std::cout<<value<<std::endl;
}

int main()
{
    int a = 10;
    std::string s = "kiriket";
    float f = 5.5;
    //print<int>(a);
    
    print(a);
    print(s);
    print(f);
    
    return 0;
}