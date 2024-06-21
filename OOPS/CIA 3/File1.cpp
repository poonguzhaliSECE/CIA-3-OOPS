#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream f("example.txt");
    string line;
    while(!f.eof())
    {
        getline(f,line);
        cout<<line;
        cout<<endl;
    }
    f.close();
    return 0;
}