#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed;
    float num;
    float result;
    cout << "Enter a number.  I will add one to it." << endl;
    cin >> num;
    result = num + 1;
    cout << "Result: " << setprecision(1) << result << endl;

    return 0;
}
