#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << fixed;
    cout << "== Fahrenheit to Kelvin converter ==" << endl;
    cout << "Enter Fahrenheit:" << endl;
    float fahr;
    float kelvin;
    cin >> fahr;
    kelvin = ((fahr - 32.0) * (5.0/9.0)) + 273.15;
    cout << "Kelvin: " << setprecision(1) << kelvin <<  endl;

    return 0;
}
