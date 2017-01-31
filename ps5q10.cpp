#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int i=1;
    string name, line;
    ifstream filename;
    cout << "Enter filename" << endl;
    cin >> name;
    filename.open(name.c_str());
    if(!filename)
    {
        cout << "File not found" << endl;
    }
    else
    {
        while (!filename.eof())
        {
            getline(filename, line);
            cout << i << ": " << line << endl;
            i++;
        }
    }
    filename.close();
    return 0;
}
