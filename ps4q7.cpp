#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float x, left, right;
    cout << fixed << "Enter three numbers:" << endl;
    cin >> left >> right >> x;
    if (x <= right && x >= left)
    {
        cout << setprecision(6) << x << " is within the range [" << left << ", " << right << "]" << endl;
    }
    else
    {
        cout << setprecision(6) << x << " is outside the range [" << left << ", " << right << "]" << endl;
    }
    return 0;
}
