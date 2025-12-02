#include <iostream>
#include <array>

using namespace std;
void print(array<int,5>a)
{
    cout<<"Size "<<a.max_size();
    for(auto i :a)
    {
        cout<<i<<" ";
    }
    a[1] = 69;
    cout<<endl;
}
int main()
{
    array<int,5>arr;

    arr.fill(10);
    arr = {1,2,3,4};

    print(arr);
    for(auto i :arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

