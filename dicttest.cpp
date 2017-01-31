#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string output;
ifstream dict;
dict.open("test");
if(!dict)
{
    cout << "Error" << endl;
    return 0;
}
while (!dict.eof())
    {
    getline(dict, output);
    cout << output << endl;
    }
}
