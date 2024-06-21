#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_front(0);
    l.push_back(3);
    l.push_front(4);
    l.push_back(5);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.pop_back();
    l.pop_front();
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.insert(l.begin(),7);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Is Empty: "<<l.empty()?"True":"False";
    cout<<endl;
    cout<<"Size: "<<l.size()<<endl;
    cout<<"Max_Size: "<<l.max_size()<<endl;
    l.resize(5);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    list<int> lt;
    lt.assign(4,7);
    for(int i:lt)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.remove(3);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(l.begin(),l.end());
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.sort();
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
    l.swap(lt);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i:lt)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.merge(lt);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.sort();
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    l.unique();
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}