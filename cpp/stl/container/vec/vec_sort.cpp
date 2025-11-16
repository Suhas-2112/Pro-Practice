#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    std::vector<int>v = {1,3,5,4,2};
    std::vector<int>::iterator itr;
    for(itr = v.begin();itr !=v.end();itr++)
    {
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;

    std::sort(v.begin(),v.end(),[](int a,int b)
                                    {
                                        return a<b;
                                    });
    for(itr = v.begin();itr !=v.end();itr++)
    {
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;
    


}