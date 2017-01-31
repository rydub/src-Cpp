#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << "Enter a number.  I will find the square root." << endl;
    float root;
    cin >> root;
    float ans;
    ans = sqrt(root);
    cout << "Square root: " << setprecision(1) << ans;

    return 0;
}
