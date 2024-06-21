#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s={1,2,3,4,5,6,6};
    for(int i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    s.insert(7);
    for(int i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    s.insert(s.begin(),7);
    for(int i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    multiset<int, greater<int>> st = {1,2,3,4,5,6,6};
    for(int i : st)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(6);
    for(int i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Is Empty: "<<s.empty()?"True":"False";
    cout<<endl;
    cout<<"Size: "<<s.size()<<endl;
    cout<<"Max Size: "<<s.max_size()<<endl;
    for (int num : s) {
        int count = s.count(num);
        cout<<num<<" occurs "<<count<<" time/s "<<endl;
    }
    cout<<"Size: "<<s.size()<<endl;
    s.clear();
    cout<<"Size: "<<s.size()<<endl;
}