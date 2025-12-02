#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int n;
    for(int i = 0;i<5;i++)
    {
        cin>>n;
        v.push_back(n);
    }

    for(auto i:v)
    {
        cout<<i<<endl;
    }

    vector<int>::iterator itr;
    itr = v.begin();

    // for(int i = 0;i<3;i++)
    // {
    //     itr++;
    // }
    advance(itr,3);
    v.insert(itr,69);
    for(auto i:v)
    {
        cout<<i<<endl;
    }

}