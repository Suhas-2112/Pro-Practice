#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1;

    std::vector<int> v2(10);   //can store 10 elements
    std::vector<int> v3{1,2,3,4,5,10};  //initializer list
    std::vector<int> v4(5,10);   //store 5 elemets and all have value 10


    std::cout<< "First element "<<v3.front()<<std::endl;
    std::cout<< "last element "<<v3.back()<<std::endl;
    std::cout<< "Size of vector "<<v3.size()<<std::endl;
    std::cout<< "Max element "<<v3.max_size()<<std::endl;
    std::cout<< "Current capacity "<<v3.capacity()<<std::endl;

    v3.push_back(20);
    std::cout<< "after push back capacity "<<v3.capacity()<<std::endl;

    for(auto i:v3)
    {
        std::cout<<i<<std::endl;
    }
    int a = v2[100];
    //std::cout<<a<<std::endl;
    //std::cout<<v3.at(100)<<std::endl;
    std::cout<<v1.empty()<<std::endl;
    std::cout<<v2.empty()<<std::endl;
    
}