#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << fixed;
    float x;
    cout << "Enter a number:" << endl;
    cin >> x;
    if (x >= 30.5)
    {
        cout << setprecision(6) << x << " is greater than or equal to 30.5" << endl;
    }
    else
    {
        cout << setprecision(6) << x << " is under 30.5" << endl;
    }
    return 0;
}
