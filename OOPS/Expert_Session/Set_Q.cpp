//Write a program that reads a list of wordds from the user, stores them in a seet to remove duplicates, and then prints the unique wordds in the alphabetical order
//Input:
// apple orange banana apple grape orange
//Output:
// Unique Word: apple banana grape orange
#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n=6;
    set<string> str;
    string ft;
    cout<<"Enter the word:";
    while(n--)
    {
        cin>>ft;
        str.insert(ft);
    }
    cout<<endl;
    for(auto n:str)
    {
        cout<<n<<" ";
    }
    return 0;
}