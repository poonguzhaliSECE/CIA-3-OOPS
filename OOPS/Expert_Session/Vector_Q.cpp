//write a program that reads an unknown numbers of integers from the user(until they enter a negative number), stores them in a vector, and then prints the sum of the elements in the vector.
//INPUT
//3 5 7 2 4 -1
//OUTPUT
// Sum Of Elements: 21
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n,sum=0;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        v.push_back(n);
    }
    for(int num:v)
    {
        sum=sum+num;
    }
    cout<<"Sum of Elements :"<<sum;
    return 0;
}