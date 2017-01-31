#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed;
    float principal;
    float interest;
    float earned;
    float balance;
    cout << "== One Year Interest Calculator ==" << endl;
    cout << "Enter principal followed by interest rate." << endl;
    cout << "Omit the dollar sign and percent symbol." << endl;
    cout << "e.g. 13500.23 5.3" << endl;
    cin >> principal >> interest;
    balance = principal + (principal * (interest/100));
    earned = principal *(interest/100);

    cout << "Interest earned: $" << setprecision(2) <<  earned << endl;
    cout << "Ending balance: $" << setprecision(2) << balance << endl;
    cout << "Big money!" <<endl;

    return 0;
}

