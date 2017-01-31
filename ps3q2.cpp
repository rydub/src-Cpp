#include <iostream>
using namespace std;

int main()
{
    int num;
    int rem;
    cout << "Enter an integer" << endl;
    cin >> num;
    rem = num % 2;
    cout << num << " mod 2 = " << rem;

    return 0;
}
