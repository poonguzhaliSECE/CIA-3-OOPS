#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s;
    int n;
    int a=7;
    while(a--)
    {
        cin>>n;
        s.insert(n);
    }
    set<int> st;
    for(int num:s)
    {
        st.insert(num);
    }
    for(int n:st)
    {
        cout<<n<<" comes "<<s.count(n)<<" times "<<endl;
    }
    return 0;
}