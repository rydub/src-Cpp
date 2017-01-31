#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a birth year:" << endl;
    cin >> year;
    if (year >= 1997)
    {
        cout << "Generation Z" << endl;
    }
    else if (year >=1981)
    {
        cout << "Generation Y" << endl;
    }
    else if (year >=1965)
    {
        cout << "Generation X" << endl;
    }
    else if (year >= 1946)
    {
        cout << "Baby Boomers" << endl;
    }
    else if (year >= 1883)
    {
        cout << "Lost Generation" << endl;
    }
    else
    {
        cout << "Wow, you are old!" << endl;
    }
    return 0;
}
