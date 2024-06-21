//MULTI MAP
//Syntax:
//multimap<datatype> multimap_name;
//Similar to map but it allows multiple key value pairs
//Allows duplicates
//Key Features 
// Store multiple keys value pairs based on same key
// Keys are automatically sorted allows traversal in sorted order of keys
#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,string> m={{1,"a"},{2,"b"},{3,"c"},{3,"c"},{1,"a"}};
    m.insert({5,"five"});
    for(const auto & pair : m)
    {
        cout<<pair.first<<" : "<<pair.second<<"\n";
    }
    return 0;
}