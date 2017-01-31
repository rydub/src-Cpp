#include<iostream>
using namespace std;

int main()
{
    int x=0, num, ans;
    cout << "Multiplication Table Generator" << endl;
    cout << "Enter an integer" << endl;
    cin >> num;

    while(x<=10)
    {
        ans= x*num;
        cout << num <<" * " << x << " = " << ans << endl;
        x++;
    }
    return 0;
}
