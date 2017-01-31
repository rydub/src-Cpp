#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float num1;
    float num2;
    float result;

    cout << fixed;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    result = num1 * num2;
    cout << "Result: " << setprecision(3) << result << endl;

    return 0;
}
