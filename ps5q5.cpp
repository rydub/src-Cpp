#include<iostream>
using namespace std;

int main()
{
    int num, factorial, result=1;
    cout << "Enter a number:" << endl;
    cin >> num;
    if (num < 0)
    {
        cout << "Factorial not defined for negative numbers." << endl;
    }
    else
    {
        factorial = num;
        while (factorial > 0)
        {
            result = factorial * result;
            factorial--;
        }
        cout << num << "! = " << result << endl;
    }

}
