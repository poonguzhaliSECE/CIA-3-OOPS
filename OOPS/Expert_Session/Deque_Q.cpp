// Implement a program that stimulates a double ended queue (deque) where you can add or remove elements from both the front and the back.
// Allow the user to choose operations like adding to th front, adding to the back, removing from the front, removing from the back, and displaying the cuurent contents in the deque

// INPUT:
// add_front(10)
// add_back 20
// add_front 5
// remove_back
// display

// OUTPUT:
// Current Deque: 5 10
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    int n;
    cout<<"Enter 1 to add front"<<endl;
    cout<<"Enter 2 to add back"<<endl;
    cout<<"Enter 3 to remove back"<<endl;
    cout<<"Enter 4 to display"<<endl;
    cout<<"Enter 5 to exit"<<endl;
    cout<<"Enter the Choice"<<endl;
    cin>>n;
    switch(n)
    {
        case 1:
        cout<<"Adding To The Front :"<<endl;
        int a;
        cout<<"Enter the element to add at front :";
        cin>>a;
        d.push_front(a);
        break;
        case 2:
        cout<<"Adding To The back :"<<endl;
        int b;
        cout<<"Enter the element to add at back :";
        cin>>n;
        d.push_back(b);
        break;
        case 3:
        cout<<"Remove at the back :"<<endl;
        d.pop_back();
        break;
        case 4:
        cout<<"Display"<<endl;
        for(int n:d)
        {
            cout<<n<<" ";
        }
        case 5:
        break;
        default:
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}