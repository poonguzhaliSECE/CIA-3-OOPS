#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    cout<<"Front Element: "<<q.front()<<endl;
    cout<<"Back Element: "<<q.back()<<endl;
    q.pop();
    cout<<"Front Element: "<<q.front()<<endl;
    q.push(10);
    cout<<"Back Element: "<<q.back()<<endl;
    cout<<"Size: "<<q.size()<<endl;
    cout<<"Is Empty: "<<q.empty()?"True":"False";
    cout<<endl;
    return 0;
}