#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,char> m;//descending order also possible
    m[1]='a';
    m[4]='d';
    m[3]='c';
    m[2]='b';
    for(const auto & pair : m)
    {
        cout<<pair.first<<" : "<<pair.second<<endl;
    }
    cout<<endl;
    m.insert(make_pair(5,'e'));
    m.insert(make_pair(6,'f'));
    m.insert(make_pair(7,'g'));
    m.insert(make_pair(4,'e'));//value remains d
    for(const auto & pair : m)
    {
        cout<<pair.first<<" : "<<pair.second<<endl;
    }
    cout<<endl;
    m.erase(m.find(6));//can also give range like this to this
    //eg:2 to 5 delete 2,3,4 but not 5
    for(const auto & pair : m)
    {
        cout<<pair.first<<" : "<<pair.second<<endl;
    }
    cout<<endl;
    cout<<"Size: "<<m.size()<<endl;
    cout<<"Max Size: "<<m.max_size()<<endl;
    cout<<"Is Empty: "<<m.empty()?"True":"False";
    cout<<endl;
    auto c=m.find(8);//used in case of iterator
    if(c!=m.end())
    {
        cout<<true;
    }
    else{
        cout<<false;
    }
    cout<<endl;
    cout<<"Key with value (4): "<<m.at(4)<<endl;
    return 0;
}