#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream f("example.txt",ios::app);
    f<<"I am not good";
    f.close();
}