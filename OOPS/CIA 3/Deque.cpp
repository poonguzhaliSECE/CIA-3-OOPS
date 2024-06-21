#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.push_front(0);
    d.pop_back();
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.pop_front();
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.insert(d.begin()+2,0);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<d.size()<<endl;
    cout<<"Max Size: "<<d.max_size()<<endl;
    cout<<"Is Empty: "<<d.empty()?"True":"False";
    cout<<endl;
    d.resize(3);
    cout<<"Size: "<<d.size()<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Front element: "<<d.front()<<endl;
    cout<<"Back Elememnt: "<<d.back()<<endl;
    cout<<"Specific Position (1): "<<d.at(1)<<endl;
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.swap(dq);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.assign(d.size(),4);
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.erase(d.begin());
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    d.clear();
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}