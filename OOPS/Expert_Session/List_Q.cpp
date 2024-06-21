//Create a program that maintains a sorted list integers.
//Read integers from the user and insert each one into the correct position in the list to keep it sorted. When the user enters -1, display the sorted list
//Input
//4 1 3 2 -1
//Output
//Sorted List: 1 2 3 4
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    int n;
    while(1)
    {
        cin>>n;
        if(n==-1)
        break;
        l.push_back(n);
    }
    l.sort();
    for(int num:l)
    {
        cout<<num<<" ";
    }
}