#include<iostream>
using namespace std;

int main()
{
    string line;
    cout << "Enter a line of text" << endl;
    getline(cin, line);
    for (int x = 0; x < line.length(); x++)
    {
        line[x] = toupper(line[x]);
    }
    cout << line << endl;
    return 0;
}
