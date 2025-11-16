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

    vector<int>::iterator it;
    cout<<"Using iterator\n";
    for(it = v.begin();it != v.end();it++)
    {
        cout<<*it<<endl;
    }

    cout<<"Reverse iterator\n";
    vector<int>::reverse_iterator rit;
    for(rit = v.rbegin();rit != v.rend();rit++)
    {
        cout<<*rit<<endl;
        //*rit = *rit + 1;
    }
    
    cout<<"Using const itereator\n";
    vector<int>::const_iterator cit;
    for(cit = v.cbegin();cit!=v.cend();cit++)
    {
        cout<<*cit<<endl;
    }
    
    cout<<"Using EDIT const itereator\n";
    for(cit = v.cbegin();cit!=v.cend();cit++)
    {
        cout<<*cit<<endl;
        //*cit = *cit + 1; thows error
    }

    cout<<"Front "<<v.front()<<endl;
    cout<<"Last "<<v.back()<<endl;
    cout<<"Size"<<v.size()<<endl;
}