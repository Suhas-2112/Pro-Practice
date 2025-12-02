#include <iostream>
#include <cstdio>



int size(int (*ptr)[5])
{
    std::cout<<"Size of ptr: "<<sizeof(ptr)<<std::endl;
    std::cout<<"Size of ptr: "<<sizeof(*ptr)<<std::endl;
    return 0;
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    int (*ptr)[5] = &arr;
    std::cout<<"Output of sizeof(arr) "<<sizeof(arr)<<std::endl;
    std::cout<<"Output of sizeof(&arr) "<<sizeof(&arr)<<std::endl;
    size(ptr);
}


