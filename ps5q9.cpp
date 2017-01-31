#include<iostream>
using namespace std;

int main()
{
    int height, row = 1, level = 1;
    cout << "Enter a height" << endl;
    cin >> height;
    if (height > 0)
    {
        while (level <= height)
        {
            row = 1;
            while (row <= level)
            {
                cout << "*";
                row++;
            }
            cout << endl;
            level++;
        }
    }
    else
    {
        cout << "Height must be at least one." << endl;
    }
    return 0;
}
