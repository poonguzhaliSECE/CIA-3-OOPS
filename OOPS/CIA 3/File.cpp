#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fe;
    fe.open("example.txt");
    if(fe)
    {
        cout<<"Opened";
    }
    else{
        cout<<"Error";
    }
    cout<<endl;
    fe.close();
}