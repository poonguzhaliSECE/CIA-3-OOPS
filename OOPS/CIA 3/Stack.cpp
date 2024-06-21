#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(3);
    s.push(5);
    s.push(7);
    cout<<"Top Element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element After Pop: "<<s.top()<<endl;
    cout<<"Is Empty: "<<s.empty()?"True":"False";
    cout<<endl;
    cout<<"Size: "<<s.size()<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    cout<<"Size: "<<endl;
    //swap() can be done
}