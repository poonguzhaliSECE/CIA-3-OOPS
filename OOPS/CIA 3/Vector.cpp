#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(8);
    v.push_back(5);
    for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Element at 4: "<<v.at(4)<<endl;
    cout<<"Front Element: "<<v.front()<<endl;
    cout<<"Back Element: "<<v.back()<<endl;
    cout<<"Address Of First element: "<<v.data()<<endl;
    cout<<"Size: "<<v.size()<<endl;
    v.push_back(6);
    cout<<"Size: "<<v.size()<<endl;
    for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.push_back(7);
    for(int i : v)
    {
        cout<<i<<" ";
    }    
    cout<<endl;
    v.pop_back();
    for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v.insert(v.begin(),0);
    for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // v.erase(v.end());
    // for(int i : v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    vector<int> vt;
    vt.push_back(1);
    vt.push_back(2);
    vt.push_back(3);
    vt.push_back(4);
    vt.push_back(5);
    v.swap(vt);
    for(int i : vt)
    {
        cout<<i<<" ";
    }
    cout<<endl;
        for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //assign(5,10)->assign(times,value)
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Max size: "<<v.max_size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Is Empty: "<<v.empty()?"True":"False";
    cout<<endl;
    v.resize(4);
    cout<<"Size: "<<v.size()<<endl;
        for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    reverse(v.rbegin(),v.rend());
    for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vt.clear();
    for(int i : vt)
    {
        cout<<i<<" ";
    }//output:nil
    cout<<endl;
    vector<int> vv={0,1,2,3,5,6};
    for(int i:vv)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vv.erase(vv.begin());
    for(int i:vv)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}