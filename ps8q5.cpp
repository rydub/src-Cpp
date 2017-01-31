#include<iostream>
using namespace std;

int main()
{
    string w1, w2;

    cout << "== String Compare ==" << endl;
    cout << "Enter a word" << endl;
    cin >> w1;
    cout << "Enter another word" << endl;
    cin >> w2;
    if (w1 == w2)
    {
        cout << "Words are exactly the same." << endl;
    }
    else if (w1 > w2)
    {
        cout << "\"" << w1 << "\" comes after \"" << w2 << "\"." << endl;
    }
    else if (w2 > w1)
    {
        cout << "\""<< w1 << "\" comes before \"" << w2 << "\"." << endl;
    }
    return 0;
}
