#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,char> mp;
    mp.insert(make_pair(1,'a'));
    mp.insert(make_pair(2,'b'));
    mp.insert(make_pair(3,'c'));
    mp.insert(make_pair(4,'d'));
    mp.insert(make_pair(2,'e'));
    mp.insert(make_pair(6,'g'));
    for(const auto & pair:mp)
    {
        cout<<pair.first<<" : "<<pair.second<<endl;
    }
    cout<<"Size: "<<mp.size()<<endl;
    cout<<"Max Size: "<<mp.max_size()<<endl;
    cout<<"Is Empty: "<<mp.empty()?"True":"False";
    cout<<endl;
    mp.erase(2);
    for(const auto &pair:mp)
    {
        cout<<pair.first<<" : "<<pair.second<<endl;
    }
    mp.clear();
    cout<<"Size: "<<mp.size()<<endl;
}