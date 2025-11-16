#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>v = {1,2,3,4,5,6};
    
    vector<int>::iterator fil;

    fil = std::find(v.begin(),v.end(),4);
    if(fil !=v.end())
    {
        cout<<"value found "<<*fil<<endl;
        cout<<"value found @index "<<fil - v.begin()<<endl;
        int dis = distance(v.begin(),fil);
        cout<<"value found @index using distance "<<dis<<endl;

    }
    else
    {
        cout<<"Value is not present";
    }
}