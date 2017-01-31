#include<iostream>
#include<string>
#include <cctype>

using namespace std;

int main()
{
    bool flag = true;
    string name;
    cout << "What's your first name?" << endl;
    cin >> name;
    for (int i = 0; i < name.length(); i++)
    {
        if(!isalpha(name[i]))
        {
            flag = false;
            cout << "Your name cannot contain: " << name[i] << endl;
        }
    }
    if(flag)
    {
        cout << "Valid name." << endl;
    }
    else
    {
        cout << "Invalid name." << endl;
    }
    return 0;
}
