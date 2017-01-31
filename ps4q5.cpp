#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float income, mortgage, payment;
    cout << fixed;
    cout << "Enter your annual income and monthly mortgage separated by a space." << endl;
    cin >> income >> mortgage;
    if (income < 0 || mortgage < 0)
    {
        cout << "Both annual income and monthly mortgage must not be negative";
    }
    else if (mortgage <= ((income/12)*.3))
    {
        cout << "You can afford the house!" << endl;
    }
    else
    {
        payment = (income/12)*.3;
        cout << "You cannot afford the house." << endl;
        cout << "You can only afford a $" << setprecision(2) << payment << " monthly payment." << endl;
        return 0;
    }
}
