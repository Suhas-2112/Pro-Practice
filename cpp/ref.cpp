#include<iostream>


int main()
{
    int* arr = (int*)malloc(sizeof(int)*4);
    for(int i = 0;i<4;i++)
    {
        arr[i] = i+1;
    }
    int* &ref = arr;
    for(int i = 0;i<4;i++)
    {
        std::cout<<ref[i]<<" ";
    }
    std::cout<<std::endl;
    
}
