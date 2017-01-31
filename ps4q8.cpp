#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float num1, num2, option, answer;
    cout << fixed << "Enter first number:" << endl;
    cin >> num1;
    cout << "Enter second number:" << endl;
    cin >> num2;
    cout << "Enter a menu option:\n[1] Add:\n[2] Subtract:\n[3] Multiply:\n[4] Divide:" << endl;
    cin >> option;
    if (option == 1)
    {
        answer = num1 + num2;
        cout << setprecision(6) << num1 << " + " << num2 << " = " << setprecision(1) << answer;
    }
    else if (option == 2)
    {
        answer = num1 - num2;
        cout << setprecision(6) << num1 << " - " << num2 << " = " << setprecision(1) << answer;
    }
    else if (option == 3)
    {
        answer = num1 * num2;
        cout << setprecision(6) << num1 << " * " << num2 << " = " << setprecision(1) << answer;
    }
    else if (option == 4)
    {
        if (num2 == 0)
        {
            cout << "If division is selected the second number cannot be zero" << endl;
        }
        else
        {
            answer = num1 / num2;
            cout << setprecision(6) << num1 << " / " << num2 << " = " << setprecision(1) << answer;
        }
    }
    else
    {
        cout << "Invalid menu option";
    }
    return 0;
}
