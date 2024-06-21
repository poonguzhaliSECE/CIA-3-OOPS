//LAMBDA CONCEPTS
// Lambda functions are convinient way to define a anonymus functions in a object inline
// Lambda functions are expressions can capture variables from the suurounding code and provide the easiest way to define sort and single used functions
//1. Inline function Defn
//2. Variable capture
//3. Flexibility
//4. Efficiency
//Simple Lambda Function
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    //store value inside a box (like)
    auto print = [](int value)
    {
        cout<<value<<" ";
    };
    for_each(v.begin(),v.end(),print);//begin and end is used as an iterator for this loop
    return 0;
}