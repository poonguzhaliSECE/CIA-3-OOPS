// Key Features 
//     Store Unique elements only
//     Automatically sorted
//     Time complexity is O(log n)
//     No Random access
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s={9,5,6,4,7,2,8};
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