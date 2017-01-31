#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    int i=0;
    ifstream filename;
    string name;
    string word;
    cout << "Enter filename" << endl;
    cin >> name;
    filename.open(name.c_str());
    if(!filename)
    {
        cout << "File not found" << endl;
        return 0;
    }
    while(!filename.eof())
    {
        filename >> word;
        i++;
    }
    cout << "Found " << i << " words." << endl;
    filename.close();
    return 0;
}
