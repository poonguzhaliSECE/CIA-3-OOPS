//VECTOR
//Dynamic Array
//can resize itself automatically 
//provide random access to element
//most commonly used in c++ containers
//easy to use and flexibiliy to use
//Key Feature:
//Dynamic
//Random access
//Time complexity : O(1)
//Stored in contiguous manner

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vect_name={1,2,3,4,5};
    for(int num:vect_name)
    {
        cout<<num<<" ";
    }
    return 0;
}