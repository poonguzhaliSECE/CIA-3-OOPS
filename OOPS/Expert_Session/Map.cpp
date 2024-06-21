//MAP
// The functionality values stores key value pairs
// Key Features
// Chose unique key value pairs
// Keys are automatically sorted
// Allow traversals in sorted order of keys
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m={{1,"a"},{2,"b"},{3,"c"},{3,"c"},{1,"a"}};
    m[4]="d";
    for(const auto & pair : m)
    {
        cout<<pair.first<<" : "<<pair.second<<"\n";
    }
    return 0;
}