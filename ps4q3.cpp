#include<iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter your score:" << endl;
    cin >> score;
    if (score < 0)
    {
        cout << "You got less than zero?  This score is invalid.";
    }
    else if (score < 7000)
    {
         cout << "You need " << (7000 - score) << " more points for a 1UP";
    }
    else
    {
        cout << "1UP";
    }
    return 0;
}
