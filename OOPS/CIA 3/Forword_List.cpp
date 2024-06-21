#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;
int main()
{
    forward_list<int> fl={2,3,3,4,5,6,7};
    for(int i:fl)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Front Element: "<<fl.front()<<endl;
    fl.resize(4);
    for(int i:fl)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Max Size: "<<fl.max_size()<<endl;
    fl.unique();
    for(int i:fl)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    fl.reverse();
    for(int i:fl)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
