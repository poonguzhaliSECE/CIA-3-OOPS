//STACK
//Syntax:
//stack<dtatype> stack_name;
//LILO Order - Last In Last Out
//Provide Push, pop and top operations
//No iteration are random access (Important)
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}