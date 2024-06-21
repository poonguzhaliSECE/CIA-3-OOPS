//Dequeue:
//Syntax:
    //dequeue<datatype> dequeue_name;
//     Double ended queue
//     It is mainly targeted towards insertion and deletion(start,end) this make fast addition or deletion from both end efficient;
// Key Features
//     Dynamic size
//     Time complexity : O(1)
//     Elements are stored contiguously through vector
#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d={1,2,3,4,5};
    for(int n:d)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    d.push_back(6);
    for(int n:d)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    d.push_front(0);
    for(int n:d)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}