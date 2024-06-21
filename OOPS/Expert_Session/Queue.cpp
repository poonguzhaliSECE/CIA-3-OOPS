//QUEUE
//Queue is a container adaptor that provides FIFO - First In First Out
//It is compared to deque
//Syntax:
//queue<datatype> queue_name;
//Key Features
//It follows FIFO order
//It provides Push, pop and front 
//No iterations are a random access
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}