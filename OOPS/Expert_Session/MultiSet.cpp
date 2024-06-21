//MULTISET
// It is similar to Set
// Allow duplicate elements
// Key Features
//     shows multiple instance of elements 
//      Automatically sorts the elements
//      No random access
#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s={9,5,6,4,7,2,8,7,2};
    for(int num:s)
    {
        cout<<num<<" ";
    }
    s.insert(10);
    cout<<endl;
    for(int n:s)
    {
        cout<<n<<" ";
    }
    return 0;
}