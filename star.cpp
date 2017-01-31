#include<iostream>
using namespace std;

void output_stars(int num)
{
    int x = 0;
    cout << num << ": ";
    while (x < num)
    {
        cout << "*";
        x++;
    }
    cout << endl;
}
