#include<iostream>
#include<array>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{
    array<int,6> arr1={1,2,3,4,5,6};//initialize array1
    array<int,6> arr2={10,20,30,40,50,60};//initialize array2 
    //display array1
    for(int i : arr1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //output:1 2 3 4 5 6

    //display array2
    for(int i : arr2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //output:10 20 30 40 50 60

    cout<<"Front Element: "<<arr1.front()<<endl;//first element array 1
    //output:1

    cout<<"Back Element: "<<arr1.back()<<endl;//last element array 1
    //output:6

    cout<<"Front Element: "<<arr2.front()<<endl;//first element array 2
    //output:10

    cout<<"Back Element: "<<arr2.back()<<endl;//last element array 2
    //output:60

    arr1.swap(arr2);//swapping 
    cout<<"Front Element: "<<arr1.front()<<endl;//first element after swapping array 1
    //output:10

    cout<<"Back Element: "<<arr1.back()<<endl;//last element after swapping array 1
    //output:60

    cout<<"Front Element: "<<arr2.front()<<endl;//first element after swapping array 2
    //output:1

    cout<<"Back Element: "<<arr2.back()<<endl;//last element after swapping array 2
    //output:6

    cout<<"Is Empty(Array 1): "<<arr1.empty()?"1":"0";//to check is empty
    cout<<endl;
    //output: 0

    cout<<"Is Empty(Array 2): "<<arr2.empty()?"1":"0";// to check is empty
    cout<<endl;
    //output:0

    cout<<"At 4: "<<arr1.at(4)<<endl;//give value at specific position
    //output:50

    cout<<"At 3: "<<arr2.at(3)<<endl;//give value at specific position
    //output:4

    arr1.fill(4);//all values as 4
    //displaying after modifying
    for(int i : arr1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //output:4 4 4 4 4 4

    cout<<"Size of Array 1: "<<arr1.size()<<endl;//array 1 size
    //output:6

    cout<<"Size of Array 2: "<<arr2.size()<<endl;//array 2 size
    //output:6

    cout<<"Max Size of array 1: "<<arr1.max_size()<<endl;//max array 1 size
    //output:6
    
    cout<<"Max Size of array 1: "<<arr2.max_size()<<endl;//max array 2 size
    //output:6
    
    cout<<"Total Size of array 1: "<<sizeof(arr1)<<endl;//total size of array 1
    //output:24
    
    cout<<"Total size of array 2: "<<sizeof(arr2)<<endl;//total size of array 2
    //output:24
    
    cout<<"Data of array 1: "<<arr1.data()<<endl;//address of first element
    //output:address
    
    cout<<"Data of array 2: "<<arr2.data()<<endl;//address og first element
    //output:address
    
    array<int,5> arr={8,5,0,9,2};
    sort(arr.begin(), arr.end());//sorting
    cout << "Array after sorting: ";
    //displaying
    for (int i : arr) {
        cout << i << " ";
    }
    cout<<endl;
    //output:0 2 5 8 9

    reverse(arr.begin(),arr.end());//reverse array
    cout<<"Array After reverse: ";
    //displaying
    for(int i : arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //output:9 8 5 2 0

    return 0;
}