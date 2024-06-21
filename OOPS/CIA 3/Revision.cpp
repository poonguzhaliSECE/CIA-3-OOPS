#include<iostream>
#include<array>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{
    array<int,6> arr1;//={1,2,3,4,5,6};//initialize array1
    array<int,6> arr2={10,20,30,40,50,60};//initialize array2 
    //display array1
for(int &i:arr1)
{
    cin>>i;
}
for(const int &i:arr1)
{
    cout<<i;
}
return 0;
}