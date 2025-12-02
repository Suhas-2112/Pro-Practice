#include <iostream>

int binary(int* arr,int find,int size);
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int find = 10;
    int size = sizeof(arr)/sizeof(arr[0]);
    std::cout<<size<<std::endl;
    if(find == binary(arr,find,size))
    {
        std::cout<<"Number found"<<std::endl;
    }
    else{
        std::cout<<"Number Not found"<<std::endl;
    }
}
int binary(int* arr,int find,int size)
{
    int start = 0;
    int end = size -1;

    while(start<=end)
    {
        int mid = start+(high-low)/2;
    }
}