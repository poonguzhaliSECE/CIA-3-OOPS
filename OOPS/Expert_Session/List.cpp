//LIST
//
//
//
//
//
//

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l={1,2,3,4,5};
    for(int n:l)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    l.push_back(6);
    for(int n:l)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    l.push_front(0);
    for(int n:l)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}